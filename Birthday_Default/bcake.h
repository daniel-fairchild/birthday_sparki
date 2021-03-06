/*0123456701234567012345670123456701234567012345670123456701234567
|----------------------------------------------------------------|
|                                                                | 0
|                                                                | 1
|                                                                | 2
|                                                                | 3
|                        #                                       | 4
|                       ###               ##                     | 5
|                       ###              ####                    | 6
|                      #####             ####                    | 7
|               #      #####             ####                    | 8
|               #       ###              ####      ##            | 9
|              ###       #                ##      ###            | 10
|              ####     ###               ##      ####           | 11
|             #####     ###               ##      ####           | 12
|              ###      ###       #       ##      ####           | 13
|               #       ###      ##       ##       ##            | 14
|               ##      ###     ####      ##       ##            | 15
|               ##      ###     ####      ##       ##            | 16
|               ##      ###     ####      ##       ##            | 17
|               ##      ###      ###      ##       ##            | 18
|               ##      ###  ##  ##   ##  ##       ##            | 19
|               ##  ##  ###  ##  ##   ##  ##  ###  ##            | 20
|               ##  ##  ###      ##       ##  ###  ##            | 21
|          ##   ##      ###      ##       ##       ##  ##        | 22
|        ####   ##      ###      ##       ##       ##  ####      | 23
|      #####    ##      ##       ##       ##       ##   #####    | 24
|     ####      ##       #       ##        #       ##      ###   | 25
|    ###        ##               ##                ##       ###  | 26
|    ##         ##               ##                ##        ### | 27
|    ##         ##               ##                ##         ## | 28
|   ###         ##               ##                ##         ## | 29
|   ###                          ##                          ### | 30
|   ####                         ##                         #### | 31
|   ######                       ##                       ###### | 32
|   ### ####                     ##                     ##### ## | 33
|   ###  #######                                     ######   ## | 34
|   ###     ########                             ########     ## | 35
|   ###        ##############           ##############        ## | 36
|   ###            ###############################            ## | 37
|   ###                   ################                    ## | 38
|   ###                                                       ## | 39
|   ###                                                       ## | 40
|   ###                                                       ## | 41
|   ###                                                      ### | 42
|   ####                                                     ### | 43
|   ####                                                    #### | 44
|   #####   ####                                     ###    #### | 45
|   ###### ######                                   ###### ##### | 46
|   ### #####  ##                                  ### ###### ## | 47
|   ###  ###    ##      #####          #####      ###    ###  ## | 48
|   ###         ###    #######        ########    ##          ## | 49
|   ###          ##   ###   ###      ###   ####  ###          ## | 50
|   ###          ### ###     ###     ##      ######           ## | 51
|   ###           #####       ###   ###       ####            ## | 52
|    ##            ##          #######         ##            ### | 53
|    ###                       ######                       ###  | 54
|     ####                                                 ###   | 55
|      #####                                             ####    | 56
|        ######                                       ######     | 57
|          ########                              ########        | 58
|             ############                ############           | 59
|                 ################################               | 60
|                       ####################                     | 61
|                                                                | 62
|                                                                | 63
|----------------------------------------------------------------|*/

