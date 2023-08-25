 //fichier fonc0.c

#include <stdio.h>
#include <stdlib.h>
#include "include/fonc0.h"

Fun f_id(Nat n){
  Fun x;
  int i;
  x.val=malloc(n*sizeof(Nat));
  x.N=n;
  for(i=0;i<n;i++){
    x.val[i]=i;
  }
  return x;
}

Nat f_taille(Fun f){
  return f.N;
}

Nat f_val(Fun f, int i){
  return f.val[i];
}

Fun f_modif(Fun f, int i, int j){
  f.val[i]=j;
  return f;
}

Fun f_comp(Fun f,Fun g){
  Fun x;
  Nat n;
  int i;
  x.N=f.N;
  n=x.N;
  x.val=malloc(n*sizeof(Nat));
  for(i=0;i<n;i++){
    x.val[i]=f.val[g.val[i]];
  }
  return x;  
}

void f_print(Fun f){
   int i;
   for(i=0;i<f.N;i++){
     printf("f(%d) -> %d \n",i,f.val[i]);
  } 
}
