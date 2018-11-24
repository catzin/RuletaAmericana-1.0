
#include"elem.h"
#include"lista.h"
#include<stdlib.h>

list cons(char j,int c, list l ){
  list aux;

  aux = (list)malloc(sizeof(struct NODO));
  aux -> jugador = j;
  aux -> cuenta  = c;
  aux -> sig = l;

  return aux;
}

list vacia(void){
  return NULL;
}

elem es_vacia(list l){

return l == NULL;
}

elem cabeza(list l){

  return l -> cuenta;
}

elem jug(list l){

  return l -> jugador;
}

list resto(list l){

  return l -> sig;
}

void imp_list(list l){
  if(!es_vacia(l)){
    imp_elemc(jug(l));imp_elem(cabeza(l));
    imp_list(resto(l));
  }
}
