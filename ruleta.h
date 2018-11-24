#include"circular.h"
#include"lista.h"
#include"apuestas.h"
#ifndef ruleta
#define ruleta

void tablero(void);
int cuenta(void);
int vueltas(void);
Circular llenarul(Circular);
Circular girarul(Circular,int);
void premio(Circular , int);
void tabresultados(list);
int dato_ganador(Circular);
int checa(apuesta,int,int);
void mod_cuenta(apuesta ,int *,int ,int);



#endif
