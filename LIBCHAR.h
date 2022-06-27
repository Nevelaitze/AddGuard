#ifndef LIBCHAR_H
#define LIBCHAR_H
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define BOOL char
#define FALSE 0
#define TRUE 1
#define EOT "EOT"


char* LIB_CHAR_Free_Staring(char* var_str)
{
    printf("\LIB_CHAR_Free_Staringn");
    if(var_str == NULL) return var_str;

    var_str = (char*)realloc(var_str,0);

    var_str = NULL;

    return var_str;
}

void fun_private_putchar_digit(char var_c )
{
    if( var_c ==0) putchar('0');
    if( var_c ==1) putchar('1');
    if( var_c ==2) putchar('2');
    if( var_c ==3) putchar('3');
    if( var_c ==4) putchar('4');
    if( var_c ==5) putchar('5');
    if( var_c ==6) putchar('6');
    if( var_c ==7) putchar('7');
    if( var_c ==8) putchar('8');
    if( var_c ==9) putchar('9');
    return;
}
void fun_private_print_bit(char byte,char number)
{
  char bit = (byte>>number) & 1 ;
  fun_private_putchar_digit(bit);
}
void LIB_CHAR_Public_Putchar_Bits(char byte)
{
     char number = 8*sizeof (byte) ;
     while (1)
     {
         number = number-1;
         fun_private_print_bit(byte,number);
         if (number==0) break;
     }
}
char fun_private_dimention_of_number(char var_c)
{
    char var_dig = 0;
    char var_tmp = 0;
    var_tmp = var_c;
    while (1)
    {
        var_c = var_tmp;
        var_tmp = var_c/10;
        if (var_tmp == 0) break;
        var_dig+=1;
    }
    return var_dig + 1;
}
void LIB_CHAR_Public_Putchar_Number(char var_c )
{
    if(var_c < 0)
    {
        putchar('-');
        if(var_c == -128)
        {
            putchar('1');
            putchar('2');
            putchar('8');
            return;
        }
        var_c *=-1;
    }

    char var_tmp = 0;
    char var_ost = 0;
    var_tmp = var_c;
    while (1)
    {
        var_c = var_tmp;
        var_tmp = var_c/10;
        var_ost = var_c%10;
        fun_private_putchar_digit(var_ost);
        /////////////
        ///
        /// тут необходимо бувку зпсунуть в жопу строки
        /////////////
        if (var_tmp == 0) break;
    }
    /////////////
    ///а фот тут надо распечатать строку. но наоборот
    /////////////
    return;
}
int LIB_CHAR_Public_Str_Lenght(char *var_str)
{
    printf("4\n");
    if(var_str == NULL)
    {
        printf("5\n");
        return -1;
    }
    printf("6\n");
    int i = 0;
     printf("7\n");
    while(1)
    {
        printf("         %d         8\n",i);
        printf("    ----------->    %s   %d \n",var_str,i);


        if (var_str[i] == '\0')
        {
            printf("9\n");
            return i;
        }
        printf("10\n");
        printf("\t %d) \n');",i,var_str[i]);
        i = i+1;
    }
    printf("11\n");
}
char* LIB_CHAR_Public_Append_Char_To_String(char* var_str,char var_bukva)
{

printf("\n\n\tLIB_CHAR_Public_Append_Char_To_String\n");


    if(var_str == NULL)
    {
        var_str = (char*) malloc (2*sizeof (char));
        var_str[0] = '\0';
        printf("2\n");
    }

    printf("\n\n3\n");
    int var_str_len = 50;// LIB_CHAR_Public_Str_Lenght(var_str);


    var_str = (char*)realloc(var_str,(var_str_len + 2));
printf("\n\n  pos\n");
    var_str[var_str_len] = var_bukva;

    var_str[var_str_len + 1] = '\0';

    return var_str;
}
void LIB_CHAR_Public_Put_String(char* var_str)
{
    unsigned int i = 0;
    while(1)
    {
        if(var_str[i] == '\0')
        {
            ///putchar('\n'); /// печатаем '\n'
            break;
        }
        putchar(var_str[i]);
        i = i + 1;
    }
    return;
}
char* LIB_CHAR_Public_Reverse_String(char* var_str) /// вызываем функцию LIB_CHAR_Public_Reverse_String которая берет на вход строку с неизвестным количеством символов и возвращает неизвестное количество символов
{

    char *var_invert_str = NULL;
    unsigned int var_Str_Origin_len = LIB_CHAR_Public_Str_Lenght(var_str);
    unsigned int i = var_Str_Origin_len - 1;
    while(1)
    {
        var_invert_str = LIB_CHAR_Public_Append_Char_To_String(var_invert_str,var_str[i]);
        if (i == 0) break;
        i--;
    }
    ////var_str ------> delete after//////
    return var_invert_str;
}

