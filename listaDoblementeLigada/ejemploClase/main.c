
#include "ldl.h"
int main(){
  
    tpuntero cabeza,search;          //Indica la cabeza de la lista enlazada, si la perdemos no podremos acceder a la lista
    cabeza = NULL;                    //Se inicializa la cabeza como NULL ya que no hay ningun nodo cargado en la lista
    int j=0;
    insertar(&cabeza,6);
    insertar(&cabeza,5);
    insertar(&cabeza,4);
    insertar(&cabeza,3);
    insertar(&cabeza,2);
    
    printf("\n dato en el inicio (ldl): %d",cabeza->valor);
    printf("\nlongitud:%d",recorrer(&cabeza));

}
