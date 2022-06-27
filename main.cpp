#include <Prog_00.h>
#include <Prog_01.h>
#include <Prog_02.h>
#include <Prog_03.h>
#include <LIBCHAR.h>
#include <Game_00.h>




int main()  ///0 описание основной функции мейн
{
/*
   char * a = NULL;
   char * b = (char*)"NULL";



   a = LIB_CHAR_Public_Append_Char_To_String(a,b[0]);
   a = LIB_CHAR_Public_Append_Char_To_String(a,b[1]);
   a = LIB_CHAR_Public_Append_Char_To_String(a,b[2]);
   a = LIB_CHAR_Public_Append_Char_To_String(a,'5');
   a = LIB_CHAR_Public_Append_Char_To_String(a,'5');
   a = LIB_CHAR_Public_Append_Char_To_String(a,'5');

   printf("\n  [%s] \n",a);
*/

/*

    char * a = NULL;
    int b = LIB_CHAR_Public_Str_Lenght(a);

    a = LIB_CHAR_Public_Get_String();
    b = LIB_CHAR_Public_Str_Lenght(a);
    printf("b == %d  %s",b,a);

    char * c = (char*)EOT;
    int g = LIB_CHAR_Public_Str_Lenght(c);

    printf("g == %d  %s",g,c);

    return 0;
    printf("0\n");
*/

    char** var_Text = NULL;
    var_Text = LIB_CHAR_Public_Get_Text();

    ///LIB_CHAR_Public_Put_Text(var_Text);


        game_00();


    ///prog_8();
    ///prog_7();
    /// Prog_06();
    /// Prog_05(); ///выводит на экран ё1 символ с клавиатуры. Программа читает букву с экрана, помещает её в память и выводит на экран.
    /// Prog_04(); ///1вызов функции Prog_04
    /// Prog_03();
    /// Prog_02();
    /// Prog_01();
    /// Prog_00();
    return 0;
}






