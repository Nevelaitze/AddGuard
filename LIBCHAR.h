#ifndef LIBCHAR_H
#define LIBCHAR_H
#include <stdio.h>
#include <stdlib.h>

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


#endif // LIBCHAR_H

















