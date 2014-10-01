lab5: lab5.c stlist.o stlist.h
	gcc -Wall lab5.c -o lab5.exe stlist.o
stlist.o : stlist.c stlist.h
	gcc -Wall stlist.c -c
