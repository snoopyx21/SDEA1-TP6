 //fichier permut.c
#include <stdio.h>
#include <stdlib.h>
#include "include/permut.h"

Bool p_ispermut(Fun f){
  for(i=0;i<f.N;i++){
    nb_equal=0;
    for(j=0;j<f.N;j++){
      if(f.val[j]==i) nb_equal++;
    }
    if(nb_equal!=1){
      printf("pas une permutation, retour faux \n");
      return 0;
    }
  }
  return 1;
}

/*Nat *p_orbite(Perm p, Nat i){
  int pm=f_val(p,i);
  int x=0;
  while(pm!=i){
    Nat orbite;
    orbite+=pm*pm;  
     
  }
  return orbite;
}

Perm p_transp(Nat N,Nat i,Nat j){

}
Perm p_cycle(Nat: N,Nat elems[],Nat r){

}
Perm *p_decomp(Perm p){

}*/
