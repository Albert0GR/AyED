
//se compila junto con lista.c
#include "funciones.h"
int main(){
    int e,f;
    tpuntero cabeza,search;          //Indica la cabeza de la lista enlazada, si la perdemos no podremos acceder a la lista
    cabeza = NULL;                    //Se inicializa la cabeza como NULL ya que no hay ningun nodo cargado en la lista
    insertarAntes(&cabeza,66); 
    insertar(&cabeza, 4); 
    insertar(&cabeza, 5); 
     
    recorrer(&cabeza);
    
    
}