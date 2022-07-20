#ifndef PROG_00_H
#define PROG_00_H

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
char func_Solved_Optimized(char var_a,char var_b,char var_c,char var_d,char var_e,char var_g,char var_h,char var_I, char var_x,char var_z)
{
    return fun_dev( fun_Mull(var_e,fun_Mull(4,fun_Add(fun_Add(fun_Mull(var_I,fun_Add(var_a,var_b)),fun_Add(var_c,var_d)),fun_Mull(var_h,fun_Mull(fun_Add(var_z,var_x),fun_Add(var_z,var_x)))))), var_g);
}
char func_Solved(char var_a,char var_b,char var_c,char var_d,char var_e,char var_g,char var_h,char var_I, char var_x,char var_z)
{
    char var_ab = fun_Add(var_a,var_b);
    char var_cd = fun_Add(var_c,var_d);

    char var_zx = fun_Add(var_z,var_x);

    char var_Iab= fun_Mull(var_I,var_ab);

    char var_Iabcd = fun_Add(var_Iab,var_cd);

    char var_zxzx= fun_Mull(var_zx,var_zx);

    char var_hzxzx=fun_Mull(var_h,var_zxzx);

    char var_Iabcdhzxzx = fun_Add(var_Iabcd,var_hzxzx);

    char var_4Iabcdhzxzx = fun_Mull(4,var_Iabcdhzxzx);

    char var_e4Iabcdhzxzx = fun_Mull(var_e,var_4Iabcdhzxzx);

    char var_e4Iabcdhzxzxg=fun_dev( var_e4Iabcdhzxzx, var_g);

    return var_e4Iabcdhzxzxg;
}
int Prog_01()
{
    char var_1 = func_Solved(-1,2,3,64,125,6,7,8,9,33);
    char var_2 = func_Solved_Optimized(-1,2,3,64,125,6,7,8,9,33);
    if (var_1 != var_2) while(1);
    ///          e*((4*((I*(a+b)+c+d)+h*(z+x)^2))/g)
    ///e*((4*((I*ab+c+d)+h*(z+x)^2))/g) /// a+b => ab   ++
    ///e*((4*((I*ab+cd)+h*(z+x)^2))/g) /// c+d => cd    ++
    ///e*((4*((I*ab+cd)+h*(zx)^2))/g) /// z+x => zx     ++
    ///e*((4*((Iab+cd)+h*(zx)^2))/g) /// I*ab => Iab    ++
    ///e*((4*((Iabcd)+h*(zx)^2))/g) /// Iab+cd => Iabcd ++
    ///e*((4*(Iabcd+h*(zx)^2))/g) /// Iab+cd => Iabcd   ++
    ///e*((4*(Iabcd+h*zx*zx))/g) ///  (zx)^2=> zx*zx    ++
    ///e*((4*(Iabcd+h*zxzx))/g) ///  zx*zx=> zxzx       ++
    ///e*((4*(Iabcd+hzxzx))/g) ///  h*zxzx=> hzxzx      ++
    ///e*((4*(Iabcd+hzxzx))/g) ///  Iabcd+hzxzx=> Iabcdhzxzx ++
    ///e*(4*Iabcdhzxzx)/g) ///  4*Iabcdhzxzx=>4Iabcdhzxzx ++
    ///e*(4Iabcdhzxzx)/g) ///  4*Iabcdhzxzx=>4Iabcdhzxzx  ++
    ///e4Iabcdhzxzx/g ///  e4Iabcdhzxzx/g=>e4Iabcdhzxzxg  ==
    ///e4Iabcdhzxzxg ///  return=e4Iabcdhzxzxg            ==
    return 1;
 }
#endif // PROG_00_H

