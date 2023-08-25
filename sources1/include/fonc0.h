// fichier fonc0.h
// ... à compléter
#ifndef __FONC0_H__
#define __FONC0_H__

#ifndef __type_NAT__ 
#define __type_NAT__
 typedef unsigned int Nat;
#endif

#ifndef __type_BOOL__ 
#define __type_BOOL__ 
 typedef enum {faux=0, vrai} Bool;
#define false 0
#define true 1
#endif

#define N 6

 typedef struct sf { Nat val[N];      // val[i] correspond à l'image de i par la fonction
                    } Fun;          // type non mutable
 Fun f_id();                   // fonction identité de [0..N-1] : f(i) = i
 Nat f_val(Fun f, int i);           // retourne f(i). Prec : .... à compléter
 Fun f_modif(Fun f, Nat i, Nat j);  // modifiie la valeur de f(i). Prec ... 
 Fun f_comp(Fun f, Fun g);          //  retourne f o g : composition de f et g
 Nat *f_support(Fun f);             // ens. des léments x tels que f(x) != 0
 void f_print(Fun f);               // affichage
#endif
