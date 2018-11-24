#include<stdio.h>
#include<stdlib.h>
#include"apuestas.h"

int c_fichas(void){
  int f = 0;
  scanf("%d",&f);

  return f;
}

apuesta inicializa(apuesta x,int fichas){
  apuesta *ptr = &x;

  ptr -> fichas = (int*)calloc(fichas,sizeof(int));
  ptr ->dinero  = (int*)calloc(fichas,sizeof(int));

  return x;

}

void datos_fich(apuesta x,int fichas){
  int i = 0;
  apuesta *ptr = &x;

  printf("Fichas\n");
  for(i=0;i<fichas;i++){
    scanf("%d",&ptr->fichas[i]);
  }
}
void datos_dine(apuesta x,int fichas){
  int i = 0;
  apuesta *ptr = &x;

  printf("dinero\n");
  for(i=0;i<fichas;i++){
    scanf("%d",&ptr->dinero[i]);
  }
}

void muestraf(apuesta x , int fichas){

  int i = 0;
  apuesta *ptr = &x;

  for(i=0;i<fichas;i++){
    printf("%d\t",ptr -> fichas[i]);
  }

}

void muestrad(apuesta x,int fichas){

  int i = 0;
  apuesta *ptr = &x;

  for(i=0;i<fichas;i++){
    printf("%d\t",ptr -> dinero[i]);
  }

}
