
#include "funciones.h"232

//funciones vistas en la clase

// funcion que inserta al principio
void insertar(tpuntero *cabeza, int valor){
    tnodo *nuevo;
     nuevo= (tnodo*)malloc(sizeof(tnodo));
     nuevo->valor= valor;
     nuevo->sig= *cabeza;
     nuevo->ant= NULL;
    if (*cabeza==NULL)
    *cabeza=nuevo;
    else
    (*cabeza)->ant=nuevo;
    *cabeza=nuevo;

}
// funcion que inserta antes
void insertarAntes(tpuntero *cabeza, int valor){

    tnodo *nuevo, *sig;

    nuevo= (tnodo*)malloc(sizeof(tnodo));
    nuevo->valor= valor;
    nuevo->ant=*cabeza;
    nuevo->sig=(*cabeza)->sig;
    sig=nuevo->sig;

    if(sig !=NULL)
        sig->ant=nuevo;
    nuevo->sig=nuevo;

}



//devuelve la longitud de la lista 
int recorrer(tpuntero *cabeza){
    tnodo *aux=*cabeza;
    int longitud =0;

    printf("\nInicio del recorrido\n");
    if(aux != NULL){
        while (aux->sig != NULL)
        {
            printf("%d ",aux->valor);
            aux=aux->sig;
            longitud++;
        }
        longitud++;
        printf("%d",aux->valor);
        
    }
    return longitud;
}

//devuelve la posicion en que se encuentra un valor o -1 en otro caso
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