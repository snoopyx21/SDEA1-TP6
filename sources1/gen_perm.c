// fichier gen_perm.c
#include "include/gen_perm.h"

Nat _tab1[] = {3,2,0,1}, _tab2[] = {3,2,1,0};
Perm expl1 = (Perm){_tab1,4}, expl2=(Perm){_tab2,4};


// fonction p_inf()
// retour = f < g dans l'ordre lexicographique
// Prec : f_taille(f) == f_taille(g)
Bool p_inf(Perm f, Perm g)
{
    Nat N = f_taille(f);
    int i=0;
    while(i<N && f_val(f,i)==f_val(g,i)) i++;
    return i < N && f_val(f,i) < f_val(g,i);
}

// fonction p_first()
// première permutation dans l'ordre lexicographique
// prec : N > 0
Perm p_first(Nat N)
{
    return f_id(N);
}

// fonction p_next()
// permutation suivante dans l'ordre lexicographique
Bool p_next(Perm p)
{
    Nat N = f_taille(p);
    
    int i=N-1;  // indice de révision
    for(;i > 0 && p.val[i-1] > p.val[i];i--){}
    // si c'est trié dans l'ordre décroisssant, on renvoie
    if(i==0) return false;
    
    // calcul du min parmi les supérieur à l'indice de révision
    int j =N-1, imin =N-1;
    Nat min = N;
    for(;j >=i; j--) 
        if(p.val[j] > p.val[i-1])
            if(p.val[j] < min) 
            { imin = j; min = p.val[imin];}
    // échange avec le min        
    Nat tmp = p.val[i-1];
        p.val[i-1] = p.val[imin];
        p.val[imin] = tmp;
  
    // tri de la fin    
    bsort(p.val,i,N);
    return true;
}


void bsort(Nat tab[], Nat i, Nat N)    // tri à bulle
 // trie le tableau tab par ordre croissant  entre les indices i et N (N exclu)
 // tab est modifié par effet de bord
 {
   int tmp;
    for(int j = i; j < N-1; j++)
          for(int k=i; k < N+i-1-j; k++)
                if(tab[k]>tab[k+1]) {tmp = tab[k]; tab[k]=tab[k+1]; tab[k+1]=tmp; }
 }
// fonction p_enum()
// énumère les permutations
// préc N > 0
void p_enum(Nat N)
{
}

