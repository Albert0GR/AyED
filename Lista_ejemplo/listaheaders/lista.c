#include "funciones.h"
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

    while (p != NULL){
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

//funciones vistas en la clase

//devuelve la posicion en que se encuentra un valor o 1 en otro caso
int buscarDato(int valor){
    tnodo *aux;
    int posicion=1;

    printf("\nInicio de la busqueda\n");
    while ((aux!=NULL)&&(aux->valor!=valor))
    {
        aux= aux->sig;
        posicion++;
    }
    if (aux!=NULL)
        return posicion;
    else
    return -1;
 
    
}

tnodo *buscaNodo(int pos){
    int i=1;
    tnodo *aux;
    while (i<pos && aux!=NULL)
    {
        aux=aux->sig;
        i++;
    }
    return aux;
}

void visita(tpuntero actual){
    
    
    if (actual!=NULL)
    {
        printf("%d ",actual->valor);
        if (actual->sig !=NULL)
        {
            visita(actual->sig);
            printf("%d ",actual->valor);
        }
        
    }
    
}

void eliminar(tpuntero* cabeza){
    int val,pos;
    tnodo *objetivo,*previo;
    

    printf("\n que valor deseas eliminar: ");
    scanf("%d",&val);
    pos=buscarDato(val);
    objetivo =buscaNodo(pos);

    if (pos==1)
    {
         cabeza =objetivo->sig;
    }else{
        previo=buscaNodo(pos-1);
        previo->sig=objetivo->sig;
    }
    free(objetivo);
    
}