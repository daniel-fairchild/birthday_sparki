// http://samklang.mono.net/upl/website/nodehefter/Blhefteside14011081.pdf
// http://www.musikipedia.dk/noegler#4


typedef struct {
  int pitch;
  int duration;
  char* lyrics;
} note_t;

const note_t melody[]  = {
    {NOTE_C4, 4, "I dag er det"}, //
    {NOTE_F4, 4, NULL},
    {NOTE_F4, 8, NULL},
    {NOTE_F4, 8, NULL},
    {NOTE_A4, 4, "Adas foedselsdag"}, // 
    {NOTE_A4, 4, NULL},
    {NOTE_AS4, 4, NULL},
    {NOTE_G4, 4, NULL},
    {NOTE_E4, 4, NULL},
    {NOTE_PAUSE, 6, NULL}, 
    {NOTE_C4, 8, "hurra hurra hurra!"}, //
    {NOTE_F4, 3, NULL},
    {NOTE_F4, 8, NULL},
    {NOTE_A4, 3, NULL},
    {NOTE_A4, 8, NULL},
    {NOTE_C5, 2, NULL},
    {NOTE_PAUSE, 8, NULL},
    {NOTE_A4, 4, "hun sikkert sig en gave faar"}, // 
    {NOTE_AS4, 4, NULL},
    {NOTE_G4, 4, NULL},
    {NOTE_F4, 4, NULL},
    {NOTE_E4, 4, NULL},
    {NOTE_F4, 4, NULL},
    {NOTE_D4, 4, NULL},
    {NOTE_C4, 4, NULL},
    {NOTE_F4, 4, "som hun har oensket"}, // 
    {NOTE_D4, 4, NULL},
    {NOTE_E4, 4, NULL},
    {NOTE_F4, 4, NULL},
    {NOTE_A4, 4, NULL},
    {NOTE_C5, 3, "sig i aar"}, // 
    {NOTE_AS4, 8, NULL}, 
    {NOTE_A4, 4, NULL}, 
    {NOTE_F4, 4, "med dejlig chokolade"}, // 
    {NOTE_D5, 4, NULL},
    {NOTE_D5, 4, NULL},
    {NOTE_C5, 4, NULL}, // 
    {NOTE_AS4, 4, NULL},
    {NOTE_A4, 4, NULL},
    {NOTE_C5, 4, NULL},
    {NOTE_AS4, 4, NULL},
    {NOTE_G4, 4, "og kage til!"},
    {NOTE_F4, 2, NULL},
    {NOTE_E4, 2, NULL},
    {NOTE_F4, 2, NULL},
    {NOTE_PAUSE, 32, NULL},
    {NOTE_PAUSE, 2, NULL},
    {NOTE_PAUSE, 3, NULL},
  };
 
 
