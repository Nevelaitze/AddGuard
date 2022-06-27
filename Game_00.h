#ifndef GAME_00_H
#define GAME_00_H
#include <LIBCHAR.h>


void printsimbol(void)
{
    char j = 0;

    while(1)
    {

        int i = 80;

        printf("%d\n",j);
        while(i>0)
        {
            putchar(j);
            i--;
        }
        LIB_CHAR_WAIT_ENTER();
        j++;

    }
}

void game_00()
{

    char * var_str = NULL;
    char var_term_len = 80;

    var_str = LIB_CHAR_Public_Get_String();


    char var_str_len = LIB_CHAR_Public_Str_Lenght(var_str);

    char abc = var_term_len - var_str_len;
    if(abc < 0) LIB_CHAR_Public_Put_String((char*)"ERROR !!! ::: var_str_len > 80");

    for(int i = 0; i< abc; i ++) putchar(' ');
    LIB_CHAR_Public_Put_String(var_str);




    return;





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



