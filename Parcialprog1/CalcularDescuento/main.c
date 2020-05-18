#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libPrimerParcialProg1.h"

int main()
{
    int precio;
    int rtaDescuento;

    printf("Ingrse el precio del producto: ");
    scanf("%d", &precio);

    rtaDescuento = aplicarDescuento(precio, DES);

    system("cls");

    printf("El precio final con descuento es: %d\n\n", rtaDescuento);

    return 0;
}

int aplicarDescuento(int valor, int descuento)
{
    int total;
    int respuesta;

    total = valor * descuento /  100;

    respuesta = valor - total;
}
