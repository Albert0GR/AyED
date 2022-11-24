## Ejercicio 1

### Descripcion

El siguiente procedimiento recorre la lista ligada simple que podemos comenzar a construir al insertar elementos como se muestra en el Código 3 de las Notas 3.  Modifícalo para imprimir los elementos de la lista mientras la recorre. Crea la función principal main() en el que el usuario tendrá la posibilidad de recorrer la lista (imprimiendo sus valores) o insertar un dato en ella.

El codigo esta compuesto por 3 archivos 
 > Comando de ejecucion `gcc mainT3E1.c lista.c -o t3e1`  `./t3e1` 

 ### CODIGOS

### ARCHIVO: .h [funciones.h](funciones.h)

```c
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <stdio.h>
#include <stdlib.h>
 
typedef struct snodo{       //snodo es el nombre de la estructura
    int valor;
    struct snodo *sig;      //El puntero siguiente para recorrer la lista enlazada
}tnodo;                     //tnodo es el tipo de dato para declarar la estructura


 
typedef tnodo *tpuntero;    //Puntero al tipo de dato tnodo para no utilizar punteros de punteros
 


//funciones vistas en la clase
void insertar(tpuntero *cabeza, int valor);
int recorrer(tpuntero *cabeza);                  //recorre la lista y devuleve su longitud
int buscarDato(tpuntero *cabeza,int valor);     //devuelve la posicion en que se encuentra un valor o 1 en otro caso
tnodo *buscaNodo(tpuntero *cabeza,int pos);     //devuelve el apuntador al nodo en una posicion en particular
void visita(tnodo *actual);                     //recorrido recursivo de la lista
void eliminar(tnodo *actual);


#endif

```

### ARCHIVO: main.c [mainT3E1](mainT3E1.c)

```c

//se compila junto con lista.c
#include "funciones.h"
int main(){
    int e,f;
    tpuntero cabeza,search;          //Indica la cabeza de la lista enlazada, si la perdemos no podremos acceder a la lista
    cabeza = NULL;                    //Se inicializa la cabeza como NULL ya que no hay ningun nodo cargado en la lista
    
    do
    {
        printf("\n [1] Ingresar datos");
        printf("\n [2] Imprimir valores");
        printf("\n [-1] Salir");
        scanf("%d",&f);
        switch (f)
        {
        case 1:
             while(e!=-1){
                printf("Ingrese elementos, -1 para terminar: ");
                scanf("%d",&e);
                if(e!=-1)insertar(&cabeza, e);
                printf ("Ingresado correctamente");
                printf ("\n");
             }
            break;
        case 2:
                printf("opcion imprimir en curso");
             recorrer(&cabeza);
            break;
        default:
        printf("BYE");
            break;
        }
    

    } while (f!=-1);
    

    
     
return 0;
}

```

### ARCHIO  lista.c [lista](lista.c) 


```c
#include "funciones.h"

//funciones vistas en la clase

void insertar(tpuntero *cabeza, int valor){
    tnodo *nuevo=*cabeza;
     nuevo= malloc(sizeof(tnodo));
     nuevo->valor= valor;
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
            printf("%d ",aux->valor);
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
```

### EJECUCION DEL PROGRAMA

![image](/Lista_ejemplo/listaheaders/E1/images/img1.png)  


[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/5shqNMgpoME/0.jpg)](https://youtu.be/AJ3SQpKt47Y)
