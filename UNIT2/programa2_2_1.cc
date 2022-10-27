/*nodo.cc
creacion y definiciona de la funcion para insertar un nodo en la lista
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct Molde
{
    int dato;
    struct Molde *siguiente;
    /* data */
}Nodo;

//variable que apunta al inicio del conjunto de nodos 

Nodo *inicio =NULL;

void insertar(int x){
    Nodo *nuevo;

    nuevo = malloc(sizeof(Nodo));
    nuevo -> dato=x;

    if (inicio==NULL)
    {
        inicio=nuevo;
        nuevo->siguiente = NULL;
    }else{
        nuevo->siguiente =inicio;
        inicio = nuevo;
    }
    
}

int main(){
    insertar(4);
    printf("dato en inicio (lls):%d",inicio->dato);

    return 0;
}