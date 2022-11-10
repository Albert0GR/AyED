#ifndef NODO_H_
#define NODO_H_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


typedef int Item;
typedef struct Registro
{
    Item el;
    struct Registro* sig;
}Nodo;

//verifica si la lista esta vacia
int listaVacia(Nodo * Primero)
{
return( Primero == NULL);
}

//crea una lista vacia
void iniciarLista(Nodo ** Primero)
{
*Primero == NULL;
}

//agregar a la cabeza de la lista

void agregarDatoCabeza(Nodo *nuevo,int el){
    nuevo = (Nodo*) malloc (sizeof(Nodo));
nuevo->dato = el;
nuevo->sig = cabeza;
cabeza->ant = nuevo;
cabeza = nuevo;
}


#endif