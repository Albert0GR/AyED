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

void insertar(tpuntero *cabeza, int valor,float venta){
    tnodo *nuevo=*cabeza;
     nuevo= malloc(sizeof(tnodo));
     nuevo->valor= valor;
     nuevo->venta=venta;
     if(cabeza==NULL){
        *cabeza=nuevo;
        nuevo->sig=NULL;
     }else{
        nuevo->sig=*cabeza;
        *cabeza=nuevo;
     }

}

//devuelve la longitud de la lista 
int recorrer(tpuntero *cabeza){
    tnodo *aux=*cabeza;
    int longitud =0;

    printf("\nInicio del recorrido\n");
    if(aux != NULL){
        while (aux->sig != NULL)
        {
            printf("%d:%f ",aux->valor,aux->venta);
            aux=aux->sig;
            longitud++;
        }
        longitud++;
        printf("%d",aux->valor);
        
    }
    return longitud;
}

//devuelve la posicion en que se encuentra un valor o 1 en otro caso
int buscarDato(tpuntero *cabeza,int valor){
    tnodo *aux= *cabeza;
    int posicion=1;

    printf("\nInicio de la busqueda\n");
    while ((aux!=NULL)&&(aux->valor!=valor))
    {
        aux= aux->sig;
        posicion++;
    };
    if (aux!=NULL)
        return posicion;
    else
    return -1;
 
    
}

tnodo *buscaNodo(tpuntero *cabeza,int pos){
    int i=1;
    tnodo *aux=*cabeza;
    while (i<pos && aux!=NULL)
    {
        aux=aux->sig;
        i++;
    }
    return aux;
}

void visita(tnodo *actual){
    
    if (actual!=NULL)
    {
        printf("%d ",actual->valor);
        if (actual->sig !=NULL)
        {
            visita(actual->sig);
            //printf("%d ",actual->valor);
        }
        
    }
    
}

void eliminar(tnodo *actual){
    int val,pos;
    tnodo *objetivo,*previo;
    

    printf("\n que valor deseas eliminar: ");
    scanf("%d",&val);
    pos=buscarDato(&actual,val);
    objetivo =buscaNodo(&actual,pos);

    if (pos==1)
    {
         actual =objetivo->sig;
    }else{
        previo=buscaNodo(&actual,pos-1);
        previo->sig=objetivo->sig;
    }
    free(objetivo);
    
}