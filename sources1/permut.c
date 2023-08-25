// fichier permut.c
#include "include/permut.h"
#include<stdlib.h>
#include<stdio.h>

// teste si une fonction est une permutation
Bool p_ispermut(Fun F)
{
    Bool iok = true;
    int j, i;
    for(i=0; i<N && iok; i++)
    for(j=0, iok = false; j<N && !iok; j++) //...ATTENTION int j=0, iok = false fait que iok est une variable locale !!!!!!
        iok = i==f_val(F,j);
        
    
    return iok;
}

Nat foundat(Nat i, Nat *t, Nat n)
{
    Bool isfound = false;
    int j;
    for( j=0; j<n && !isfound; j++) isfound = i==t[j];
    return isfound ? j : n ;
}

// échange les valeurs f(i) et f(j)
Fun f_swap(Fun f, int i, int j) 
{
    Nat tmp = f.val[i];
    f.val[i] = f.val[j];
    f.val[j] = tmp;
    
    return f;
}

// fait circuler la liste vers la droite de i places
Fun f_circule(Fun f, int i)  
{
    Fun g;          // on se prend tout un tableau intermédiaire ... ce qui utilise beaucoup de place
    int k=0;
    for(;k<N; i++) g.val[k]=f.val[(k+i)%N];
    return g;
}


Fun f_inverse(Fun f)
{
    Fun inv;
    
    for(int j=0; j<N; j++) inv.val[f.val[j]] = j;  // au lieu de int.val[j] = foundat(j, f.val, N);
    
    return inv;
}