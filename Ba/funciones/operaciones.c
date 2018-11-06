#include <stdio.h>
#include "operaciones.h"

float sumar(float num1, float num2)
{
    float resultado;
    resultado = num1 + num2;

    return resultado;
}

float restar(float num1, float num2)
{
    float resultado;
    resultado = num1 - num2;

    return resultado;
}

float dividir(float num1, float num2)
{
    float resultado;

    resultado = num1 / num2;

    return resultado;
}

float multiplicar(float num1, float num2)
{
    float resultado;

    resultado = num1 * num2;

    return resultado;
}

long long int  factorial (int num)
{
    long long int acumulador = 1;
    int i;

    for (i=num;i>0;i--)
    {
        acumulador  = acumulador * i;
    }

    return acumulador;
}

