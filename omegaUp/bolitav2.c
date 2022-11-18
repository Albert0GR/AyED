
#include <stdio.h>
#include <stdlib.h>


int arr[2][6]={{1,1,1,2,2,3},{2,3,4,3,4,4}};
int bolita=0,n=0,mov=0;
void func(int mov){ 
    switch(mov){
        case 1:
        if(bolita=arr[0][mov-1]){bolita=arr[1][mov-1];                 
             }else{
                 (bolita=arr[1][mov-1]);bolita=arr[0][mov-1];}
            //printf("\nvalor  de bolita :%d movimiento %d",bolita,mov);
        break;

        case 2:
              if(bolita=arr[0][mov-1]){bolita=arr[1][mov-1];
                 
             }else{
                 (bolita=arr[1][mov-1]);bolita=arr[0][mov-1];}
            //printf("\nvalor  de bolita :%d movimiento %d",bolita,mov);
        break;
        
        case 3:
             if(bolita=arr[0][mov-1]){bolita=arr[1][mov-1];
                 
             }else{
                 (bolita=arr[1][mov-1]);bolita=arr[0][mov-1];}
            //printf("\nvalor  de bolita :%d movimiento %d",bolita,mov);
        break;
   
        case 4:
             if(bolita=arr[0][mov-1]){bolita=arr[1][mov-1];
                 
             }else{
                 (bolita=arr[1][mov-1]);bolita=arr[0][mov-1];}
            //printf("\nvalor  de bolita :%d movimiento %d",bolita,mov);
        break;
       
        case 5:
                if(bolita=arr[0][mov-1]){bolita=arr[1][mov-1];
                 
             }else{
                 (bolita=arr[1][mov-1]);bolita=arr[0][mov-1];}
            //printf("\nvalor  de bolita :%d movimiento %d",bolita,mov);
        break;

        case 6:
               if(bolita=arr[0][mov-1]){bolita=arr[1][mov-1];
                 
             }else{
                 (bolita=arr[1][mov-1]);bolita=arr[0][mov-1];}
            //printf("\nvalor  de bolita :%d movimiento %d",bolita,mov);
        break;
        
        default:
        printf("\nvalor  de bolita :%d movimiento %d",bolita,mov);
        

    }
}
int main()
{
    
    //printf("%d \n",arr[1][3]);
    scanf("%d",&bolita);
    //printf("\nvalor inicial de bolita :%d",bolita);
    scanf("%d",&n);
    //printf("valor de movimientos  :%d",n);

    for(int i=0;i<n;i++){
        
        if(scanf("%d",&mov)); func(mov);
        
    }
    

    
    
    printf("%d\n",bolita);

    return 0;
}
