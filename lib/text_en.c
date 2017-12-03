#include "text_id.h"


static const char *en_text[] = 
{
   "Parent",
   "Welcome",
   "Audio",
   "Video",
   "Picture",
   "Recorder",
   "Radio",
   "Ebook",
   "Calendar",
   "Calculator",
   "Stopwatch",
   "Setup",
   "Russia",
   "Worm",
   "Housekeeper",

    /*music msg*/
    "volume\t%d",
    "play type\t%s",
    "loop type\t%s",
    "operatoe\t%s",
    "speed\t%d",
    "fade on/out\t%s",
    "AB wait time\t%d",
    "AB play count\t%d", 
    "eq mode\t%s",
    "  user1\t%d",
    "  user2\t%d",
    "  user3\t%d",

    "list play",
    "dir play",
    "preview play", 

    "only one",
    "random",
    "in order", 
    "all play",

    "AB play",

    "NORMAL",
    "ROCK",
    "POP",
    "CLASSIC",
    "SOFT",
    "JAZZ",
    "DBB",
    "SRS",
    "WOW",
    "BASS",         
    "USER",          

    "ON",          
    "OFF",           

    "audio device error",      
    "music",        
    "%s\n[bit/s]:%u\n[sample_rate]:%u\n[channel]:%u\n%s\n%s",
    "music setup",    
    "My Music",  

    /*video msg*/
    "Video",
    "Volume \t %d",
    "Loop mode \t %s",
    "Jump to \t %d",
    "Progress \t %s",
    "File info",
    "SEQUENCE",
    "REPEAT_ONE",
    "REPEAT_ALL",
    "RANDOM",
    "ON",
    "OFF",
    "File:%s\nTotal time:%d:%d\nBit rate: %d\nSample rate: %d\nFile path:%s\nWidth: %d\nHeight: %d",
    "Video Menu",
    "Video Info",
    "My Video",

     /*picture msg*/
     "Picture",
     "Zoom",
     "Move",
     "Roate",
     "Pic info",
     "Music",
     "Adjust",
     "Slide show\t%d",
     "Pict menu",
     "Pict info",
     "My picture",

    /*recorder msg*/
    "Recorder",
    "Bit Perpoint\t%s",
    "Bit Rate    \t%s",
    "Channel     \t%s",
    "Sample Rate \t%s",
    "Encode Mode \t%s",
    "File Forma    \t%s",
    "Sound Source  \t%s",
    "Record Gain   \t%d",
    "Silence Detect\t%s",
    "Vor Time      \t%d",
    "Record Volume \t%d",
    "Listen        \t%s",
    "Listen Volume \t%d",
    "Last Time     \t%d",
    "Audio Param",
    "ON",
    "OFF",
    "Single",
    "Double",
    "STEREO",
    "JOINT STEREO",
    "DUAL CHANNLE",
    "MONO",
    "Recording",
    "Stopped",
    "Paused",
    "Record Status : %s",
    "Recorded Time : %d",
    "File Format   : %s",
    "Record Source : %s",
    "The Bit Rate  : %s",
    "All Rest Time : %d",
    "Recorder Warning!",
    "Please clean the dir of /media/recorder!",
    "My_recorder",

    /*radio msg*/
    "Radio",
    "Model",
    "Search",
    "Fine Turn",
    "Game list",
    "Game Save",
    "Game Dele",
    "Game Record",
    "USA",
    "JAP",
    "Radio Menu",


    /*ebook msg*/
    "ebook",     
    "OFF",       
    "ON",        
    "auto page\t%s",  
    "page time\t%d",  
    "mark tag",  
    "ebook setup",    
    "open file error",
    "file is null，can't be accessed，or can't be read",
    "My Ebook",

    /*Calendar msg*/
    "Calendar",
    "Jan",
    "Feb", 
    "Mar",
    "Apr",
    "May",
    "June", 
    "July",
    "Aug",
    "Sep",
    "Oct",
    "Nov",
    "Dec",
    "Sun",
    "Mon", 
    "Tue", 
    "Wed", 
    "Thu", 
    "Fri", 
    "Sat",
    /*calc msg*/
    "calc",

    /*stopwatch msg*/
    "StopWatch",

    /*setup msg*/
    "key sound", 
    "backlight time",
    "poweroff time",   
    "language",  
    "time and date",      
    "system information",   
    "system setup",     
    "ON",
    "OFF",
    "%dmin",       
    "mGallery-PMP\nmemory: %dK\ndisk space: %dM\nfree space: %dM\nfirmware version:20070524\n",

 
    /*russis msg*/
    "RUSSIA",
    "START",
    "GAME OVER",
    "PAUSED",
    "WARNING",
    "The document of /media/cfg/russia_score.conf nonexistent or the user can't read!\nPlease disposal!",
    "The user can not open the file of /media/cfg/russia_score.conf or don't have the power of creat file in the dir of /media/cfg!\nPlease disposal!",
    "High Score",
    "Set Level \t %d",
    "First Score: %d\nSecond Score: %d\nThird Score: %d\nFourth Score: %d\nFifth Score: %d\n",
    "LEVEL:%d",
    "SCORE:%d",
    /*worm msg*/
    "WORM",
    "WARNING",
    "The document of /media/cfg/worm_score.conf nonexistent or the user can't read!\nPlease disposal!",
    "The user can not open the file of /media/cfg/worm_score.conf or don't have the power of creat file in the dir of /media/cfg!\nPlease disposal!",
    "START",
    "Set Level \t %d",
    "High Score",
    "SCORE:%d",
    "LEVEL:%d",  
    "The game is over, please restart!",
    "First Score: %d\nSecond Score: %d\nThird Score: %d\nFourth Score: %d\nFifth Score: %d\n",
    /*housekeeper msg*/
    "HOUSEKEEPER",
    "WARNING",
    "The document of /media/cfg/housekeeper_score.conf nonexistent or the user can't read!\nPlease disposal!",
    "The user can not open the file of /media/cfg/housekeeper_score.conf or don't have the power of creat file in the dir of /media/cfg!\nPlease disposal!",
    "UNDO",
    "RESTART",
    "Set Level \t %s",
    "Set rank \t %s",
    "High Score",
    "LEVEL:%s RANK:%d SCORE:%d",
    "First Score: %d\nSecond Score: %d\nThird Score: %d\nFourth Score: %d\nFifth Score: %d\n",
    "PREV",
    "NEXT",
};

PMP_TEXT_DOMAIN_INFO __pmp_text_domain_en =  {"en", 1000, en_text};