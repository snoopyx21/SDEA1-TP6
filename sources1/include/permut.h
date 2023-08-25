// fichier permut.h
// à compléter ...
#include "fonc0.h"

#ifndef __PERMUT_H__
#define __PERMUT_H__
 
typedef Fun Perm;

Bool p_ispermut(Fun F);                    // teste si une fonction est une permutation
Fun f_swap(Fun f, int i, int j); // échange les valeurs f(i) et f(j)
Fun f_circule(Fun f, int i);     // fait circuler la liste vers la droite de i places
Fun f_inverse(Fun f);           // inverse
#endif
