#include <stdio.h>
#include <stdlib.h>
 
typedef struct snodo{ //snodo es el nombre de la estructura
    int valor;
    struct snodo *sig; //El puntero siguiente para recorrer la lista enlazada
}tnodo; //tnodo es el tipo de dato para declarar la estructura
 
typedef tnodo *tpuntero; //Puntero al tipo de dato tnodo para no utilizar punteros de punteros
 
void insertarEnListaCabeza (tpuntero *cabeza, int e);
void imprimirLista (tpuntero cabeza);
void borrarLista (tpuntero *cabeza);
void eliminaEnListaPosicion (tpuntero* cabeza, int i); 
int NumerNodos(tpuntero *cabeza);

tnodo* BuscarLista (tpuntero* cabeza, int dato);


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
    int r=6;
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
    
    

    printf ("\nSe borra la lista cargada\n");
    borrarLista (&cabeza);
     
    printf ("\n");
    system ("PAUSE");
     
return 0;
}
 
 
void insertarEnListaCabeza (tpuntero *cabeza, int e){
    tpuntero nuevo; //Creamos un nuevo nodo
    nuevo = malloc(sizeof(tnodo)); //Utilizamos malloc para reservar memoria para ese nodo
    nuevo->valor = e; //Le asignamos el valor ingresado por pantalla a ese nodo
    nuevo->sig = *cabeza; //Le asignamos al siguiente el valor de cabeza
    *cabeza = nuevo; //Cabeza pasa a ser el ultimo nodo agregado
}
 
void eliminaEnListaPosicion (tpuntero* cabeza, int i){
    tnodo *ptr,*ant;
    int k = 0;

    ptr = *cabeza;
    ant = NULL;
    while ( (k < i) && (ptr != NULL))
    {
        k++;
        ant = ptr;
        ptr = ptr->sig;
    }
    if(k == i)
    {
        if( ant == NULL)
            *cabeza = ptr->sig;
        else
        ant->sig = ptr->sig;
    
    free(ptr);
    }
}
void imprimirLista(tpuntero cabeza){
    while(cabeza != NULL){ //Mientras cabeza no sea NULL
        printf("%4d",cabeza->valor); //Imprimimos el valor del nodo
        cabeza = cabeza->sig; //Pasamos al siguiente nodo
    }
}
 
void borrarLista(tpuntero *cabeza){ 
    tpuntero actual; //Puntero auxiliar para eliminar correctamente la lista
  
    while(*cabeza != NULL){ //Mientras cabeza no sea NULL
        actual = *cabeza; //Actual toma el valor de cabeza
        *cabeza = (*cabeza)->sig; //Cabeza avanza 1 posicion en la lista
        free(actual); //Se libera la memoria de la posicion de Actual (el primer nodo), y cabeza queda apuntando al que ahora es el primero
    }
}

int NumerNodos(tpuntero *cabeza){
int k = 0;
tnodo *p;
p = *cabeza;
while (p != NULL)
{
k++;
p = p->sig;
}
return(k);
}

tnodo* BuscarLista (tpuntero* cabeza, int dato)
{
tnodo *ptr;
for (ptr = *cabeza; ptr != NULL; ptr = ptr->sig)
if ( ptr->valor == dato )
return ptr;
return NULL;
}