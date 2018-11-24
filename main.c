#include<stdio.h>
#include"ruleta.h"
#include"circular.h"
#include"lista.h"
#include"apuestas.h"

//Creado por Ehecatzin Vallejo  407 lineas de poder !!

int main(void){

  Circular q = nueva();   // parte  Circular
  q = llenarul(q);
  int v = vueltas();
  int g = 0;
  int r_a = 0;
  int r_b = 0;
  int r_c = 0;

  apuesta a1;  //estructs donde se guardarán info de fichas , cada jugador
  apuesta b1;
  apuesta c1;

  int f_a = 0; //fichas para info de cada jugador
  int f_b = 0;
  int f_c = 0;

  int c = 0;  //variables para cuenta de cada jugador
  int a = 0;
  int b = 0;

  list x = vacia();

  printf("3 jugadores : 'A','B','C'\n");
   //pide dinero para una cuenta y la mete en una lista
  printf("Ingrese cuenta de juegos(dinero para apostar)\n");
  printf("A:\t");a = cuenta();
  printf("B:\t");b = cuenta();
  printf("C:\t");c = cuenta();

  x  = cons('A',a,cons('b',b,cons('C',c,vacia()))); //lista con cuentas de cada jugador

  tablero();

  printf("Apuestas:\n");

  printf("Jugardor A:\t"); f_a = c_fichas();  //inicializar y llenar datos de cada jugador
  a1 = inicializa(a1,f_a);
  datos_fich(a1,f_a);
  printf("\n");
  datos_dine(a1,f_a);
  printf("\n");
  printf("Jugardor b:\t"); f_b = c_fichas();
  b1 = inicializa(c1,f_b);
  datos_fich(b1,f_b);
  datos_dine(b1,f_b);
  printf("Jugardor c:\t"); f_c = c_fichas();
  c1 = inicializa(c1,f_c);
  datos_fich(c1,f_c);
  datos_dine(c1,f_c);

  // a jugar

  q = girarul(q,v);

  printf("Numero ganador:\n");
  g = dato_ganador(q);  //numero ganador al girar la ruleta
  printf("%d\n",g);
  printf("\n");
  printf("Tabla De Resultado:\n");
  r_a = checa(a1,g,f_a);
  r_b = checa(b1,g,f_b);
  r_c = checa(c1,g,f_c);

  mod_cuenta(a1,&a,r_a,f_a);  // punteros int  a cuenta
  mod_cuenta(a1,&b,r_b,f_b);
  mod_cuenta(a1,&c,r_c,f_c);

  x = cons('A',a,cons('B',b,cons('C',c,vacia()))); // lista final " actualizada"

  tabresultados(x);

return 0;

}
