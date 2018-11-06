#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaciones.h"
int validaRango(char mensaje[], char error [], int min, int max)
{
    int auxiliar;
    printf("%s", mensaje);
    scanf("%d", &auxiliar);
    if(auxiliar < min || auxiliar > max)
    {
        printf("%s", error);
        scanf("%d", &auxiliar);
    }
    return auxiliar;
}

float validaPositivo(char mensaje[])
{
    float auxiliar;
    printf("%s", mensaje);
    scanf("%f", &auxiliar);
    if(auxiliar < 0)
    {
        printf("Error  Ingrese un numero mayor a cero");
        scanf("%f", &auxiliar);
    }
    return auxiliar;
}
