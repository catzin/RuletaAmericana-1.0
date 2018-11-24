
#include"elem.h"

#ifndef lista
#define lista


typedef struct NODO{

  char jugador;
  int cuenta;

  struct NODO*sig;

}*list;

list vacia(void);

list cons(char,int , list);

int es_vacia(list );

elem cabeza(list);

elem cuent(list l);

list resto(list);

void imp_list(list);


#endif
