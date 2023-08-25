// fichier test2.c
#include <stdio.h>
#include"include/p_codage.h"

int main()
{
      Perm p = {5,0,2,3,1,4};
      char text[]="012345abcdefABCDEF";
      
      f_code(p,text);
      printf(" codé : %s \n", text);
      f_decode(p,text);
      printf("décodé : %s \n", text);
    
    
        return 0;
}
