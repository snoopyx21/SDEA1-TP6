// fichier fonc0.c

#include <stdio.h>
#include <stdlib.h>
#include "include/fonc0.h"

/*
 typedef struct sf { Nat val[N];      // val[i] correspond à l'image de i par la fonction
                    } Fun;          // type non mutable

*/

// fonction f_id()
// construit et retourne la fonction identité de [0..N-1] : f(i) = i
 Fun f_id()                   
{
  Fun F ;
  for(int i=0; i<N; i++) F.val[i]=i;
  return F;
}


// fonction f_val()
// retourne f(i). Prec : .... à compléter
 Nat f_val(Fun f, int i)          
{ return f.val[i]; }

// fonction f_modif()
// modifie la valeur de f(i). Prec ...
 Fun f_modif(Fun f, Nat i, Nat j)   
{ f.val[i] = j;
  return f;
}

// fonction f_comp()
//  retourne f o g : composition de f et g
// Prec : f_taille(f) == f_taille(g)
 Fun f_comp(Fun f, Fun g)          
 {
  Fun fog ;
  for(int i=0; i<N; i++) fog.val[i] = f.val[g.val[i]];
  return fog;   
}
 
 // fonction f_print()
 // affichage
 void f_print(Fun f)                   
{ 
    int i=0;
    printf("____________________________________________\n");
	for(;i<N; i++) printf("%d\t",i);
	printf("\n");
	for(i=0; i<N; i++) printf("%d\t",f.val[i]);
	printf("\n-------------------------------------------\n");	
}


Nat * f_support(Fun f)
{
    Nat *res = (Nat *) malloc((N+1)*sizeof(Nat));
    int i=0, j=0;
    for(; i<N; i++) if(f_val(f,i)==0) res[j++]=i;
    res[j] = N;  // marqueur de fin
    return res;
}
