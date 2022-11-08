#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main( )
{

    char **texto, *línea;
    int i, vocales;
    texto = (char **) malloc (20 * sizeof (char *));
    línea = (char *) malloc (80 * sizeof (char));
        for (i=0; i<20; i++)
        {
            gets(línea);
            texto [i] = (char *) malloc (strlen (línea)+1);
            strcpy (texto[i], línea);
            /* Ahora comprobar las vocales que contiene la línea */
            vocales = 0;
                for (i=0; i<strlen(línea); i++)
                {
                    switch (línea [i])
                    {
                    case 'a': case 'A':
                    case 'e': case 'E':
                    case 'i': case 'I':
                    case 'o': case 'O':
                    case 'u': case 'U': vocales++;
                    }
                    
                    printf ("La línea contiene %d vocales. \n", vocales);
                } /* for interno */
        } /* for externo */
}