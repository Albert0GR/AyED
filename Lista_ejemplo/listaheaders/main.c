#include "funciones.h"
int main(){
    int e;
    tpuntero cabeza,search; //Indica la cabeza de la lista enlazada, si la perdemos no podremos acceder a la lista
    cabeza = NULL; //Se inicializa la cabeza como NULL ya que no hay ningun nodo cargado en la lista
     
    printf("Ingrese elementos, -1 para terminar: ");
    scanf("%d",&e);
     
    while(e!=-1){
        insertarEnListaCabeza (&cabeza, e);
        printf ("Ingresado correctamente");
        printf ("\n");
        printf("Ingrese elementos, -1 para terminar: ");
        scanf("%d",&e);
    }
    int r=3;
    printf ("\nAl momento hay %d nodos: ",NumerNodos(&cabeza)); 
    printf ("\nSe imprime la lista cargada: ");
    imprimirLista (cabeza);
    printf("\nse borra el elemento %d \t\t",r);
    eliminaEnListaPosicion (&cabeza,r);
    //printf("\n");
    imprimirLista (cabeza);
    printf ("\nAl momento hay %d nodos: ",NumerNodos(&cabeza)); 

    if(BuscarLista(&cabeza,4)!=NULL){
    search=BuscarLista(&cabeza,5);
    printf("valor encontrado %d direccion %p ,",search->valor,search);    
    }
    
    else
    printf("valor no encontrado");
    //uso de las funciones vistas en clase
    printf("\nPosicion del dato %d a buscar :%d \n",r,buscarDato(r));
    printf("\nDireccion que contiene el dato %d a buscar :%p \n",r,buscaNodo(r));
    visita(cabeza);

    
    eliminar(&cabeza);
    
    imprimirLista (cabeza);
    printf ("\nAl momento hay %d nodos: ",NumerNodos(&cabeza));

    printf("\nSe borra la lista cargada\n");
    borrarLista(&cabeza);
     
    printf ("\n");
    system ("PAUSE");
     
return 0;
}