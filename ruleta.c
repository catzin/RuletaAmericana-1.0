#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"circular.h"
#include"ruleta.h"

void tablero(void){
  FILE *tab;
  char c;
  tab = fopen("tablero.txt","r");

  while((c = fgetc(tab))!= EOF){

    putchar(c);
  }

  printf("\n");
}

int cuenta(void){
  int c = 0;

  scanf("%d",&c);

  return c;

}

int vueltas(void){

  time_t t;

  int v = 0;

  srand((unsigned)time(&t));

  v = rand() % 500;

  return v;

}

 Circular llenarul(Circular q){


   FILE *nume;
   int nums[37];
   int i = 0;

   nume = fopen("ruleta.txt","r");

   for(i=1;i<36;i++){
     fscanf(nume,"%d",&(nums[i]));
   }


   for(i=0;i<36;i++){

     q = formar(q,nums[i]);

   }

   return q;

}

Circular girarul(Circular q, int vueltas){

  int i = 0;

  for(i=0;i<vueltas%37;i++){

    q = rotar(q);

  }
  return q;
}

int dato_ganador(Circular q){

  return q->sig->dato;
}

void tabresultados(list l){
  imp_list(l);
}

int checa(apuesta a1,int g,int f_a){

  apuesta *ptr = &a1;

  int i = 0;
  char band = 'F';

  while((band == 'F')&&(i<f_a)){

    if(ptr -> fichas[i] == g){
      band = 'V';
    }
    i++;
  }

  if(band == 'F'){
    return (-1);
  }
  else{

    return i-1;
  }
}

void mod_cuenta(apuesta a1,int *a,int r,int a_f){

  apuesta *ptr = &a1;
  int x = 0;
  int i = 0;
  int s = 0;

  x = ptr -> dinero[r];

  for(i=0;i<a_f;i++){
    s += ptr -> dinero[i];
  }

  if(r != -1){

    *a = (*a) + x;

  }

  else{

    *a = (*a) - s;
  }

}
