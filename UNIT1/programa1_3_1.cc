/*apuntadorNulo.cc
    Todo apuntdor debe inicializarse para que no apunte hacia areas desconocidas o no inicializadas de la memoria
*/
#include<stdio.h>


int main(){

    int x=8, *apx, *apx2=NULL;

    printf("Apuntadores ANTES de la asignacion\n");
    printf("Valor de x: %d, direccion de x: %p\n",x,&x);
    printf("Valor de apx: %p, valor de apx2: %p\n\n",apx,apx2);

    apx= &x;
    apx2=&x;

    printf("Apuntadores DESPUES de la asignacion\n");
    printf("Valor de x: %d, direccion de x: %p\n",x,&x);
    printf("Valor de apx: %p, valor de apx2: %p\n\n",apx,apx2);
    return 0;

}