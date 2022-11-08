#include<stdio.h>
#define N 4
#define M 5

int main(){
int f,c;
double mt[N][M], *pmt; 

for (f = 0; f<N; f++)
{
    for (c = 0; c<M; c++)
        printf("%lf"  , *(pmt + f*M + c));
    printf("\n");
}
  
}
