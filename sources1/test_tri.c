// test_tri.c
#include<stdio.h>
typedef unsigned int Nat;

void bsort(Nat tab[], Nat i, Nat N)    // tri à bulle
 // trie le tableau tab par ordre croissant  entre les indices i et N (N exclu)
 // tab est modifié par effet de bord
 {
   int tmp;
    for(int j = i; j < N-1; j++)
          for(int k=i; k < N+i-1-j; k++)
                if(tab[k]>tab[k+1]) {tmp = tab[k]; tab[k]=tab[k+1]; tab[k+1]=tmp; }
 }
 
 int main()
 {
     int t[] = {0,1, 6,7, 3,4, 5, 2};
     
     bsort(t,3,8);
     for(int i=0; i<8; i++) printf("%d\t",t[i]);
    
     printf("\n");
  
     return 0;
 }
