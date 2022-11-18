
#include <stdio.h>

int arr[2][6]={{1,1,1,2,2,3},{2,3,4,3,4,4}};
 int bolita=0,n=0,mov=0;
void func(int mov){
    switch(mov){
        case 1:
            if(bolita==arr[0][mov-1])bolita==arr[1][mov-1];
            else bolita==arr[0][mov-1];
        break;

        case 2:
            if(bolita==arr[0][mov-1])bolita==arr[1][mov-1];
            else bolita==arr[0][mov-1];
        break;
 
        case 3:
            if(bolita==arr[0][mov-1])bolita==arr[1][mov-1];
            else bolita==arr[0][mov-1];
        break;

        case 4:
            if(bolita==arr[0][mov-1])bolita==arr[1][mov-1];
            else bolita==arr[0][mov-1];
        break;

        case 5:
            if(bolita==arr[0][mov-1])bolita==arr[1][mov-1];
            else bolita==arr[0][mov-1];
        break;

        case 6:
            if(bolita==arr[0][mov-1])bolita==arr[1][mov-1];
            else bolita==arr[0][mov-1];
        break;

    }
}
int main()
{

   
    scanf("%d",&bolita);
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
       if( scanf("%d",&mov));
        func(mov);
    }
    printf("valor final de bolita :%d",bolita);

    return 0;
}
