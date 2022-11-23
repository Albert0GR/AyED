
//se compila junto con lista.c
#include "funciones.h"
int main(){
    int e,f;
    tpuntero cabeza,search;          //Indica la cabeza de la lista enlazada, si la perdemos no podremos acceder a la lista
    cabeza = NULL;                    //Se inicializa la cabeza como NULL ya que no hay ningun nodo cargado en la lista
    
    do
    {
        printf("\n [1] Ingresar datos");
        printf("\n [2] Imprimir valores");
        printf("\n [-1] Salir");
        scanf("%d",&f);
        switch (f)
        {
        case 1:
             while(e!=-1){
                printf("Ingrese elementos, -1 para terminar: ");
                scanf("%d",&e);
                if(e!=-1)insertar(&cabeza, e);
                printf ("Ingresado correctamente");
                printf ("\n");
             }
            break;
        case 2:
                printf("opcion imprimir en curso");
             recorrer(&cabeza);
            break;
        default:
        printf("BYE");
            break;
        }
    

    } while (f!=-1);
    

    
     
return 0;
}