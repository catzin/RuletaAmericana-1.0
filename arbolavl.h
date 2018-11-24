#include"elem.h"

typedef struct NODEA{

  elem dato;
  struct NODEA *i;
  struct NODEA *d;
  int altura;

}*Avltree;

Avltree nuevo(void){

  Avltree x = (Avltree)malloc(sizeof(struct NODEA));



}
