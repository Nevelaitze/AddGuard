#ifndef LIBINT_H
#define LIBINT_H
#include <LIBCHAR.h>>



void  LIB_int_Public_Put_String(int* var_str)
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
int   LIB_int_Public_Str_Lenght(int *var_str)
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
int* LIB_INT_Public_Append_int_To_String(int* var_str,int var_bukva)
{
    if(var_str == NULL)
    {
        var_str = (int*) malloc (2*sizeof (int));
        var_str[0] = '\0';
    }

    int var_str_len = LIB_int_Public_Str_Lenght(var_str) ;

    var_str = (int*)realloc(var_str,(var_str_len + 2));

    var_str[var_str_len] = var_bukva;

    var_str[var_str_len + 1] = '\0';

    return var_str;
}
int* LIB_INT_Public_Get_String(void)
{
    int* var_str = NULL;
    while(1)
    {
        int c = getchar();
        if(c == '\n') break;
        var_str = LIB_INT_Public_Append_int_To_String(var_str,c);
    }
    var_str = LIB_INT_Public_Append_int_To_String(var_str,' ');
    var_str = LIB_INT_Public_Append_int_To_String(var_str,EOFF);
    return var_str;
}







#endif // LIBINT_H
