//algoritmo de ordenamiento y busqueda en una lista implemnetada con arrelgos

#include<stdio.h>
#define N 5
int n[]={400,300,200,100,500};

/*retorna la posicion del dato a buscar,recibe apuntador a lista, elementos de arreglo , clave */

int busqueda_lineal(int *n,int num,int clave);

int main(){

    int posicion= busqueda_lineal(n,N,500);
    printf("el dato se encontro en la posicion %d  \n",posicion);

    return 0;
}

int busqueda_lineal(int *n,int num,int clave){

    int pivote=0;
    int fin = num -1;
    //int encontrado =0;  //falso =0 , verdadero =1
    char encontrado = 'F';

    while (pivote<=fin && encontrado=='F')
    {
        if (*(n+pivote) == clave )
            encontrado='V';
        else
            pivote++;
        
    }
    if (encontrado=='V')
        return pivote;
    
    return -1;  //no encontro la clave 
   
    
}