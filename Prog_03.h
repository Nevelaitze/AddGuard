#ifndef PROG_03_H
#define PROG_03_H
#include <LIBCHAR.h>


int Prog_04(void)   ///2 описание функции Prog_04
{
    char* var_str = NULL;   ///3 создание области памяти, неопределённого размера (где каждая ячейка является байтом) с именем var_str. Положить значение NULL
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,' '); ///4 на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и '
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,' '); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и ''
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,' '); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и ''
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,' '); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и ''
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,' '); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'X'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'X'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'X'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'O'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'O'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'B'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'B'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,' '); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и ' '
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'L'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'l'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'L'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'l'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'E'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'e'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'H'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'H'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'!'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и '!'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'!'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и '!'
    var_str = LIB_CHAR_Public_Reverse_String(var_str);
    LIB_CHAR_Public_Put_String(var_str);

  return 4;
}
int Prog_05()
{

    char c = getchar();


    putchar(c);



    return  5;

}
int prog_7(void)
{
   char var_c = 'P';
   char var_a = 'I';
   char var_b = 'Z';
   char var_d = 'D';
   char var_N = '/n';
   char var_r = 'A';
   char *var_str = NULL;
   int i = 0;
   char x = 2;
   int h = ( h % 5 == 0) ;
  while(1)
  {         x = x + 1 ;
        int n = putchar(var_c);
       if( x > 1) putchar(var_a);
       if( x > 1) putchar(var_b);
       if( x > 1) putchar(var_d);
       if( x > 1) putchar(var_r);
       if( x == h ) putchar(var_N);
       if( x > 20) break;
  }
         return 0 ;
}
int prog_8(void)
{

    char* var_str = NULL;

    var_str = (char*)malloc(2*sizeof(char));




return 8;
}
int Prog_03(void)
{
  char var_q=0;

  while (1)
  {
    putchar('\t');
    putchar(var_q);
    putchar('\t');
    putchar(' ');
    LIB_CHAR_Public_Putchar_Bits(var_q);
    putchar(' ');
    putchar('|');
    fun_private_putchar_digit(fun_private_dimention_of_number(var_q));
    putchar('|');
    putchar(' ');
    LIB_CHAR_Public_Putchar_Number(var_q);
    putchar(' ');
    putchar(' ');
    putchar(' ');
    putchar('\n');
    getchar();
    var_q = var_q+1;
    if (var_q == 1000)break;
  }
  return 2;
}


void  Prog_06_printsimbol(void)
{
   char j = 0;

   while(1)
   {

       int i = 80;

       while(i>0)
       {
           putchar(j);
           i--;
       }
       LIB_CHAR_WAIT_ENTER();
       j++;

   }
}
void  Prog_09_fun_return_str(void)
{
   while (1)
   {
       char * var_str = NULL;
       char var_term_len = 80;

       var_str = LIB_CHAR_Public_Get_String();

       char var_str_len = LIB_CHAR_Public_Str_Lenght(var_str);

       char abc = var_term_len - var_str_len;
       if(abc < 0) LIB_CHAR_Public_Put_String((char*)"ERROR !!! ::: var_str_len > 80");

       for(int i = 0; i< abc; i ++) putchar(' ');
       LIB_CHAR_Public_Put_String(var_str);
   }

}








#endif // PROG_03_H
