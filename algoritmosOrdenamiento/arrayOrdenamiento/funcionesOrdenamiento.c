#include "funcionesOrdenamiento.h"



 void imprimir(int n, int a[]){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
 }

 void aleatorio(int a[],int n){
   
    for (int i = 0; i < n ; i++)
    {
        a[i] = rand()%1001;
        
    }
    
 }

 void intercambio(int a[],int x,int y){
    
    int aux=a[x];
    a[x]=a[y];
    a[y]=aux;
    
 }
 void intercambioPt(int *a,int x,int y){ // usando logica de apuntadores
    int aux= *(a+x);
    *(a+x) = *(a+y);
    *(a+y) = aux;
 }

//metodos directos 

//burbuja

void burbuja(int n, int a[]){
    int i,j; int aux;
    for ( i = 0; i < n -1; i++)
    {
        for ( j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j+1])
            {
                aux = a[j];
                a[j]= a[j+1];
                a[j+1]=aux;
            }
            
        }
        
    }
    
}


//seleccion

void seleccion(int n,int a[]){
    int i,j,k; int aux;

    for ( i = 0; i < n -1 ; i++)
    {
        k=i;
        for ( j=i +1; j < n; j++)
        {
            if (a[j]< a[k])
            k=j;
        aux=a[k];
        a[k]=a[i];
        a[i]=aux;
            
        }
        
    }
    
}

//insercion

void insercionlineal( int  n, int  a[])
 {
   int  i,j,enc,falso,verdadero;	int  aux;
	falso = 0;
	verdadero = 1;
	for (i = 1; i <n; i++)
   {
      aux = a[i];
      j = i - 1;
      enc = falso;
		while ((i >= 0 ) && !enc)
		 if  (a[j] > aux)
		 {
        a[j + 1] = a[j];
		  j--;
		 }
		 else
        enc = verdadero;
		a[j+1] = aux;
	 }
}

void insercionbinaria( int  n, int  a[] )
{ 
  int  i,j,p,u,c;
  int  aux;
  for(i = 1;i < n; i++)
     {
		 aux = a[i]; 
		 p = 0;
		 u = i - 1;
		 while (p <= u)
		 {
   		   c = (p + u)/ 2;
			if(a[c] > aux)
			  u = c - 1;
			else 
           p = c + 1;
		 }
		 for(j = i - 1; j >= p; j--)
		  a[j + 1] = a[j];
		 a[p] = aux;
	 }
  }

  //------------------------------------------------------

  // indirectos__________------------
  //--------------------------------------

  // shell
void shell( int  n, int  a[])
{
  int  i, j, k, salto;
  int  aux;
  salto = n / 2;
  while (salto > 0)
  {
   for (i = salto; i <  n; i++)
	  {
       j = i - salto;
		 while(j >= 0)
		 {
         k = j + salto;
			if  (a[j] <= a[k])
			  j = -1;
			else
			{
           aux = a[j]; 
           a[j] = a[k];
           a[k] = aux;
			  j = j - salto;
			}
		 }
	  }
	  salto = salto / 2;
	}
}



  //ordenacion rapida

void OrdenaQuickSort( int a[], int iz, int de)//iz =limite inferior, de=limite superior
 {
		 int i, j;
		 float X, W;
		  i = iz;
     j = de;
     X = a[(iz + de) /2];
		  do
			{
			 while (a[i] < X)
				i ++;
			 while (X < a[j])
				j --;
			 if (i <= j)
				{
				  W = a[i]; 
      a[i] = a[j];
      a[j] = W;
				  i++;
      j--;
				 }
		  }
		  while (i <= j);
		  if (iz < j)
           OrdenaQuickSort(a,iz, j);
		  if (i < de)
           OrdenaQuickSort(a, i, de);
};

  //ordenacion por mezcla



  //radixsort










