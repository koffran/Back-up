#include "validarNumeros.h"

float validaDivision (float numero)
{
   while (numero == 0)
    {
    printf("ERROR!!! Ingrese un numero diferente a cero");
    scanf("%f",&numero);
    }
    return numero;
}


int validaFactorial (float numero)
{
    int i= numero;
    float resta = numero-i;

    while (resta != 0 || numero < 0)
    {

        printf("Error!!! Ingrese un numero entero positivo");
        scanf("%f", &numero);
        i = numero;
        resta = numero - i;
    }

    return i;
}

