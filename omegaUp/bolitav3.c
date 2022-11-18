#include <stdio.h>
#include <stdlib.h>


/* void func(int mov){ 
    switch(mov){
        case 1:
        if(bolita==1){bolita=2;                 
             }else{bolita=1;}
            //printf("\nvalor  de bolita :%d movimiento %d",bolita,mov);
        break;

        case 2:
        if(bolita==1){bolita=3;                 
             }else{bolita=1;}
            //printf("\nvalor  de bolita :%d movimiento %d",bolita,mov);
        break;
        
        case 3:
        if(bolita==1){bolita=4;                 
             }else{bolita=1;}
            //printf("\nvalor  de bolita :%d movimiento %d",bolita,mov);
        break;
   
        case 4:
        if(bolita==2){bolita=3;                 
             }else{bolita=2;}
            //printf("\nvalor  de bolita :%d movimiento %d",bolita,mov);
        break;
       
        case 5:
        if(bolita==2){bolita=4;                 
             }else{bolita=2;}
            //printf("\nvalor  de bolita :%d movimiento %d",bolita,mov);
        break;

        case 6:
        if(bolita==3){bolita=4;                 
             }else{bolita=3;}
            //printf("\nvalor  de bolita :%d movimiento %d",bolita,mov);
        break;
        
        default:
        printf("\nvalor  de bolita :%d movimiento %d",bolita,mov);
        

    }
}
 */
int compara(int tam,int *arr,int bolita){
    int bolafin=bolita;
    for(int j=0; j<tam; j++){ 
       // printf("\nmovimiento %d",*(arr+j));  

        if (*(arr+j)==1) {
            if(bolafin==1){bolafin=2;                 
                        }else{bolafin=1;}
        }
          if (*(arr+j)==2) {
            if(bolafin==1){bolafin=3;                 
                        }else{bolafin=1;}
        }
          if (*(arr+j)==3) {
            if(bolafin==1){bolafin=4;                 
                        }else{bolafin=1;}
        }
          if (*(arr+j)==4) {
            if(bolafin==2){bolafin=3;                 
                        }else{bolafin=2;}
        }
          if (*(arr+j)==5) {
            if(bolafin==2){bolafin=4;                 
                        }else{bolafin=2;}
        }
          if (*(arr+j)==6) {
            if(bolafin==3){bolafin=4;                 
                        }else{bolafin=1;}
        }

		
} 
        return bolafin;
}

int comparan(int tam,int *arr,int bolita){
    int bolafin=bolita;
    for(int j=0; j<tam; j++){ 
       // printf("\nmovimiento %d",*(arr+j));  

        if (*(arr+j)==1 &&(bolafin==1 || bolafin==2)) {
            if(bolafin==1){bolafin=2;                 
                        }else{bolafin=1;}
        }
          if (*(arr+j)==2 &&(bolafin==1 || bolafin==3)) {
            if(bolafin==1){bolafin=3;                 
                        }else{bolafin=1;}
        }
          if (*(arr+j)==3 &&(bolafin==1 || bolafin==4)) {
            if(bolafin==1){bolafin=4;                 
                        }else{bolafin=1;}
        }
          if (*(arr+j)==4 &&(bolafin==2 || bolafin==3)) {
            if(bolafin==2){bolafin=3;                 
                        }else{bolafin=2;}
        }
          if (*(arr+j)==5 &&(bolafin==2 || bolafin==4)) {
            if(bolafin==2){bolafin=4;                 
                        }else{bolafin=2;}
        }
          if (*(arr+j)==6 &&(bolafin==4 || bolafin==3)) {
            if(bolafin==3){bolafin=4;                 
                        }else{bolafin=1;}
        }

		
} 
        return bolafin;
}

void guardar(int tam,int *arr){
        for(int j=0; j<tam; j++){
        scanf("%d",(arr+j));
        }
}


void imprimir(int tam,int *arr){
        
        for(int j=0; j<tam; j++){
         //val[j] =*(arr+j);               
        printf("%d ",*(arr+j));
        }
}

int main(){
    int *array,n,bolita;
    scanf("%d",&bolita);
    scanf("%d",&n);

    if (n>0 && n< 5001)
    {
            
    array=(int*)calloc(n,sizeof(int));
    guardar(n,array);
    //imprimir(n,array);
    
    printf("%d\n",comparan(n,array,bolita));
    }

    
    
}




