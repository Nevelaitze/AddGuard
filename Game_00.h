#ifndef GAME_00_H
#define GAME_00_H
#include <LIBCHAR.h>


void game_00()
{


   LIB_CHAR_Public_Put_String((char*)"\n\t\t\t=================================\n");
     LIB_CHAR_Public_Put_String((char*)"\t\t\t=     GAME_NAME_VERSION_0.0     =\n");
     LIB_CHAR_Public_Put_String((char*)"\t\t\t=================================\n");

     LIB_CHAR_WAIT_ENTER();

     LIB_CHAR_Public_Put_String((char*)"\n\n                                        hi!? << Mr Unknow");
     LIB_CHAR_Public_Put_String((char*)"\n       You : >>");
     char * var_answerString = NULL;

     var_answerString = LIB_CHAR_Public_Get_String();
    LIB_CHAR_Public_Put_String((char*)"\n\n                            nice to meat you << Mr Unknow");

    LIB_CHAR_Public_Put_String((char*)"\n       You : >>");


    return ;
}



#endif // LIBCHAR_H



