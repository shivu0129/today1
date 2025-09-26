ABC.exe:main.o fact.o pali.o
	gcc -o ABC.exe main.o fact.o pali.o
main.o:main.c
	gcc -c main.c
fact.o:fact.c
	gcc -c fact.c
pali.o:pali.c
	gcc -c pali.c

