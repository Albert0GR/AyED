#include "funciones.h"
int main(){
    int e;
    tpuntero cabeza,search;          //Indica la cabeza de la lista enlazada, si la perdemos no podremos acceder a la lista
    cabeza = NULL;                    //Se inicializa la cabeza como NULL ya que no hay ningun nodo cargado en la lista
    /* 
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
    printf("valor [%d]no encontrado\n",r);*/


    //uso de las funciones vistas en clase//////////////////////////////////////////////////////7777
    insertar(&cabeza,999);
    insertar(&cabeza,99);
    insertar(&cabeza,9);
    insertar(&cabeza,978);
    insertar(&cabeza,67);
    insertar(&cabeza,4);
    insertar(&cabeza,94);
    insertar(&cabeza,90);
    insertar(&cabeza,91);
    insertar(&cabeza,92);
    insertar(&cabeza,93);

    printf ("\nAl momento hay %d nodos: ",recorrer(&cabeza));
    int j;
    if(j=buscarDato(&cabeza,98)==-1)
        printf("Dato no encontrado");
    else
        printf("el dato esta en la posicion %d",j);
    
    tnodo *ps=buscaNodo(&cabeza,2);        
    printf("\nEl dato en  la posicion 2 tiene la direccion de memoria %p\n",ps);
    printf("\nEl dato en  la posicion 2 tiene un valor %d\n",ps->valor);
    
    visita(cabeza);

    eliminar(cabeza);

    

    visita(cabeza);


     
    printf ("\n");
    
     
return 0;
}