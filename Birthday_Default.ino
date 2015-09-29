#include <Sparki.h>  // include the robot library
#include "pitches.h" // include a list of pitches
#include "bcake.h"  //  birthday cake bitmap in byte array
#include "melody.h" //  the tune to play

// /------^-----\
// |            |
// | 69  70  71 |
// | 68  64  67 |
// |  7  21   9 |
// | 22  25  13 |
// | 12  24  94 |
// |  8  28  90 |
// | 66  82  74 |
// \____________/

int program = false;
int should_play = 0;

void draw_cake(){
  sparki.clearLCD();
  for(int y = 0; y < 64; y++){
    for(int x = 0; x < 8; x++){
      prog_uchar cb = pgm_read_byte_near( bcake + (y<<3)+x);
      for(int i = 0; i < 8; i++){
        if ((cb & (1<<(7-i)))){
          sparki.drawPixel(31+(x<<3) + i, y);
        }
      }
    }
  }
//  sparki.drawBitmap(31, 0, bcake, 64, 64);
  sparki.updateLCD();
}

void play_tune(){
  // play each note in the arrays
  int pitch = 1200;

  for (int thisNote = 0; thisNote < (sizeof(melody)/sizeof(note_t)); thisNote++) {
    if (thisNote & 1 > 0) 
      sparki.moveRight();
    else
      sparki.moveLeft();

    if (melody[thisNote].lyrics != NULL){
      sparki.clearLCD();
      sparki.drawString(0, 1, melody[thisNote].lyrics);
      sparki.updateLCD(); // 
    }
    // calculate the note duration as 1 second divided by note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = pitch/melody[thisNote].duration;
    sparki.beep(melody[thisNote].pitch, noteDuration);
    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    sparki.noBeep();
  }
  sparki.moveStop();
  sparki.clearLCD();
  sparki.updateLCD(); // 
}

void setup() {
  sparki.servo(SERVO_CENTER); // center the servo
}


void loop() {
  //Scan for IR Receiver
  int code = sparki.readIR();

  // if there is a valid remote button press
  if(code != -1){
    sparki.moveStop(); // stop the motor
    sparki.RGB(RGB_OFF); // clear the RGB
    program = false; // turn off the starter program
  } 

  switch(code){
  case 70: 
    sparki.moveForward(); 
    break;
  case 21: 
    sparki.moveBackward(); 
    break;
  case 67: 
  case 71: 
    sparki.moveRight(); 
    break;
  case 68: 
  case 69: 
    sparki.moveLeft(); 
    break;
  case 64: 
    sparki.moveStop();
    sparki.gripperStop(); 
    break;      

    // Gripper Buttons
  case 9:  
    sparki.gripperOpen(); 
    break;
  case 7:  
    sparki.gripperClose(); 
    break;

    // buzzer
  case 74: 
    should_play = should_play < 0 ? 0 : 1; 
    break;

    // Servo
  case 90: 
    sparki.servo(SERVO_LEFT); 
    break;
  case 28: 
    sparki.servo(SERVO_CENTER); 
    break;
  case 8: 
    sparki.servo(SERVO_RIGHT); 
    break;

    // RGB LED
  case 25: 
    sparki.RGB(RGB_OFF); 
    break;
  case 12: 
    sparki.RGB(RGB_RED); 
    break;
  case 24: 
    sparki.RGB(RGB_GREEN); 
    break;
  case 94: 
    sparki.RGB(RGB_BLUE); 
    break;

    // Program Control
  case 66:  
    sparki.moveStop();
    sparki.RGB(0,0,0);
    program = false; 
    break;
  case 82:  
    program = true; 
    break;
  }  

  if (should_play != 0){
    if (should_play == 1){
      play_tune();
      draw_cake();
      should_play = -1;
    }
    else
      should_play = 0;
  }
  // Run Autonomy Code if
  if(program == true){
    sparki.RGB(RGB_GREEN); // turn the light green
    sparki.moveForward(); // move Sparki forward
    int cm = sparki.ping(); // measures the distance with Sparki's eyes

    if(cm != -1) // make sure its not too close or too far
    { 
      if(cm < 20) // if the distance measured is less than 10 centimeters
      {
        sparki.RGB(RGB_RED); // turn the light red
        sparki.beep(); // beep!
        sparki.moveBackward(10); // back up 10 centimeters
        sparki.moveRight(30); // rotate right 30 degrees
      }
    }
    delay(100); // wait 0.1 seconds (100 milliseconds)
  }
}

