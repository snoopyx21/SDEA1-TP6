 // fichier fonc0.h

#ifndef __type_NAT__ 
#define __type_NAT__
 typedef unsigned int Nat;
#endif

#ifndef __type_BOOL__ 
#define __type_NAT__ 
 typedef enum {faux=0, vrai} Bool;
#endif


 typedef struct sf { Nat *val;      // val[i] correspond à l'image de i par la fonction
                     Nat   N;       // espace mémoire réservé    
                    } Fun;          // type mutable, car utilisation de pointeurs et allocation de  la mémoire dynaimquement
 Fun f_id(Nat N);                   // fonction identité de [0..N-1] : f(i) = i
 // prec : f-taille(F) : renvoie un entier compris entre 0  et N-1
 Nat f_taille(Fun f);               // retourne la taille de la mémoire réservée
 //prec : f-val(F,i) = 0 <= i et i < f-taille(F)
 Nat f_val(Fun f, int i);           // retourne f(i)
 //prec : f_modif(F,i,j) = j <= i et i < f-taille(F)
 Fun f_modif(Fun f, int i, int j);  // modifie la valeur de f(i) 
 Fun f_comp(Fun f, Fun g);          //  retourne f o g : composifition de f et g
 void f_print(Fun f);               // affichage
