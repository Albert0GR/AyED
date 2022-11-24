>Alberto Gutierrez Romero
> 2213027799

## Tarea 2 Lista circular estatica: 
> 

## RESULTADO DE EJECUCION 
![image](/listaCircular/img1.png)   


**REFERENCIA AL CODIGO** [Programa Lista Circular](listaCircularT1.c)
### Código:

```c
#include<stdio.h>

#define SIZE 7


    int lista[SIZE];
    int size=SIZE, position, step=1, indice, fin;
    

//devuelve 1 si esta llena o cero en otro caso
int full();
//que devuelve el valor contenido en la i-ésima posición, o VACIO, si la lista no contiene elemento en esa posición
int element(int i);
//inserta el valor "x" al final de la lista y devuelve 1 si esto se se realiza con éxito, o 0 si no es posible
int insert(int x);
//elimina el el valor contenido en la i-ésima posición, o VACIO, si la lista no contiene elemento en esa posición.
int remov(int i);
//inicializar la lista

void inicializa();
void imprime();

int main(){
    
    printf("\nInicio de la lista circular: [0-%d] ",size - 1);
    scanf ("%d", &indice);
    fin=indice;
    position = indice;

    inicializa();
    imprime();
    insert(99);
    insert(88);
    insert(77);
    insert(66);
    insert(55);
    //insert(44);
    //insert(33);
    //insert(22);
    imprime();
    element(3);

    remov(5);
    imprime();
    remov(1);




}

int full(){
    if(lista[fin]!=0)
    return 1;
    else
    return 0;
}


int insert(int x){
    if(!full()){
        lista[fin] = x;
        printf("\nvalor antes de insertar: %d",fin);
        fin=position=(position+size+step)%size; 
        printf("\nvalor despues de insertar: %d",fin);     
        return 1; //inserto elemento
    }else
        printf("\ncola llena");
        return 0; //no fue posible
}



void inicializa(){
    for (int i = 0; i < size; i++)
    {
        lista[i]=0;
    }
    
}

void imprime(){
    printf("\nimpresion:\n");
    for (int i = 0; i < size; i++)
    {

        printf("%d ",lista[i]);
    }
    
}

int element(int i){
    
        if (i >= 0 && i <= size)
    {
        printf("\nel valor de la lista en el indice [%d] es: %d",i,lista[i]);
        return lista[i];

    }else{
        printf("\nindice no valido");
        return 0;
    }
}

int remov(int i){
    
        if (i >= 0 && i <= size)
    {
        if(lista[i]!=0){
             printf("\n se borrara el valor de la lista en el indice [%d] que es: %d",i,lista[i]);
             lista[i]=0;
            return 1;
        }else{
            printf("\nla lista en este idice ya estaba vacia");
            return 0;
        }
       

    }else{
        printf("\nindice no valido");
        return 0;
    }
}
```