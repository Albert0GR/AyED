#include <stdio.h>
#include <stdlib.h>
 
typedef struct Molde{
int dato;
struct Molde *siguiente;
}Nodo;
 
int main (){
    //nodo nuevo junto con malloc ahora no chilla ya que devuelve es un puntero a void, pues lo guardamos en un puntero de tipo void como debe de ser =D
    void* Nuevo = malloc( sizeof(Nodo) ); 
    
    Molde* pMolde;  // <- ¿Pero quieres guardarlo aquí no? XD
    
    //¡solución! Cast de nuevo nodo que es del tipo void* a pNodo que es un puntero a nodo*. =DD
    pMolde = ( Molde* ) Nuevo; 
    
    //ahora pNodo ya guarda la dirección de lo que tu quieres. Es más o menos lo que 
    //hace nodoNuevo = (pNodo)malloc(sizeof(Nodo)); tal como te lo dijo dehm
    pMolde->dato = 10;
    
    
    printf("%d\n",pMolde->dato );
    
    free(Nuevo);
    getchar();
    return 0;
}