#define NOTE_PAUSE 0
#define NOTE_B0 1
#define NOTE_C1 2
#define NOTE_CS1 3
#define NOTE_D1 4
#define NOTE_DS1 5
#define NOTE_E1 6
#define NOTE_F1 7
#define NOTE_FS1 8
#define NOTE_G1 9
#define NOTE_GS1 10
#define NOTE_A1 11
#define NOTE_AS1 12
#define NOTE_B1 13
#define NOTE_C2 14
#define NOTE_CS2 15
#define NOTE_D2 16
#define NOTE_DS2 17
#define NOTE_E2 18
#define NOTE_F2 19
#define NOTE_FS2 20
#define NOTE_G2 21
#define NOTE_GS2 22
#define NOTE_A2 23
#define NOTE_AS2 24
#define NOTE_B2 25
#define NOTE_C3 26
#define NOTE_CS3 27
#define NOTE_D3 28
#define NOTE_DS3 29
#define NOTE_E3 30
#define NOTE_F3 31
#define NOTE_FS3 32
#define NOTE_G3 33
#define NOTE_GS3 34
#define NOTE_A3 35
#define NOTE_AS3 36
#define NOTE_B3 37
#define NOTE_C4 38
#define NOTE_CS4 39
#define NOTE_D4 40
#define NOTE_DS4 41
#define NOTE_E4 42
#define NOTE_F4 43
#define NOTE_FS4 44
#define NOTE_G4 45
#define NOTE_GS4 46
#define NOTE_A4 47
#define NOTE_AS4 48
#define NOTE_B4 49
#define NOTE_C5 50
#define NOTE_CS5 51
#define NOTE_D5 52
#define NOTE_DS5 53
#define NOTE_E5 54
#define NOTE_F5 55
#define NOTE_FS5 56
#define NOTE_G5 57
#define NOTE_GS5 58
#define NOTE_A5 59
#define NOTE_AS5 60
#define NOTE_B5 61
#define NOTE_C6 62
#define NOTE_CS6 63
#define NOTE_D6 64
#define NOTE_DS6 65
#define NOTE_E6 66
#define NOTE_F6 67
#define NOTE_FS6 68
#define NOTE_G6 69
#define NOTE_GS6 70
#define NOTE_A6 71
#define NOTE_AS6 72
#define NOTE_B6 73
#define NOTE_C7 74
#define NOTE_CS7 75
#define NOTE_D7 76
#define NOTE_DS7 77
#define NOTE_E7 78
#define NOTE_F7 79
#define NOTE_FS7 80
#define NOTE_G7 81
#define NOTE_GS7 82
#define NOTE_A7 83
#define NOTE_AS7 84
#define NOTE_B7 85
#define NOTE_C8 86
#define NOTE_CS8 87
#define NOTE_D8 88
#define NOTE_DS8 89

PROGMEM int pitches[] = {
	0,
	31,
	33,
	35,
	37,
	39,
	41,
	44,
	46,
	49,
	52,
	55,
	58,
	62,
	65,
	69,
	73,
	78,
	82,
	87,
	93,
	98,
	104,
	110,
	117,
	123,
	131,
	139,
	147,
	156,
	165,
	175,
	185,
	196,
	208,
	220,
	233,
	247,
	262,
	277,
	294,
	311,
	330,
	349,
	370,
	392,
	415,
	440,
	466,
	494,
	523,
	554,
	587,
	622,
	659,
	698,
	740,
	784,
	831,
	880,
	932,
	988,
	1047,
	1109,
	1175,
	1245,
	1319,
	1397,
	1480,
	1568,
	1661,
	1760,
	1865,
	1976,
	2093,
	2217,
	2349,
	2489,
	2637,
	2794,
	2960,
	3136,
	3322,
	3520,
	3729,
	3951,
	4186,
	4435,
	4699,
	4978
};

typedef struct {
  uint8_t R;
  uint8_t G;
  uint8_t B;
} color_t;


color_t pitchcols[] = {
  {174, 0, 0}, //F♯4 -> dark red, 370hz -> 407nm
  {255, 0, 0}, //G4 -> red, 392hz -> 431nm
  {255, 0, 0}, //G♯4 -> red, 415hz -> 457nm
  {255, 102, 0}, //A4 -> orange-red, 440hz -> 484nm
  {255, 239, 0}, //B♭4 -> yellow, 466hz -> 513nm
  {153, 255, 0}, //B4 -> chartreuse, 494hz -> 543nm
  {40, 255, 0}, //C5 -> lime, 523hz -> 575nm
  {0, 255, 242}, //C♯5 -> aqua, 554hz -> 610nm
  {0, 122, 255}, //D5 -> sky blue, 587hz -> 646nm
  {5, 0, 255}, //D♯5 -> blue, 622hz -> 684nm
  {71, 0, 237}, //E5 -> blue, 659hz -> 725nm
  {99, 0, 178}, //F5 -> indigo, 698hz -> 768nm
};

