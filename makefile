prog:main.o 
	gcc main.o -o prog -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g
	rm -f *.o
menu.o:menu.c
	gcc -c menu.c -g
background.o:background.c
	gcc -c background.c -g