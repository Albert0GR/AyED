#include<stdio.h>
#include<math.h>
#define length 5

int arr[length];
int pot[length];

void leerDatos();
void potenciaArreglo(int tam, int *arr, int *pot);
void mostrar(int tam, int *n);

int main(){
    
    leerDatos();
    potenciaArreglo(5,arr,pot);
    printf("Resultado potencias\n");
    mostrar(5,arr);
    
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