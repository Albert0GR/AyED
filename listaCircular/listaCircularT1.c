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
//int remov(listaCircular *lista, int i);
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
    insert(44);
    insert(33);
    insert(22);
    imprime();




}

int full(){
    if(lista[fin]!=0)
    return 1;
    else
    return 0;
}

int element(int i){
  
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
    
}