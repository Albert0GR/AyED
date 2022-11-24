/*  apuntador.cc
    uso de los operadores * y * 
    */
#include<stdio.h>

//la funcion main inicia la ejecuacion del programa 
int main(){
    int x=5;
    int *apx;   //con int * declaramos apx como tipo apuntador a entero
    apx= &x;    //apx toma la direccion de x

    printf("El valor de x es: : %d \nEl valor de *apx es: %d\n",x,*apx);
    printf("La direccion de x es : %p\nEl valor de apx es: %p\n",&x,apx);

    /*Mostramos el tamaño de la variable x:
    El tamaño puede cambiar dependiendo del sisitema y del compilador
    */

   printf("Sizeof x: %ld bytes \n",sizeof(x));

   return 0;
}