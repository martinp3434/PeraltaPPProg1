#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreriaCantPalabras.h"

int main()
{
    char cadena[TAM];
    int rtaContarcaacteres;

    printf("Ingrese una palabra: \n\n");
    fflush(stdin);
    gets(cadena);

    rtaContarcaacteres = contarCaracteres(cadena, TAM);

    printf("La cantidad de caracteres es: %d\n\n", rtaContarcaacteres);

    return 0;
}

int contarCaracteres(char c1[], int tam)
{
    int contador = 0;

    for(int i=0; i<tam; i++)
    {
        if (c1[i] != '\0')
        {
            contador = contador + 1;
        }
        else
        {
            break;

        }
    }
    return contador;
}
