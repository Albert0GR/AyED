
//se compila junto con lista.c
#include "funciones.h"
int main(){
    int e,f;
    tpuntero cabeza,search;          //Indica la cabeza de la lista enlazada, si la perdemos no podremos acceder a la lista
    cabeza = NULL;                    //Se inicializa la cabeza como NULL ya que no hay ningun nodo cargado en la lista
    
    do
    {
        printf("\n [1] Ingresar datos");
        printf("\n [2] Imprimir valores");
        printf("\n [3] Numero acual de nodos");
        printf("\n [4] Buscar dato");
        printf("\n [5] Dato en la posicion [i]");
        printf("\n [6] Eliminar dato");
        printf("\n [-1] Salir");
        printf("\n");
        scanf("%d",&f);
        switch (f)
        {
        case 1:
             while(e!=-1){
                printf("Ingrese elementos, -1 para terminar: ");
                scanf("%d",&e);
                if(e!=-1)insertar(&cabeza, e);
                printf ("Ingresado correctamente");
                printf ("\n");
             }
            break;
        case 2:
                printf("opcion imprimir en curso");
             recorrer(&cabeza);
            break;
        case 3:
            printf ("\nAl momento hay %d nodos: ",recorrer(&cabeza));
            break;
        case 4:
            
            printf("Ingresa el dato a buscar");
            int j,dato;
            scanf("%d",&dato);
            j=buscarDato(&cabeza,dato);
            if(j==-1)
                printf("Dato no encontrado");
            else
                printf("el dato esta en la posicion %d",j);
            break;
        case 5:
                printf("Ingresa el indice del dato que quieres extraer");
                int i;scanf("%d",&i);
                tnodo *ps=buscaNodo(&cabeza,i);        
                printf("\nEl dato en  la posicion [%d] tiene la direccion de memoria %p\n",i,ps);
                printf("\nEl dato en  la posicion [%d] tiene un valor %d\n",i,ps->valor);
            break;
        case 6:
            eliminar(cabeza);
            break;
        default:
        printf("BYE");
            break;
        }
    

    } while (f!=-1);
    

    
     
return 0;
}