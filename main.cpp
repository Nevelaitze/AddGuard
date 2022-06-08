#include <Prog_00.h>
#include <Prog_01.h>
#include <Prog_02.h>
#include <Prog_03.h>
#include <LIBCHAR.h>



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
        var_str = (char*)malloc(2*sizeof (char)); ///9 функция malloc кушац sizeof 2 раза и то что прилетает в область памяти char. понятное дело, что она не блекхол и не может только кушать, поэтому она какает var_str
        var_str[0] = '\0';///10 могу ошибаться .если var_str ноль то переходим на следущую строку
    }

    int var_str_len =  LIB_CHAR_Public_Str_Lenght(var_str); ///  создаем область памяти  var_str_len положить результат вызова функции LIB_CHAR_Public_Str_Lenght(то что кушает функция (строка)) какает числом которое является длинной строки.
    var_str = (char*)realloc(var_str,var_str_len + 2);/// var_str = (создаем область памяти с неизвестной длинной) расширяем область памяти (var_str,var_str_len + 2)

    var_str[var_str_len] = var_bukva; ///
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
            putchar('\n');
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
    ////var_str ------> delete after//////
    return var_invert_str;
}
int Prog_04(void)   ///2 описание функции Prog_04
{
    char* var_str = NULL;   ///3 создание области памяти, неопределённого размера (где каждая ячейка является байтом) с именем var_str. Положить значение NULL
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'F'); ///4 на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'F'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'U'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'U'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'C'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'C'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'K'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'K'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,' '); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и ' '
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'U'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'U'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'o'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'O'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'U'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'U'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,' '); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и ' '
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'N'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'E'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'g'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'N'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'E'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'g'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'R'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и 'R'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'!'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и '!'
    var_str = LIB_CHAR_Public_Append_Char_To_String(var_str,'!'); /// на область памяти var_str кладём результат работы функции LIB_CHAR_Public_Append_Char_To_String котораявызывается с аргументом var_str и '!'
    var_str = LIB_CHAR_Public_Reverse_String(var_str);
    LIB_CHAR_Public_Put_String(var_str);

  return 4;
}

int main()  ///0 описание основной функции мейн
{
      Prog_04(); ///1вызов функции Prog_04
      Prog_03();
      Prog_02();
      Prog_01();
      Prog_00();
    return 0;
}

