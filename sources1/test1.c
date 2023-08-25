// fichier test1.c

#include<stdio.h>
#include<stdlib.h>
#include "include/permut.h"

int main()
{
    Perm p = f_id();
    printf("c'est une permutation : %s (normalement oui)\n", p_ispermut(p) ? "oui" : "non");
    p = f_modif(p,1,0);
    printf("c'est une permutation : %s (normalement non)\n", p_ispermut(p) ? "oui" : "non");
    f_print(p);
   
    
    return 0;
}
