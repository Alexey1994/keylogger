#ifndef KEY_H_INCLUDED
#define KEY_H_INCLUDED

#define VK_LBUTTON	    1
#define VK_RBUTTON	    2
#define VK_CANCEL	    3
#define VK_MBUTTON	    4
#define VK_BACK	        8
#define VK_TAB	        9
#define VK_CLEAR	    12
#define VK_RETURN	    13
#define VK_SHIFT	    16
#define VK_CONTROL	    17
#define VK_MENU	        18
#define VK_PAUSE	    19
#define VK_CAPITAL	    20
#define VK_KANA	        0x15
#define VK_HANGEUL	    0x15
#define VK_HANGUL	    0x15
#define VK_JUNJA	    0x17
#define VK_FINAL	    0x18
#define VK_HANJA	    0x19
#define VK_KANJI	    0x19
#define VK_ESCAPE	    0x1B
#define VK_CONVERT	    0x1C
#define VK_NONCONVERT	0x1D
#define VK_ACCEPT	    0x1E
#define VK_MODECHANGE	0x1F
#define VK_SPACE	    32
#define VK_PRIOR	    33
#define VK_NEXT	        34
#define VK_END	        35
#define VK_HOME	        36
#define VK_LEFT	        37
#define VK_UP	        38
#define VK_RIGHT	    39
#define VK_DOWN	        40
#define VK_SELECT	    41
#define VK_PRINT	    42
#define VK_EXECUTE	    43
#define VK_SNAPSHOT	    44
#define VK_INSERT	    45
#define VK_DELETE	    46
#define VK_HELP	        47
#define VK_LWIN	        0x5B
#define VK_RWIN	        0x5C
#define VK_APPS	        0x5D
#define VK_SLEEP	    0x5F
#define VK_NUMPAD0	    0x60
#define VK_NUMPAD1	    0x61
#define VK_NUMPAD2	    0x62
#define VK_NUMPAD3	    0x63
#define VK_NUMPAD4	    0x64
#define VK_NUMPAD5	    0x65
#define VK_NUMPAD6	    0x66
#define VK_NUMPAD7	    0x67
#define VK_NUMPAD8	    0x68
#define VK_NUMPAD9	    0x69
#define VK_MULTIPLY	    0x6A
#define VK_ADD	        0x6B
#define VK_SEPARATOR	0x6C
#define VK_SUBTRACT	    0x6D
#define VK_DECIMAL	    0x6E
#define VK_DIVIDE	    0x6F
#define VK_F1	        0x70
#define VK_F2	        0x71
#define VK_F3	        0x72
#define VK_F4	        0x73
#define VK_F5	        0x74
#define VK_F6	        0x75
#define VK_F7	        0x76
#define VK_F8	        0x77
#define VK_F9	        0x78
#define VK_F10	        0x79
#define VK_F11	        0x7A
#define VK_F12	        0x7B
#define VK_NUMLOCK	    0x90
#define VK_SCROLL	    0x91
#define VK_LSHIFT	    0xA0
#define VK_RSHIFT	    0xA1
#define VK_LCONTROL	    0xA2
#define VK_RCONTROL	    0xA3
#define VK_LMENU	    0xA4
#define VK_RMENU	    0xA5

char key(char key);
char key_up(unsigned char k);

#endif // KEY_H_INCLUDED
