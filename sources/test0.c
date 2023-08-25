 //fichier test0.c
#include <stdio.h>
#include <stdlib.h>
#include "fonc0.c"

void main(){
  Fun x,y;
  x=f_id(3);
  y=f_id(4);
  f_taille(x);
  f_val(x,2);
  f_modif(x,2,1);
  f_comp(x,y);
  f_print(x);
  free(x.val);
}
