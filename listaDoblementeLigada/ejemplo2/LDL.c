//https://gist.github.com/Alejandrocaro35/bafdaa5d2e621d0f1dd0ede627bb72b0
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

typedef struct nodo
{
	int info;
	struct nodo *sig;
	struct nodo *ant;
} nodoL;

// Alias para lista

typedef nodoL* lista;

typedef struct lista
{
	lista prim;
	lista ult;
} ListaI;

//DEFINICIÓN DE LAS FUNCIONES

void insdelante(ListaI *L, int n);
void insdetras(ListaI *L, int n);
void mostrarposppiofin(lista *L, int n);
int mostrar(lista L);
int mostrarrev (lista L);
void borrar(lista *L,int n);
int pos;

void insdelante (ListaI *L, int n)
{
	lista aux = malloc(sizeof(nodoL));
	aux -> info = n;
	aux -> sig = NULL;
	aux -> ant = NULL;
	if((*L).prim!=NULL)
	{
		aux->sig=(*L).prim;
		aux->sig->ant=aux;
	}
	if((*L).ult==NULL)
		(*L).ult=aux;
	(*L).prim=aux;
}

void insdetras (ListaI *L, int n)
{
	lista aux = malloc(sizeof(lista));
	aux -> info = n;
	aux -> sig = NULL;
	aux -> ant = NULL;
	if((*L).ult!=NULL)
	{
		aux->ant=(*L).ult;
		aux->ant->sig=aux;
	}
	if((*L).prim==NULL)
		(*L).prim=aux;
	(*L).ult=aux;
}

int mostrar (lista L)
{
	int i=0;
	while(L!=NULL)
	{
		i=1;
		printf(" [%d] <=>",L->info);
		L=L->sig;
	}
	return i;
}

int mostrarrev (lista L)
{
	int i=0;
	while(L!=NULL)
	{
		i=1;
		printf(" [%d] <=>",L->info);
		L=L->ant;
	}
	return i;
}


void borrar(lista *L,int n)
{
	if ((*L)==NULL)
	{
		printf("La lista esta vacia\n");
	}
	else
	{
		lista aux= malloc(sizeof(lista));
		lista prox= malloc(sizeof(lista));
		aux=(*L);
		if(aux->info==n)
		{
			(*L)=aux->sig;
		}
		prox =aux->sig;
		while (prox!=NULL)
		{
			if(prox->info==n)
			{
				aux->sig=prox->sig;
				prox =aux->sig;
				while (prox!=NULL)
				{
					if(prox->info==n)
					{
						aux->sig=prox->sig;
						if (aux->sig != NULL)
							aux->sig->ant=aux;
					}
					else
					{
						aux=aux->sig;
						if(aux!=NULL)
						{
							prox=aux->sig;
						}
						else
						{
							prox=NULL;
						}
					}
				}
			}
		}
	}
}

void mostrarposfinppio (lista *L, int n){
	int k;
	int pos = 0;
	lista aux = malloc(sizeof(lista)); //prox = new nodoL;
	aux = *L;
	printf("\n\n    buscando  [%d] en la lista \n\n",n);
	while(aux!= NULL){
		pos++;
		if(aux->info==n){
			printf("( %d )",pos);
			k=1;
		}
		aux = aux->ant;
	}
	if(k==1){
		printf("\n\n El numero fue hallado en estas posiciones, \n\n verifique con la lista:\n\n");
		
	}else printf("\n\n El numero no fue hallado en la lista, \n\n verifique:\n\n");
}

void mostrarposppiofin (lista *L, int n){
	int k;
	int pos = 0;
	lista aux = malloc(sizeof(lista)); //, prox = new nodoL;
	aux = *L;
	printf("\n\n    buscando  [%d] en la lista \n\n",n);
	while(aux!= NULL){
		pos++;
		if(aux->info==n){
			printf("( %d )",pos);
			k=1;
		}
		aux = aux->sig;
	}
	if(k==1){
		printf("\n\n El numero fue hallado en estas posiciones, \n\n verifique con la lista:\n\n");
		
	}else printf("\n\n El numero no fue hallado en la lista, \n\n verifique:\n\n");
}

