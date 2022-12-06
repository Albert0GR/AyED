#include <stdio.h>
#include <time.h>

int main( void )
{
   long int i=0;
   clock_t comienzo;

   comienzo=clock();
   for( i=0; i<100; i++ )   printf( "-" );

   printf( "Número de segundos transcurridos desde el comienzo del programa: %f s\n", (clock()-comienzo)/(double)CLOCKS_PER_SEC );

   return 0;
}