
#include "list.h"
 

void mostrarPleiculas(Item item);
char *s_gets(char *st,int n);


int main(void){
    Lista movies;
    Item temporal;

//inicializar
    IniciaLista(&movies);


for (int i = 0; i < 3; i++)
{
    puts("ingresa un nombre de pelicula");
while (s_gets(temporal.titulo,TSIZE) !=NULL && temporal.titulo[0] !='\0')
{
    puts("ingresa tu calificacion ");
    scanf("%d",&temporal.calificacion);
    while (getchar()!='\n'){
       continue; 
    }        
    if(AgregarItem(temporal,&movies)==false){
        fprintf(stderr,"Problemaal guardar en memoria\n");
        break;
    }
    if(ListaLlena(&movies)){
        puts("ahor la lista esta llena");
        break;
    }

    puts("ingresa nuevo titulo()");
    
}
}

/*     if (ListaLlena(&movies))
    {
        fprintf(stderr,"No hay memoria Adios\n");
        exit(1);
    } */

//display
    if (ListaVacia(&movies))
    {
        printf("no datos");
    }else{
        printf("aqui esta l lista de peliculas\n");
        Traverse(&movies,mostrarPleiculas);
    }
    printf("ingresaste %d peliculas.\n",ListItem(&movies));

//limpiar

    VaciaLista(&movies);
    printf("bye\n");

    return 0;    
}

void mostrarPleiculas(Item item){
    printf("pelicula: %s Calificacion: %d\n",item.titulo,item.calificacion);
}

char *s_gets(char *st,int n){
    char *ret_val;
    char*find;

    ret_val=fgets(st,n,stdin);

    if(ret_val)
    {
        find= strchr(st,'\n');
        if (find)
        {
            *find ='\0';
        }else{
            while(getchar()!='\n')
            continue;
        }
        
    }
    return ret_val;
}