int main()
{
	int opcion=9999;
	
	ListaI Nuevalista;
	Nuevalista.prim=NULL;
	Nuevalista.ult=NULL;
	while(opcion)
	{
		system("cls");
		printf("Programa:Listas implementadas con Punteros\nSeleccione una opcion\n\n1.Agregar Numeros al final\n2.Agregar Numeros al principio\n3.Mostrar lista de fin a principio\n4.Mostrar lista de principio a fin ");
		printf("\n5.Eliminar un numero de la lista\n6.Recorrer la lista de principio a fin y buscar un numero en la lista\n7.Recorrer la lista de fin a principio y buscar un numero en la lista\n0.Salir ");
		scanf("%d",&opcion);
		switch (opcion)
		{
		case 1:
		{
			//abro case 1
			int numNuevo;
			system("cls");
			printf("Ingrese numeros para agregar al final de la lista, 0 para terminar:\n");
			scanf("%d",&numNuevo);
			while (numNuevo != 0)
			{
				insdelante (&Nuevalista,numNuevo);
				printf("%d se ha agregado con exito al final de la lista \n", numNuevo);
				scanf("%d",&numNuevo);
			}
			break;
		} //agupación case 1
		case 2:
		{
			//abro case 2
			int numNuevo;
			system("cls");
			printf("Ingrese numeros para agregar al principio de la lista, 0 para terminar:\n");
			scanf("%d",&numNuevo);
			while (numNuevo != 0)
			{
				insdetras (&Nuevalista,numNuevo);
				printf("%d se ha agregado con exito al principio de la lista \n", numNuevo);
				scanf("%d",&numNuevo);
			}
			break;
		} //agupación case 2
		case 3:
		{
			//abro case 3
			system("cls");
			printf("LISTA DE FIN A PRINCIPIO:\n\n");
			int i = mostrar (Nuevalista.prim);
			if(i==0)printf("La lista esta vacia\n\n");
			else printf("# \n\n");
			printf("Pulse cualquier letra pasa salir");
			getch();
			break;
		} //agupación case 3
		case 4:
		{
			//abro case 4
			system("cls");
			printf("LISTA DE PRINCIPIO A FIN:\n\n"); //Solo muestra el primer elemento
			int i = mostrarrev(Nuevalista.ult);
			if(i==0)printf("La lista esta vacia\n\n");
			else printf("# \n\n");
			printf ("Pulse cualquier letra pasa seguir");
			getch();
			break;
		} //agupación case 4
		case 5:
		{
			//abro case 5
			int n;
			system("cls");
			printf("Los numeros cargados en la lista son: \n\n");
			int m = mostrar(Nuevalista.prim);
			if (m==0)
			{
				printf("La lista esta vacia");
			}
			printf("\n\nIngrese el numero que desee borrar: \n");
			scanf("%d", &n);
			system("cls");
			borrar (&Nuevalista.prim,n);
			m = mostrar (Nuevalista.prim);
			if(m!=0) printf("# \n\n");
			getch();
			break;
		} //agupación case 5
		case 6:
		{ //abro case 6
			int n;
			system("cls");
			printf("Busca un numero en la lista e indica su posicion\n recorriendo la lista de principio a fin ");
			printf("\n\nIngrese el numero que desea buscar: ");
			scanf("%d",&n);
			mostrarposppiofin(&Nuevalista.prim,n);
			int m= mostrar(Nuevalista.prim);
			if(m!=0) printf("# \n\n");
			getch();
			break;
		} //agupación case 6
		case 7:
		{ //abro case 7
			int n;
			//int pp=0;
			system("cls");
			printf("Busca un numero en la lista e indica su posicion\n recorriendo la lista de principio a fin ");
			printf("\n\nIngrese el numero que desea buscar: ");
			scanf("%d",&n);
			mostrarposppiofin(&Nuevalista.ult,n);
			mostrarrev(Nuevalista.ult);
			getch();
			break;
		} //agupación case 7
		} //cierro switch
	} //cierro while
	return 0;
} //cierro main