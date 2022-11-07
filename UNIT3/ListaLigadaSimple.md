
## 1. DESCRIPCION DEL NODO
---
## 2.DECLARACION DE UN APUNTADOR Y USO DE SUS OPERADORES 

En el  [Programa 2.1](nodo.c) 

> Programa 2.1
```c
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
    nuevo = malloc(sizeof(Nodo));
    nuevo -> dato =x;
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
```

## 3. DESCRIPCION

uso de bibliotecas estandar
```c
#include <stdio.h>
#include <stdlib.h> 
```

Definicion del `Nodo`
```c
typedef struct Molde{
int dato;
struct Molde *siguiente;
}Nodo;
```

Declaracion de una variable `inicio` de tipo apuntador a `Nodo`, que inicialmente tiene el valor `Null`, es decir no apunta a ninguna parte

```c
Nodo *inicio =NULL;
```
Definicion del procedimiento llamado `insertar(x)`, en el cual se recibe un parametro (**por valor**) un numero entero llamado `x`

```c
 void insertar(int x){
```
Definicion de un apuntador a `Nodo` al que llamamos `nuevo`

```c
Nodo *nuevo;
```

Se invoca el gestor de memoria de C , mediante la funcion `malloc()` y se pide un apuntador al inicio de una seccion de memoria del tamaño exacto de `Nodo`, despues se asiga el apuntador que devuelve a la variable `nuevo`
```c
nuevo = malloc(sizeof(Nodo));
```
En la siguient linea se accede al espaciodestinado para el campo `dato`(al hacer uso del operador `->`), y se guarda en el, el valor que se recibe como parametro.
```c
 nuevo -> dato =x;
 ```
 