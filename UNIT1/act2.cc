#include <stdio.h>

void f(char *apx, int n);
int main(){
    char x[]={'a','b','c','d'};
    char apx = *x;
    int n;

    printf("introduce un numeo entre 0 y 3:\n");
    scanf("%d",&n);
    f(x,n);

    return 0;
}

void f(char *apx, int n){
    printf("%c\n",*(apx+n));
}