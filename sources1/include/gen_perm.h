// fichier gen_perm.h

#ifndef __GEN_PERM_H__
#define __GEN_PERM_H__
#include "permut.h"

// fonction p_inf()
// retour = f < g dans l'ordre lexicographique
// Prec : f_taille(f) == f_taille(g)
Bool p_inf(Perm f, Perm g);

// fonction p_first()
// première permutation dans l'ordre lexicographique
// prec : N > 0
Perm p_first(Nat N);

// fonction p_next()
// permutation suivante dans l'ordre lexicographique
Bool p_next(Perm p);

// fonction p_enum()
// énumère les permutations
// préc N > 0
void p_enum(Nat N);


void bsort(Nat tab[], Nat i, Nat N);    // tri à bulle
 // trie le tableau tab par ordre croissant  entre les indices i et N (N exclu)
 // tab est modifié par effet de bord

extern Nat _tab1[], _tab2[];
extern Perm expl1, expl2;



#endif
