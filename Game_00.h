#ifndef GAME_00_H
#define GAME_00_H
#include <LIBINT.h>
#include <locale>
#include <conio.h>



    void LIB_CHAR_Public_Put_Char_Russian(int var_c)
    {
    var_c = getchar();


    int letter =  -128;



    /*if (var_c == 'A') ;
    if (var_c == 'Б') letter-=2;
    if (var_c == 'В') letter-=3;
    if (var_c == 'Г') letter-=4;
    if (var_c == 'Д') letter-=5;
    if (var_c == 'Е') letter-=6;
    if (var_c == 'Ё') letter-=7;
    if (var_c == 'Ж') letter-=8;
    if (var_c == 'З') letter-=9;
    if (var_c == 'И') letter-=10;
    if (var_c == 'Й') letter-=11;
    if (var_c == 'К') letter-=12;
    if (var_c == 'Л') letter-=13;
    if (var_c == 'М') letter-=14;
    if (var_c == 'Н') letter-=15;
    if (var_c == 'О') letter-=16;
    if (var_c == 'П') letter-=17;
    if (var_c == 'Р') letter-=18;
    if (var_c == 'С') letter-=19;
    if (var_c == 'Т') letter-=20;
    if (var_c == 'Ф') letter-=21;
    if (var_c == 'Х') letter-=22;
    if (var_c == 'Ц') letter-=23;
    if (var_c == 'Ч') letter-=24;
    if (var_c == 'Ш') letter-=25;
    if (var_c == 'Щ') letter-=26;
    if (var_c == 'Ъ') letter-=27;
    if (var_c == 'Ы') letter-=28;
    if (var_c == 'ь') letter-=29;
    if (var_c == 'Э') letter-=30;
    if (var_c == 'Ю') letter-=31;
    if (var_c == 'Я') letter-=32;*/

    printf("%c\n",letter);


    }
    void LIB_CHAR_Public_Put_String_Russian(char* var_str)
    {
    unsigned int i = 0;
    while(1)
    {
        printf("---------->");
        if(var_str[i] == '\0')
        {
            break;
        }
        LIB_CHAR_Public_Put_Char_Russian(var_str[i]);
        i = i + 1;
    }
    return;
    }


    void fun_Say_Player_PutString(char*var_str)
    {
     LIB_CHAR_Public_Put_String((char*)"    You>> : ");
     LIB_CHAR_Public_Put_String(var_str);

     return;
    }
    void fun_Say_NPC_PutString(char*var_str)
    {
        static int var_brain_Level = 0;

        putchar('\n');
        int width = 75;

        int len = LIB_CHAR_Public_Str_Lenght(var_str);
        int len_2 = LIB_CHAR_Public_Str_Lenght((char*)" : <<NPC    ");

        int lenght = width - len - len_2;

        if(lenght<1)
        {
         putchar('\0');
         putchar('\n'); ////////HERE
         lenght = 75;
        }
        else
        {
            int i = 0;
            while(1)
        {

         putchar(' ');
         i++;
         if(i == lenght)break;

        }
        }
        if(var_brain_Level == 1)
        {

        }

        if(var_brain_Level == 2)
        {

        }

        if(var_brain_Level == 3)
        {

        }

        var_brain_Level++;


        LIB_CHAR_Public_Put_String(var_str);
        LIB_CHAR_Public_Put_String((char*)" : <<Mr Unknow");
        LIB_CHAR_Public_Put_String((char*)"\n\n");


        return;
    }
    char* fun_get_string_echo_binary_0(void)
    {
        char* var_str = NULL;
        while(1)
        {
            printf("1");
            char c = getch();

            LIB_CHAR_Public_Putchar_Bits(c);
            printf("2");
            if(c == 13) break;
           var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,c);
           printf("3");

        }
        var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,' ');
        printf("4");
        var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,EOFF);
        printf("5");
        return var_str;
    }

    char* fun_get_string_echo_binary_1(void)
    {
        char* var_str = NULL;
        while(1)
        {
             int c = getch();

             if  (c == ' ') putchar(' ');

             if  (c == ',') putchar(',');

             if  (c == '.') putchar('.');


            LIB_CHAR_Public_Putchar_Bits_Znak(c);

            var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,c);
        }
        var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,' ');
        var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,EOFF);
        return var_str;
    }




     char* getstringfromstring (char* str,int colvobukavstart,int colvobukavend)
     {

         int len = LIB_CHAR_Public_Str_Lenght(str);

         if (colvobukavstart < 0)  return str;

         if (len < 0)  return str;


         if (colvobukavstart > len)  return str;
         if (colvobukavend > len)  return str;


         if (colvobukavstart > colvobukavend)  return str;

         if (colvobukavend < 0) colvobukavend = len;



        char* string = NULL;

        for(int i = colvobukavstart; i< colvobukavend; i++)
        {
            string = LIB_CHAR_Public_Append_Char_To_String(string,str[i]);
        }

        return string;
     }


    void kostratov(char* var_str)
    {

            while (1)

        {

        char w = 0;
        char q = 20;

        char dlinaobrezka = q - w;

        char* var_str = NULL;

        char len =   LIB_CHAR_Public_Str_Lenght(var_str);


        char ostatok = len - dlinaobrezka;


        var_str = LIB_CHAR_Public_Get_String();

        char* var_stroka = getstringfromstring (var_str, w, q);

        char i = ostatok;

        char p = '\0';

        char* stroka =  getstringfromstring(var_str,i,p);

            LIB_CHAR_Public_Put_String((char*)"\n");

            LIB_CHAR_Public_Put_String(var_stroka);
        char* var_stroka1 = getstringfromstring (stroka, w, q);
            LIB_CHAR_Public_Put_String(var_stroka1);

        if( LIB_CHAR_Public_Str_Lenght(var_str)< q)break;
            }
    }


     void test(void)
     {

         char var_start = 0;

         char var_end = 20;

         char* var_str = LIB_CHAR_Public_Get_String();



         while (1)
         {

                char* var_str1 = getstringfromstring (var_str, var_start, var_end);

                char* var_str2 =  getstringfromstring(var_str,var_end, -1);

                int var_str_2_Len = LIB_CHAR_Public_Str_Lenght(var_str2);

                LIB_CHAR_Public_Put_String(var_str1);   LIB_CHAR_Public_Put_String((char*)"\n");



                var_str1 = LIB_CHAR_Free_Staring(var_str1);

                var_str1  = getstringfromstring (var_str2, var_start, var_end);


                if(var_str_2_Len == 0) break;
         }


   exit(0);

       ///-128 ---> А ---->-112
       /// -127-----Б----->-111
       /// -126-----В----->-110

            char c = 0;
            while(1)
            {
            c = getchar();

            printf("%d %c\n",c , c);

            }
            exit(0);
}


 void game_00()
 {
     test();

     LIB_CHAR_Public_Put_String((char*)"\n\t\t\t=================================\n");
     LIB_CHAR_Public_Put_String((char*)"\t\t\t=     GAME_NAME_VERSION_0.0     =\n");
     LIB_CHAR_Public_Put_String((char*)"\t\t\t=================================\n");

     LIB_CHAR_WAIT_ENTER();

     fun_Say_NPC_PutString((char*)" Хули ты там ты? "); putchar('\n');
     fun_Say_Player_PutString((char*)" ");
     char * var_answerString = NULL;
     var_answerString = fun_get_string_echo_binary_0();


     fun_Say_NPC_PutString((char*)" Хули ты несёшь??");

     fun_Say_Player_PutString((char*)" "); var_answerString = fun_get_string_echo_binary_0();

     fun_Say_NPC_PutString((char*)" Ебать, ты позор нации , что там по пунктуации ?");

    /// fun_Say_Player_PutString((char*)" "); var_answerString = fun_get_string_echo_binary_0();

     ///fun_Say_NPC_PutString((char*)" это похоже на мятеж, иди-ка брат говна поешь");
     ///fun_Say_Player_PutString((char*)" "); var_answerString = fun_get_string_echo_binary_0();
     ///fun_Say_NPC_PutString((char*)" ,,,,,,,,,,,,[            ]. не благодари ");
     ///fun_Say_Player_PutString((char*)" "); var_answerString = fun_get_string_echo_binary_0();

     printf("asdfasdfasdf");
     ///LIB_CHAR_WAIT_ENTER();



    return ;
}

#endif // LIBCHAR_H

















