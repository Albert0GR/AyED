#include<stdio.h>

#define SIZE 7

typedef struct{
    int lista[SIZE];
    int ini,fin;
}listaCircular;

//devuelve 1 si esta llena o cero en otro caso
int full(listaCircular lista);
//que devuelve el valor contenido en la i-ésima posición, o VACIO, si la lista no contiene elemento en esa posición
int element(listaCircular *lista, int i);
//inserta el valor "x" al final de la lista y devuelve 1 si esto se se realiza con éxito, o 0 si no es posible
int insert(listaCircular *lista, int x);
//elimina el el valor contenido en la i-ésima posición, o VACIO, si la lista no contiene elemento en esa posición.
//int remov(listaCircular *lista, int i);
//inicializar la lista
listaCircular inicializa();

int main(){
    int i,x;
    listaCircular list;
    list = inicializa();

    //for ( i = 10; i <= 14; i++)
    //{
        insert(&list,88);
        insert(&list,99);
        insert(&list,22);
    //}

       //for ( i = 1; i < 5; i++)
    //{
       printf("\n%d ", element(&list,1));

       int r = remove(&list,1);

       printf("\n%d ", element(&list,1));
    //}


    



}

listaCircular inicializa(){
    listaCircular lista;
    lista.ini=lista.fin=0;
    for (int i = 0; i < SIZE; i++)
    {
        lista.lista[i]=0;
    }
    
    return lista;
}
int full(listaCircular lista){
    if(lista.fin == SIZE - 1 && lista.ini == 0)
    return 1;
    else
    return lista.fin == lista.ini -1;
}

int element(listaCircular *lista, int i){
    int elemento;
    if (!full(*lista))
    {
        elemento = lista->lista[i-1]; 
        //printf("\n%d",lista->lista[i]);
       //return (*lista).lista[i]; 
       return elemento;
    }else{
        return 0;
    }   
}
int insert(listaCircular *lista, int x){
    if(!full(*lista)){
        lista->lista[lista->fin] = x;
        
        if (lista->fin == SIZE -1)
            lista->fin = 0;
        else
            lista->fin = lista->fin + 1;       
        return 1; //inserto elemento
    }else
        printf("cola llena");
        return 0; //no fue posible
}

