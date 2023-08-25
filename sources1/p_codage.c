// fichier p_codage.c
#include "include/p_codage.h"

void f_act_ch(Fun f, char *T)  // prec : N == strlen(T)
{
    int i;
    char tmp[N];    // tableau auxiliaire pour éviter les effets de bord
                    // (écrasements pendant l'action de p)
    for(i=0;i<N; i++) tmp[f_val(f,i)] = T[i];
    for(i=0;i<N; i++) T[i] = tmp[i];
}

void f_code(Perm p, char *T)
// prec : p est une perm, il existe k / strlen(T) = k*N
{
    char *cc = T;
    while(*cc)
    {
        f_act_ch(p,cc);
        cc += N;
    }
}

void f_decode(Perm p, char *T)
{
    f_code(f_inverse(p),T);
}
