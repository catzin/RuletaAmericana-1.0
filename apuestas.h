#include<stdio.h>
#include<stdlib.h>

#ifndef apuestas
#define apuestas

typedef struct x{

  int *fichas;
  int *dinero;

}apuesta;

int c_fichas(void);
apuesta inicializa(apuesta,int);
void datos_fich(apuesta,int);
void datos_dine(apuesta x,int);
void muestraf(apuesta x,int);
void muestrad(apuesta x,int);


#endif
