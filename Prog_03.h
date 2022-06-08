#ifndef PROG_03_H
#define PROG_03_H
#include <LIBCHAR.h>

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

#endif // PROG_03_H
