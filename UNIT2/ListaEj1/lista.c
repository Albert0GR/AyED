

#include "list.h"
static void CopiarAlNodo(Item item,Nodo *pnodo);

void IniciaLista(Lista *plista){
    *plista = NULL;
}

bool ListaVacia(const Lista *plista){
    if (*plista==NULL)
    {
        return true;
    }else{
        return false;
    }
    
}

bool ListaLlena(const Lista *plista){
    Nodo *pt;
    bool llena;

    pt= (Nodo*)malloc(sizeof(Nodo));

    if (pt==NULL)
    {
        llena= true;
    }else{
        llena =false;
    }
    
}

unsigned int ListItem(const Lista *plista){
    unsigned int num =0;
    Nodo *pnodo = *plista;

    while (pnodo !=NULL)
    {
        ++num;
        pnodo=pnodo->next;      //al siguiente nodo
    }
    return num;
}

bool AgregarItem(Item item,Lista * plista){
    Nodo * pnuevo;
    Nodo * scan =*plista;

    pnuevo =(Nodo*)malloc(sizeof(Nodo));
    if (pnuevo == NULL) 
            return false;
    CopiarAlNodo(item,pnuevo);
    pnuevo->next=NULL;

    if(scan ==NULL)
        *plista= pnuevo; 
    else{
        while (scan->next !=NULL)
        
            scan=scan->next; //encuentra el final de la lista 
            scan->next=pnuevo; //agrega pnuevo al final
        }
    return true;
    
}

void Traverse(const Lista *plista,void(*pfun)(Item item)){
    Nodo *pnodo = *plista;

    while (pnodo != NULL)
    {
        (*pfun)(pnodo->item);   //aplica la funcion al item
        pnodo= pnodo->next;   //avanza al siguiente item
    }
    
}

void VaciaLista(Lista *plista){
    Nodo *pguarda;

    while (*plista !=NULL)
    {
        pguarda=(*plista)->next;    //guarda la direccion del nodo siguiente
        free(*plista);              //borra el nodo actual
        *plista=pguarda;
    }
    
}

static void CopiarAlNodo(Item item,Nodo *pnodo){
    pnodo->item= item;
}