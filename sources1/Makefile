test0 : test0.c lib/fonc0.o
	gcc test0.c lib/fonc0.o -o test0
	
lib/fonc0.o : fonc0.c include/fonc0.h
	gcc -c fonc0.c -o lib/fonc0.o
	
test1 : test1.c lib/fonc0.o lib/permut.o
	gcc test1.c lib/fonc0.o lib/permut.o -o test1
	
lib/permut.o : permut.c include/fonc0.h include/permut.h
	gcc -c permut.c -o lib/permut.o
	
test2 : test2.c lib/fonc0.o lib/permut.o lib/p_codage.o
	gcc test2.c lib/fonc0.o lib/permut.o lib/p_codage.o -o test2

lib/p_codage.o : include/fonc0.h include/permut.h include/p_codage.h p_codage.c
	gcc -c p_codage.c -o lib/p_codage.o

clean :
	rm lib/*.o *.o test0 test1 test2
