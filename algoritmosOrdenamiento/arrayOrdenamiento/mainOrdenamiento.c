//ejecute
//cd "/home/alberto/Documents/GitHub/AyED/algoritmosOrdenamiento/arrayOrdenamiento/" && gcc mainOrdenamiento.c funcionesOrdenamiento.c -o mainOrdenamiento && "/home/alberto/Documents/GitHub/AyED/algoritmosOrdenamiento/arrayOrdenamiento/"mainOrdenamiento


#include "funcionesOrdenamiento.h"

#define tmax 1000
int a[tmax];
  clock_t comienzo;


int main(){
    printf("|\nBURBUJA|\n");
    aleatorio(a,tmax);
    imprimir(tmax,a);
    comienzo=clock();
    burbuja(tmax,a);
    printf( "Número de segundos transcurridos desde el comienzo del programa: %f s\n", (clock()-comienzo)/(double)CLOCKS_PER_SEC );
    imprimir(tmax,a);

    printf("|\nSELECCION|\n");
    aleatorio(a,tmax);
    //imprimir(tmax,a);
    comienzo=clock();
    seleccion(tmax,a);
    printf( "Número de segundos transcurridos desde el comienzo del programa: %f s\n", (clock()-comienzo)/(double)CLOCKS_PER_SEC );
    //imprimir(tmax,a);

    printf("|\nINSERCION LINEAL|\n");
    aleatorio(a,tmax);
    //imprimir(tmax,a);
    comienzo=clock();
    insercionlineal(tmax,a);
    printf( "Número de segundos transcurridos desde el comienzo del programa: %f s\n", (clock()-comienzo)/(double)CLOCKS_PER_SEC );
    //imprimir(tmax,a);

    printf("|\nINSERCION BINARIA|\n");
    aleatorio(a,tmax);
    //imprimir(tmax,a);
    comienzo=clock();
    insercionbinaria(tmax,a);
    printf( "Número de segundos transcurridos desde el comienzo del programa: %f s\n", (clock()-comienzo)/(double)CLOCKS_PER_SEC );
    //imprimir(tmax,a);


    printf("|\n SHELL|\n");
    aleatorio(a,tmax);
    //imprimir(tmax,a);
    comienzo=clock();
    shell(tmax,a);
    printf( "Número de segundos transcurridos desde el comienzo del programa: %f s\n", (clock()-comienzo)/(double)CLOCKS_PER_SEC );
    //imprimir(tmax,a);

    printf("|\n quicksort|\n");
    aleatorio(a,tmax);
    //imprimir(tmax,a);
    comienzo=clock();
    OrdenaQuickSort(a,0,tmax-1);
    printf( "Número de segundos transcurridos desde el comienzo del programa: %f s\n", (clock()-comienzo)/(double)CLOCKS_PER_SEC );
    //imprimir(tmax,a);

    return 0;
}