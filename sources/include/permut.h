// fichier permut.h

#include "fonc0.h"

 
typedef Fun Perm;

Bool p_ispermut(Fun F);                    // teste si une fonction est une permutation
Nat *p_orbite(Perm p, Nat i);              // orbite d'un lément suivant p
Perm p_transp(Nat N, Nat i, Nat j);        // transposition de taille N échangeant i et j
Perm p_cycle(Nat N, Nat elems[], Nat r);   // cycle de taille N et de longueur r 
                                           // défini par le tableau elems[], Préc ....
Perm *p_decomp(Perm p);      // décompose p en cycles, retourne un tableau de permutations
