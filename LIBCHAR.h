#ifndef LIBCHAR_H
#define LIBCHAR_H
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define FALSE 0
#define TRUE 1
#define EOFF '\0'


char* LIB_CHAR_Free_Staring(char* var_str)
{
    if(var_str == NULL) return var_str;

    var_str = (char*)realloc(var_str,0);

    var_str = NULL;

    return var_str;
}
void  fun_private_putchar_digit(char var_c )
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
void  fun_private_print_bit(char byte,char number)
{
  char bit = (byte>>number) & 1 ;
  fun_private_putchar_digit(bit);
}
void  LIB_CHAR_Public_Putchar_Bits(char byte)
{
     char number = 8*sizeof (byte) ;
     while (1)
     {
         number = number-1;
         fun_private_print_bit(byte,number);
         if (number==0) break;
     }
}
void  LIB_CHAR_Public_Putchar_Bits_Znak(char byte)
{

     char number = 1*sizeof (byte) ;
     while (1)
     {
         if (byte == 00100000) putchar(' ');
         if (byte == 00101100) putchar(',');
         if (byte == 00101110) putchar('.');

         if (byte != 00100000||00101100||00101110)
             putchar (number);


          number = number-1;
          if (number==0) break;
     }
}
char  fun_private_dimention_of_number(char var_c)
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
void  LIB_CHAR_Public_Putchar_Number(char var_c )
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
int   LIB_CHAR_Public_Str_Lenght(char *var_str)
{
    if(var_str == NULL)
    {    
        return -1;
    }
    int i = 0;
    while(1)
    {
        if (var_str[i] == '\0')
        {
            return i;
        }
        i = i+1;
    }

}
void  LIB_CHAR_Put_Char(char var_c)
{
    putchar(var_c);
}
char* LIB_CHAR_Public_Append_Char_To_String(char* var_str,char var_bukva)
{
    if(var_str == NULL)
    {
        var_str = (char*) malloc (2*sizeof (char));
        var_str[0] = '\0';
    }

    int var_str_len = LIB_CHAR_Public_Str_Lenght(var_str) ;

    var_str = (char*)realloc(var_str,(var_str_len + 2));

    var_str[var_str_len] = var_bukva;

    var_str[var_str_len + 1] = '\0';

    return var_str;
}
void  LIB_CHAR_Public_Put_String(char* var_str)
{
    unsigned int i = 0;
    while(1)
    {
        if(var_str[i] == '\0')
        {
            break;
        }
        putchar(var_str[i]);
        i = i + 1;
    }
    return;
}
char* LIB_CHAR_Public_Reverse_String(char* var_str)
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
    return var_invert_str;
}
void  LIB_CHAR_WAIT_ENTER(void)
{
   char c =0 ;
   while(c!=13)  c = getch();
}
void  LIB_CHAR_help(void)
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
    char* var_str = NULL;
    while(1)
    {
        char c = getchar();
        if(c == '\n') break;
        var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,c);
    }
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,' ');
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,EOFF);
    return var_str;
}
int   LIB_CHAR_Public_CMP_String (char* var_str1, char* var_str2 )
{
   int var_str_len1= LIB_CHAR_Public_Str_Lenght(var_str1);
   int var_str_len2= LIB_CHAR_Public_Str_Lenght(var_str2);
   if(var_str_len1 != var_str_len2 ) return FALSE;
   char i = 0;
    while(1)
    {
        if(var_str1[i]!=var_str2[i]) return FALSE;
        i++;
        if(var_str1[i],var_str2[i] == '\0')
        break;

    }



    return TRUE;
}
char* LIB_CHAR_Public_Append_Sting_To_String(char * var_string_1, char* var_string_2)
{

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
int   LIB_CHAR_Public_TXT_Lenght(char **var_TXT)
    {

        if(var_TXT == NULL) return -1;

        int var_TXT_len = 0 ;

        while (1)
        {

            if(var_TXT[var_TXT_len][0] == EOFF) break;
            var_TXT_len ++;
        }
       return var_TXT_len;
     }
char**LIB_CHAR_Public_Append_String_To_Text(char** var_TXT,char* var_str)
{
        int var_TXT_len = LIB_CHAR_Public_TXT_Lenght(var_TXT);
        ///printf("LEN NEXT[%d]\n",var_TXT_len);


        if(var_TXT_len == -1)var_TXT_len = 0;
        int var_str_len = LIB_CHAR_Public_Str_Lenght(var_str);
        if(var_str_len == -1)
        {
            var_str_len=0;
            var_str=LIB_CHAR_Public_Append_Char_To_String(var_str,'\0');
        }
        if(var_TXT == NULL)
        {
            var_TXT=(char**)realloc(var_TXT,(2)*sizeof(char*));
            var_TXT[0] = (char*)calloc(2,sizeof (char*));
            var_TXT[1] = (char*)calloc(2,sizeof (char*));
            var_TXT[0][0]='\0';
            var_TXT[1][0]= EOFF;
        }
        else
        {
            var_TXT=(char**)realloc(var_TXT,(var_TXT_len + 2)*sizeof(char*));
            var_TXT[var_TXT_len] = (char*)calloc(2,sizeof (char*));
            var_TXT[var_TXT_len + 1] = (char*)calloc(2,sizeof (char*));
            var_TXT[var_TXT_len][0]='\0';
            var_TXT[var_TXT_len + 1][0]= EOFF;
        }

        var_TXT[var_TXT_len] = LIB_CHAR_Public_Append_Sting_To_String(var_TXT[var_TXT_len],var_str);

        return var_TXT;
}
char**LIB_CHAR_Public_Get_TXT(void)
        {

                char** var_TXT = NULL;
                char *var_str = NULL;

                while(1)
                {
                    var_str = LIB_CHAR_Public_Get_String();
                    if(LIB_CHAR_Public_CMP_String(var_str,(char*) "EOFF "))
                    {
                        var_str = LIB_CHAR_Free_Staring(var_str);
                        var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,EOFF);
                    }

                    if(var_str[0] == EOFF) break;

                    var_TXT = LIB_CHAR_Public_Append_String_To_Text(var_TXT,var_str);




                    var_str = LIB_CHAR_Free_Staring(var_str);

                }

                var_str = LIB_CHAR_Free_Staring(var_str);
                return var_TXT;

        }
