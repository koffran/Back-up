#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 9;
    int* punteroA;
    punteroA = numero;
    printf("%p", &numero);
    if (punteroA == 0060FF08)
    {
        printf("si");
    }
    return 0;
}
