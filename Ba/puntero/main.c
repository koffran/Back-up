#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getDynamicString (char* msg);
int main()
{
    /*int num = 0;
    int* puntero;
    puntero = &num;

    *puntero = 5;

    printf("EL NUMERO ES %d",num);*/

    char* puntero = getDynamicString("ingrese texto: ");
    printf ("El texto ingresado es: %s",puntero);
    free(puntero);



    return 0;
}

char* getDynamicString (char* msg)
{
    printf (msg);
    char* cadena;
    int len;

    cadena = (char*) malloc(sizeof(char)*1024);
    scanf("%1023s",cadena);
    len = strlen(cadena);

    cadena = (char*) realloc(cadena,sizeof(char)*(len+1));
    return cadena;
}
