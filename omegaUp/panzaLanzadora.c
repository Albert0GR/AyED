
#include <stdio.h>
#include <stdlib.h>

int val[10];

void imprimir(int tam,int *arr){
        
        for(int j=0; j<tam; j++){
         val[j] =*(arr+j);               
        printf("%d ",val[j]);
        }
}
void compara(int tam,int *arr){
    int mayor=0,menor=300;
    for(int j=0; j<tam; j++){
        scanf("%d",(arr+j));
        if (*(arr+j)> mayor) mayor = *(arr+j);
		if (*(arr+j) < menor) menor = *(arr+j);
		
} 
        printf("%d %d",menor,mayor);
}


int main(){
    int *array,n;
    scanf("%d",&n);
    array=(int*)calloc(n,sizeof(int));
    compara(n,array);
    
    
}




