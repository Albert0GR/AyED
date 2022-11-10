#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <stdio.h>
#include <stdlib.h>
 
typedef struct snodo{       //snodo es el nombre de la estructura
    int valor;
    struct snodo *sig;      //El puntero siguiente para recorrer la lista enlazada
}tnodo;                     //tnodo es el tipo de dato para declarar la estructura
 
typedef tnodo *tpuntero;    //Puntero al tipo de dato tnodo para no utilizar punteros de punteros
 
void insertarEnListaCabeza (tpuntero *cabeza, int e);
void imprimirLista (tpuntero cabeza);
void borrarLista (tpuntero *cabeza);
void eliminaEnListaPosicion (tpuntero* cabeza, int i); 
int NumerNodos(tpuntero *cabeza);

tnodo* BuscarLista (tpuntero* cabeza, int dato);

#endif