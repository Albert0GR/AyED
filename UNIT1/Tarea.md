# Omega up

>Alberto Gutierrez Romero
> 2213027799

## Tarea 1 Ejercicio 1: 
> 

### Código:

```c
#include<stdio.h>
#include<math.h>
#define length 4

int arr[length];
int pot[length];

void leerDatos();
void potenciaArreglo(int tam, int *arr, int *pot);
void mostrar(int tam, int *n);

int main(){
    
    leerDatos();
    potenciaArreglo(4,arr,pot);                         /*funcion que recibe dos arreglos por referencia*/
    printf("Resultado potencias\n");
    mostrar(4,arr);
    
}
void leerDatos(){
    for (int i = 0; i < length; i++)
    {
        printf("ingresa el numero [%d]",i);
        scanf("%d",&arr[i]);
 
    }

    for (int i = 0; i < length; i++)
    {
        printf("ingresa la potencia para el numero [%d]",i);
        scanf("%d",&pot[i]); 
    }
    
}

void potenciaArreglo(int tam, int *arr, int *pot){
    printf("Numeros:\n");
    mostrar(tam,arr);
    for(int j=0; j<tam; j++){
         *(arr+j) =pow(*(arr+j),*(pot+j));
    }
       

}
void mostrar(int tam, int *n){
    {
    for(int j=0; j<tam; j++)
        printf("num[%d] = %d \n", j, *(n+j));
        //printf("%d ",*(n+j));
    }
}

```
