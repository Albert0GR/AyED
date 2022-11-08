#include<stdio.h>
#include<stdlib.h>

#define N 200

int a[N];
int *b;
int i,tam;

void redimensionar();

int main(){

    printf("el arreglo A tiene tamño: %ld",sizeof(a)/sizeof(int));

    return 0;
}

void redimensionar(){
    b=(int*)malloc(N*sizeof(int));
    for ( i = 0; i < N; i++)
    {
        b[i]=a[i];
    }
    printf("introduzca el nuevo tamaño del arreglo b:");

    scanf("%d",&tam);
    realloc(b,tam);
    
}
