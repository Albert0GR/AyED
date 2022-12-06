#include "ordenamiento.h"
#include "funciones.h"

void intercambio(tpuntero *cabeza, int i, int j){

    tnodo *aux1=*cabeza;
    tnodo *aux2=*cabeza;
    int x=0, y =0, aux3;
    int longitud;
    printf("impresion antes de intercambio");
    recorrer(cabeza);
    longitud=recorrer(cabeza);
    if (i>=longitud || j >= longitud)
    {
        printf("los datos no se pueden intercambiar");
    }else{
        while (x < i)  //avanzo a la posicion x
        {
            aux1 = aux1->sig;
            x++;
        }
        while (y < j)  //avanzo a la posicion x
        {
            aux2 = aux2->sig;
            y++;
        }
        aux3= aux1->valor;
        aux1->valor= aux2->valor;
        aux2->valor = aux3;
        
    }
    
  printf("impresion despues de intercambio:");
    recorrer(cabeza);

}