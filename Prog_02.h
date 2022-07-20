#ifndef PROG_02_H
#define PROG_02_H
char fun_Add(char var_1,char var_2)
{
    char var_summ =  var_1 + var_2;
    return var_summ;
}
char fun_Mull(char var_1,char var_2)
{
    char var_Mull = var_1 * var_2;
    return var_Mull;
}
char fun_dev(char var_1,char var_2)
{
    char var_dev = var_1 / var_2;
    return var_dev;
}
char fun_otvetLate(char var_a,char var_b, char var_c,char var_d,char var_e, char var_f,char var_g,char var_z)
{
    return fun_Mull(fun_dev(fun_Mull(var_a,fun_Mull(fun_Mull(fun_Mull(var_b,fun_Add(var_c,var_d)),var_e),var_f)),var_z),var_g);
}
char func_otvet(char var_a,char var_b, char var_c,char var_d,char var_e, char var_f,char var_g,char var_z)
{
    char var_cd = fun_Add(var_c,var_d);

    char var_bcd = fun_Mull(var_b,var_cd);

    char var_bcde = fun_Mull(var_bcd,var_e);

    char var_bcdef = fun_Mull(var_bcde,var_f);

    char var_abcdef = fun_Mull(var_a,var_bcdef);

    char var_abcdefz = fun_dev(var_abcdef,var_z);

    char var_abcdefzg = fun_Mull(var_abcdefz,var_g);
    return var_abcdefzg ;
}
int Prog_02()
{
    char var_1 = func_otvet(1,2,3,4,5,6,7,8);
    char var_2 = fun_otvetLate(1,2,3,4,5,6,7,8);
    if (var_1 != var_2) while(1);

    ///********(a(b(c+d)e+f)/z)*g
    ///(a(b(c+d)e+f)/z)*g==>/// c+d => cd
    ///(a(b*cd*e+f)/z)*g==>/// b*cd => bcd
    ///(a(bcd*e+f)/z)*g==>/// bcd*e => bcde
    ///(a(bcde+f)/z)*g==>/// bcde+f => bcdef
    ///(a*bcdef/z)*g==>/// a*bcdef => abcdef
    ///(abcdef/z)*g==>/// abcdef/z => abcdefz
    /// abcdefz*g==>/// abcdefz*g => abcdefzg

    return 1;
 }
#endif // PROG_02_H