char**LIB_CHAR_Public_Put_TXT(char** var_TXT)
     {
        if (var_TXT == NULL) return 0;
        int i = 0;
        while (1)
        {
            if (var_TXT[i][0] == EOFF)break;
            LIB_CHAR_Public_Put_String(var_TXT[i]);
            i++;


        }








         return var_TXT;
     }
char* LIB_CHAR_Getstring_Fromstring (char* str,int colvobukavstart,int colvobukavend)
 {

     int len = LIB_CHAR_Public_Str_Lenght(str);

     if (colvobukavstart < 0)  return str;

     if (len < 0)  return str;


     if (colvobukavstart >= len)  return NULL;
     if (colvobukavend >= len)  return NULL;


     if (colvobukavstart > colvobukavend)  return str;

     if (colvobukavend < 0) colvobukavend = len;



    char* string = NULL;

    for(int i = colvobukavstart; i< colvobukavend; i++)
    {
        string = LIB_CHAR_Public_Append_Char_To_String(string,str[i]);
    }

    return string;
 }
char**LIB_CHAR_Text_Format(char* var_LongString, int var_Left_border,int var_Right_border, char var_l, char var_r)
{
    //////////////////////////////////////////////////////INPUT DATA START

    ///char c = getchar();
    ///char* var_LongString = NULL; for(int i = 1; i<800; i++) var_LongString = LIB_CHAR_Public_Append_Char_To_String(var_LongString,c);
    ///int var_Left_border = 15;
    ////int var_Right_border = 28;

    //////////////////////////////////////////////////////INPUT DATA END

    char* var_Left_Space = NULL;
    char* var_Buffer_Space = NULL;
    char* var_Right_Space = NULL;
    char* var_Itogo_String = NULL;
    char** var_Text = NULL;


    for(int i = 0; i<var_Left_border; i++) var_Left_Space = LIB_CHAR_Public_Append_Char_To_String(var_Left_Space,var_l);
    for(int i = 0; i<var_Right_border; i++) var_Right_Space = LIB_CHAR_Public_Append_Char_To_String(var_Right_Space,var_r);


    int var_Width = 80 - (var_Left_border + var_Right_border);
    if (var_Width<0) exit(-1);

    int var_start = 0;
    int var_end = var_start + var_Width;



    while(1)
    {


    var_Buffer_Space = LIB_CHAR_Getstring_Fromstring(var_LongString,var_start,var_end);

    if(var_Buffer_Space == NULL) break;

    var_start += var_Width;
    var_end   += var_Width;



     var_Itogo_String = LIB_CHAR_Public_Append_Sting_To_String(var_Itogo_String,var_Left_Space);
     var_Itogo_String = LIB_CHAR_Public_Append_Sting_To_String(var_Itogo_String,var_Buffer_Space);
     var_Itogo_String = LIB_CHAR_Public_Append_Sting_To_String(var_Itogo_String,var_Right_Space);





     var_Text = LIB_CHAR_Public_Append_String_To_Text(var_Text,var_Itogo_String);


     var_Itogo_String = LIB_CHAR_Free_Staring(var_Itogo_String);
     var_Buffer_Space = LIB_CHAR_Free_Staring(var_Buffer_Space);


    }

     ///printf("[%d]",LIB_CHAR_Public_TXT_Lenght(var_Text));
     ///LIB_CHAR_Public_Put_TXT(var_Text);


    var_Left_Space = LIB_CHAR_Free_Staring(var_Left_Space);
   var_Buffer_Space = LIB_CHAR_Free_Staring(var_Buffer_Space);
    var_Right_Space =  LIB_CHAR_Free_Staring(var_Right_Space);
    var_Itogo_String =  LIB_CHAR_Free_Staring(var_Itogo_String);




    return var_Text;

}


void LIB_CHAR_Public_Clear_Screen(void)
{
    system("cls");
}

    #endif // LIBCHAR_H
