void LIB_CHAR_WAIT_ENTER(void)
{
   char c =0 ;
   while(c!=13)  c = getch();
}
void LIB_CHAR_help(void)
{
    LIB_CHAR_Public_Put_String((char*)"USE:");


    LIB_CHAR_Public_Put_String((char*)"\n ---> LIB_CHAR_Public_Putchar_Bits( byte);            print number bit by bit\n");
    LIB_CHAR_Public_Put_String((char*)"\n ---> LIB_CHAR_Public_Putchar_Number( var_c );        print number \n");
    LIB_CHAR_Public_Put_String((char*)"\n ---> LIB_CHAR_Public_Str_Lenght( var_str );          return lenght of string\n");
    LIB_CHAR_Public_Put_String((char*)"\n ---> LIB_CHAR_Public_Append_Char_To_String( var_c ); add letter in end off dtring\n");
    LIB_CHAR_Public_Put_String((char*)"\n ---> LIB_CHAR_Public_Put_String( var_c );            print string \n");
    LIB_CHAR_Public_Put_String((char*)"\n ---> LIB_CHAR_Public_Reverse_String( var_c );        reverse string\n");

}
char* LIB_CHAR_Public_Get_String(void)
{
     printf("\n\n\t\tLIB_CHAR_Public_Get_String\n");
    char* var_str = NULL;


    while(1)
    {
        char c = getchar();
        if(c == '\n') break;
        var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,c);
    }

    return var_str;

}



BOOL LIB_CHAR_STR_CMP(char* var_str_1,char* var_str_2)
{
    printf("LIB_CHAR_STR_CMP");
    if( var_str_1 == NULL) return FALSE;
    if( var_str_2 == NULL) return FALSE;


    int var_len_1 = LIB_CHAR_Public_Str_Lenght(var_str_2);
    int var_len_2 = LIB_CHAR_Public_Str_Lenght(var_str_2);


    if(var_len_1<0) return FALSE;
    if(var_len_2<0) return FALSE;

    if(var_len_2 != var_len_1) return FALSE;

    int i = 0;
    while(1)
    {
        if(var_str_1[i]!=var_str_2[i])return FALSE;
        i++;
        if(i == var_len_1) break;
    }
    return TRUE;
}


int LIB_CHAR_Public_Txt_Lenght(char **var_Text)
{
    if(var_Text == NULL) return -1;
    int i = 0;
    while(1)
    {
        if (LIB_CHAR_STR_CMP(var_Text[i],(char*)EOT)) return i;
        i = i+1;
    }
}
 char * LIB_CHAR_Public_Append_Sting_To_String(char * var_string_1, char* var_string_2)
 {
     printf("LIB_CHAR_Public_Append_Sting_To_String");

     if(var_string_2 == NULL) return var_string_1;

     int var_len = LIB_CHAR_Public_Str_Lenght(var_string_2);




     int i = 0;
     while(1)
     {


         var_string_1 = LIB_CHAR_Public_Append_Char_To_String(var_string_1, var_string_2[i]);



         if(i==var_len) break;
         i++;
     }

    return var_string_1;
 }



char** LIB_CHAR_Public_Append_String_To_Text(char**var_Text,char*var_str)
{

    if(var_str == NULL)
    {
        return var_Text;

    }

    int var_txt_len =  LIB_CHAR_Public_Txt_Lenght(var_Text);


    if(var_txt_len == -1)
    {
        var_Text = (char**) malloc (2*sizeof (char*));
        var_Text[0] = LIB_CHAR_Public_Append_Sting_To_String(var_Text[0], (char*)EOT);

    }

    var_Text = (char**)realloc(var_Text,var_txt_len + 2);

    var_Text[var_txt_len] = LIB_CHAR_Public_Append_Sting_To_String(var_Text[var_txt_len],var_str);

    var_Text[var_txt_len] = LIB_CHAR_Public_Append_Sting_To_String(var_Text[var_txt_len],(char*)EOT);


    return var_Text;


    return var_Text;
}

char** LIB_CHAR_Public_Get_Text(void)
{

    printf("1\n");

    char** var_Text = NULL;

    while(1)
    {
        char *var_str = LIB_CHAR_Public_Get_String();

        var_Text = LIB_CHAR_Public_Append_String_To_Text(var_Text,var_str);




        if(LIB_CHAR_STR_CMP(var_str,(char*)EOT))
        {
            var_str = LIB_CHAR_Free_Staring(var_str);
            break;
        }
    }

    return var_Text;
}

void LIB_CHAR_Public_Put_Text(char**var_Text)
{

    unsigned int i = 0;
    while(1)
    {
        if(LIB_CHAR_STR_CMP(var_Text[i],(char*)EOT)) break;
        LIB_CHAR_Public_Put_String(var_Text[i]);
        i = i + 1;
    }
    return;
}


















#endif // LIBCHAR_H
















