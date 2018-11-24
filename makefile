ruleta	:	apuestas.o	main.o	circular.o	ruleta.o	elem.o	lista.o
	gcc	-o	ruleta	main.o	circular.o	ruleta.o	elem.o	lista.o	apuestas.o
main.o	:	main.c	ruleta.h	circular.h	lista.h	apuestas.h
	gcc	-c	main.c
circular.o	:	circular.c	circular.h	elem.h	
	gcc	-c	circular.c
ruleta.o	:	ruleta.c	ruleta.h
	gcc	-c	ruleta.c
elem.o	:	elem.c	elem.h
	gcc	-c	elem.c
lista.o	:	lista.c	lista.h	elem.h
	gcc	-c	lista.c
apuestas.o	:	apuestas.c	apuestas.h
	gcc	-c	apuestas.c
clean	:
	rm	ruleta	\
	main.o	circular.o	ruleta.o	elem.o	lista.o	apuestas.o