PROGMEM prog_uchar bcake[]  = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,// 0
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,// 1
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,// 2
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,// 3
0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,// 4
0x00,0x00,0x03,0x80,0x00,0xc0,0x00,0x00,// 5
0x00,0x00,0x03,0x80,0x01,0xe0,0x00,0x00,// 6
0x00,0x00,0x07,0xc0,0x01,0xe0,0x00,0x00,// 7
0x00,0x02,0x07,0xc0,0x01,0xe0,0x00,0x00,// 8
0x00,0x02,0x03,0x80,0x01,0xe0,0x60,0x00,// 9
0x00,0x07,0x01,0x00,0x00,0xc0,0xe0,0x00,// 10
0x00,0x07,0x83,0x80,0x00,0xc0,0xf0,0x00,// 11
0x00,0x0f,0x83,0x80,0x00,0xc0,0xf0,0x00,// 12
0x00,0x07,0x03,0x80,0x80,0xc0,0xf0,0x00,// 13
0x00,0x02,0x03,0x81,0x80,0xc0,0x60,0x00,// 14
0x00,0x03,0x03,0x83,0xc0,0xc0,0x60,0x00,// 15
0x00,0x03,0x03,0x83,0xc0,0xc0,0x60,0x00,// 16
0x00,0x03,0x03,0x83,0xc0,0xc0,0x60,0x00,// 17
0x00,0x03,0x03,0x81,0xc0,0xc0,0x60,0x00,// 18
0x00,0x03,0x03,0x99,0x8c,0xc0,0x60,0x00,// 19
0x00,0x03,0x33,0x99,0x8c,0xce,0x60,0x00,// 20
0x00,0x03,0x33,0x81,0x80,0xce,0x60,0x00,// 21
0x00,0x63,0x03,0x81,0x80,0xc0,0x66,0x00,// 22
0x01,0xe3,0x03,0x81,0x80,0xc0,0x67,0x80,// 23
0x07,0xc3,0x03,0x01,0x80,0xc0,0x63,0xe0,// 24
0x0f,0x03,0x01,0x01,0x80,0x40,0x60,0x70,// 25
0x1c,0x03,0x00,0x01,0x80,0x00,0x60,0x38,// 26
0x18,0x03,0x00,0x01,0x80,0x00,0x60,0x1c,// 27
0x18,0x03,0x00,0x01,0x80,0x00,0x60,0x0c,// 28
0x38,0x03,0x00,0x01,0x80,0x00,0x60,0x0c,// 29
0x38,0x00,0x00,0x01,0x80,0x00,0x00,0x1c,// 30
0x3c,0x00,0x00,0x01,0x80,0x00,0x00,0x3c,// 31
0x3f,0x00,0x00,0x01,0x80,0x00,0x00,0xfc,// 32
0x3b,0xc0,0x00,0x01,0x80,0x00,0x03,0xec,// 33
0x39,0xfc,0x00,0x00,0x00,0x00,0x1f,0x8c,// 34
0x38,0x3f,0xc0,0x00,0x00,0x01,0xfe,0x0c,// 35
0x38,0x07,0xff,0xe0,0x03,0xff,0xf0,0x0c,// 36
0x38,0x00,0x7f,0xff,0xff,0xff,0x00,0x0c,// 37
0x38,0x00,0x00,0xff,0xff,0x00,0x00,0x0c,// 38
0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,// 39
0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,// 40
0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,// 41
0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x1c,// 42
0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x1c,// 43
0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,// 44
0x3e,0x3c,0x00,0x00,0x00,0x00,0x1c,0x3c,// 45
0x3f,0x7e,0x00,0x00,0x00,0x00,0x3f,0x7c,// 46
0x3b,0xe6,0x00,0x00,0x00,0x00,0x77,0xec,// 47
0x39,0xc3,0x03,0xe0,0x07,0xc0,0xe1,0xcc,// 48
0x38,0x03,0x87,0xf0,0x0f,0xf0,0xc0,0x0c,// 49
0x38,0x01,0x8e,0x38,0x1c,0x79,0xc0,0x0c,// 50
0x38,0x01,0xdc,0x1c,0x18,0x1f,0x80,0x0c,// 51
0x38,0x00,0xf8,0x0e,0x38,0x0f,0x00,0x0c,// 52
0x18,0x00,0x60,0x07,0xf0,0x06,0x00,0x1c,// 53
0x1c,0x00,0x00,0x07,0xe0,0x00,0x00,0x38,// 54
0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x70,// 55
0x07,0xc0,0x00,0x00,0x00,0x00,0x01,0xe0,// 56
0x01,0xf8,0x00,0x00,0x00,0x00,0x0f,0xc0,// 57
0x00,0x7f,0x80,0x00,0x00,0x01,0xfe,0x00,// 58
0x00,0x0f,0xff,0x00,0x00,0xff,0xf0,0x00,// 59
0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x00,// 60
0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,// 61
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,// 62
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,// 63
};

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
  sparki.updateLCD();
}
