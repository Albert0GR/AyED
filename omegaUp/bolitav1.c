
#include <stdio.h>

int arr[2][6]={{1,1,1,2,2,3},{2,3,4,3,4,4}};

void func(int mov,int bolita){
    switch(mov){
        case 1:
            if(bolita==arr[0][mov])bolita==arr[1][mov];
            else bolita==arr[0][mov];
        break;

        case 2:
            if(bolita==arr[0][mov])bolita==arr[1][mov];
            else bolita==arr[0][mov];
        break;
            if(bolita==arr[0][mov])bolita==arr[1][mov];
            else bolita==arr[0][mov];
        case 3:
            if(bolita==arr[0][mov])bolita==arr[1][mov];
            else bolita==arr[0][mov];
        break;
            if(bolita==arr[0][mov])bolita==arr[1][mov];
            else bolita==arr[0][mov];
        case 4:
             if(bolita==arr[0][mov])bolita==arr[1][mov];
            else bolita==arr[0][mov];
        break;
            if(bolita==arr[0][mov])bolita==arr[1][mov];
            else bolita==arr[0][mov];
        case 5:
            if(bolita==arr[0][mov])bolita==arr[1][mov];
            else bolita==arr[0][mov];
        break;
            if(bolita==arr[0][mov])bolita==arr[1][mov];
            else bolita==arr[0][mov];
        case 6:
            if(bolita==arr[0][mov])bolita==arr[1][mov];
            else bolita==arr[0][mov];
        break;

    }
}
int main()
{
    printf("Hello World");
    int bolita=0,n=0,mov=0;
    scanf("%d",&bolita);
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&mov);
        func(mov,bolita);
    }
    printf("valor final de bolita :%d",bolita);

    return 0;
}
