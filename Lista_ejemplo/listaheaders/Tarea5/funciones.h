#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <stdio.h>
#include <stdlib.h>
 
typedef struct snodo{       //snodo es el nombre de la estructura
    int valor;
    struct snodo *sig, *ant;      //El puntero siguiente para recorrer la lista enlazada
}tnodo;                     //tnodo es el tipo de dato para declarar la estructura


 
typedef tnodo *tpuntero;    //Puntero al tipo de dato tnodo para no utilizar punteros de punteros
 


//funciones vistas en la clase

void insertar(tpuntero *cabeza, int valor);         //inserta al principio
int recorrer(tpuntero *cabeza);                  //recorre la lista y devuleve su longitud
int buscarDato(tpuntero *cabeza,int valor);     //devuelve la posicion en que se encuentra un valor o 1 en otro caso
tnodo *buscaNodo(tpuntero *cabeza,int pos);           //devuelve el apuntador al nodo en una posicion en particular
void visita(tnodo *actual);         //recorrido recursivo de la lista
void eliminar(tnodo *actual);


#endif