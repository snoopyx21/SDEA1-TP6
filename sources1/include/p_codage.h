// fichier p_codage.h
#include "permut.h"

void f_act_ch(Fun f, char *T);  // prec : N == strlen(T)
void f_code(Perm p, char *T);   // prec : p est une perm, il existe k / strlen(T) = k*N
void f_decode(Perm p, char *T);
