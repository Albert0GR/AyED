#ifndef FUNCIONESORDENAMIENTO_H_
#define FUNCIONESORDENAMIENTO_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void imprimir(int n, int a[]);
void intercambio(int a[],int x,int y);
void intercambioPt(int *a,int x,int y);


void burbuja(int n, int a[]);
void seleccion(int n,int a[]);
void aleatorio(int a[],int n);
void insercionlineal( int  n, int  a[]);
void insercionbinaria( int  n, int  a[] );

void shell( int  n, int  a[]);
void OrdenaQuickSort( int a[], int iz, int de);

#endif