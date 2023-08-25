#include "include/fonc0.h"
#include <stdio.h>

int main()
{
	Fun f = f_id();
	f_print(f);
    printf("\n\n");
	f = f_modif(f,2,4);
	f_print(f);
    Fun g = (Fun){{4,0,0,5,0,1}};

    Fun fog = f_comp(f,g);
    printf("\n\n");
    f_print(fog);
    
    Nat *s = f_support(g);
    for(int i=0; i<N && s[i]!=N; i++)printf("%d\t", s[i]);
    printf("\n");
	return 0;
}
