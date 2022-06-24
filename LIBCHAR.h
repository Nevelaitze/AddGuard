#ifndef LIBCHAR_H
#define LIBCHAR_H
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

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

int LIB_CHAR_Public_Str_Lenght(char *var_str)/// функция под названием LIB_CHAR_Public_Str_Lenght жрет var_str и то что прилетает в облать памяти char* и какает интом
{
    if(var_str == NULL) return -1; /// если переменная var_str равна  переменной NULL возвращаем -1
    int i = 0;/// создаем областьпамяти инт для переменной i которая равна 0
    while(1) /// создаем замкнутый цикл
    {
        if (var_str[i] == '\0') return i;/// если (буква var_str[i] из строки var_str равна концу строки то вернуть порядковый номер буквы;
        i = i+1;/// к старому адресу буквы прнибавляем единицу чтоб получить адрес буквы в строке
    }
}
char* LIB_CHAR_Public_Append_Char_To_String(char* var_str,char var_bukva)   ///5 заголовок функции LIB_CHAR_Public_Append_Char_To_String которая возвращает char* и на вход берёт char* var_str,char var_bukva
{   ///6 если по русскти то эта функция доюавляеь букву в строку. тоесть она кушает стороку, кушает букву, и какаяет новой строкой в конце которой будет добавлена  скушанная буква
    ///7   йцу э ----> йцуэ
    if(var_str == NULL) ///8 если пееменная var_str равна NULL то делаем следующее

    {
        var_str = (char*) malloc (2*sizeof (char)); ///9 функция oc кушац sizeof 2 раза и то что прилетает в область памяти char. понятное дело, что она не блекхол и не может только кушать, поэтому она какает var_str
        var_str[0] = '\0';///10 могу ошибаться .если var_str ноль то переходим на следущую строку
    }

    int var_str_len =  LIB_CHAR_Public_Str_Lenght(var_str); ///  создаем область памяти  var_str_len положить результат вызова функции LIB_CHAR_Public_Str_Lenght(то что кушает функция (строка)) какает числом которое является длинной строки.
    var_str = (char*)realloc(var_str,var_str_len + 2);/// var_str = (создаем область памяти с неизвестной длинной) расширяем область памяти (var_str,var_str_len + 2)

    var_str[var_str_len] = var_bukva;  ///даем переменной var_sзначение var_bukva
    var_str[var_str_len + 1] = '\0';   ///увеличиваем значение var_str_len на 1 с целью узнать номер строки
    return var_str; /// возвращаем var_str
}
void LIB_CHAR_Public_Put_String(char* var_str) /// вызываем функцию LIB_CHAR_Public_Put_String которая на вход берет строку и возвращает пустоту
{
    unsigned int i = 0;  /// задаем переменной i значение 0
    while(1)  /// создаем замкнутый цикл
    {
        if(var_str[i] == '\0') /// если строка начнается с символа окончания строки
        {
            ///putchar('\n'); /// печатаем '\n'
            break;  /// останавливаем цикл
        }
        putchar(var_str[i]); /// печатаем строку и ее номер
        i = i + 1; /// последовательно увеличиваем номер строки
    }
    return; /// ничего не возвращаем
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
    char* var_str = NULL;


    while(1)
    {
        char c = getchar();
        if(c == '\n') break;
        var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,c);
    }

    return var_str;

}

#endif // LIBCHAR_H

















