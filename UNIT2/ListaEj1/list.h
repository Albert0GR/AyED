/*list.h header de lista de tipo simple*/

#ifndef LIST_H_
#define LIST_H_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define TSIZE 45        //TAMAÑO DEL ARREGLO TITULO

struct pelicula
{
    char titulo[TSIZE];
    int calificacion;
};

typedef struct pelicula Item;

typedef struct nodo
{
    Item item;
    struct nodo *next;
}Nodo;

typedef Nodo *Lista;

// inicializa la lista
//plista apunta a lista
void IniciaLista(Lista *plista);

//determina si la lista esta vacia
// plista apunta a una lista vacia 
//la funcion retorna TRUE si la lista es vacia ,FALSE en otro caso

bool ListaVacia(const Lista *plista);

//determina si la lista esta llena 
//true: lista llena , FALSE: otro caso
bool ListaLlena(const Lista *plista);

//determina el numero de items en la lista 
//retorna el numeor de items 
unsigned int ListItem(const Lista *plista);

//agrega un item al final de la lista 
//retorna true:si la operacion se realizó , false:otro caso
bool AgregarItem(Item item,Lista *plista);

//aplica la funcion a cada item el la lista 

void Traverse(const Lista *plista,void(*pfun)(Item item));

// libera memoria
void VaciaLista(Lista *plista);


#endif