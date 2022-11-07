/*nodo.c
    creacion y definicion de la funcion para insertar un nodo en la lista  */
#include <stdio.h>
#include <stdlib.h>
 
typedef struct Molde{
int dato;
struct Molde *siguiente;
}Nodo;
 
 Nodo *inicio =NULL;                //declaracion de varible inicio de tipo apuntador a nodo , con valor inicial NULL(no apunta a ninguna parte)

 void insertar(int x){
    Nodo *nuevo;
    nuevo=malloc(sizeof(Nodo));
    nuevo->dato =x;
    if (inicio==NULL){
        inicio=nuevo;
        nuevo->siguiente=NULL;
    }else{
        nuevo->siguiente =inicio;
        inicio=nuevo;
    }
 }
int main (){
    
   // insertar(4);
    //insertar(1);
    printf("Dato en inicio (11s): %d \n",(inicio+1)->dato);
    return 0;
}