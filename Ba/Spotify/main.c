#include <stdio.h>
#include <stdlib.h>
#define TC 7
#define TI 5

typedef struct
{
    int idCancion;
    int interprete;
    char titulo [50];
    int duracion;
}eCancion;

typedef struct
{
    int idInterprete;
    char nombre [50];
    char nacionalidad [50];
}eInterprete;

void inicializarCancion (eCancion lista[],int tam);
void inicializarInterprete (eInterprete lista[],int tam);

void listarCanciones (eCancion lista[],int tam);
void listarInterpretes (eInterprete lista[],int tam);

int main()
{
    eCancion listaCanciones [TC];
    eInterprete listaInterpretes [TI];

    inicializarCancion(listaCanciones,TC);
    inicializarInterprete(listaInterpretes,TI);
    int i;
    eCancion aux[][50];

    for (i=0;i<TC;i++)
    {
        if (listaCanciones[i].interprete == listaInterpretes[i].idInterprete)
        {
            strcpy
        }
    }


    listarCanciones (listaCanciones,TC);
    listarInterpretes (listaInterpretes,TI);

    return 0;
}

void inicializarCancion (eCancion lista[],int tam)
{
    int i;
    int id [] = {1,2,3,4,5,6,7};
    char titulo [][30] = {"Escape","Hotel California","Bohemian Rhapsody","Cocaine","Smooth criminal","Of wolf and man","Brighton rock"};
    int interprete [] = {10,11,12,13,14,10,12};
    int duracion []= {3,4,7,4,9,5,4};

    for (i=0;i<tam;i++)
    {
        lista[i].idCancion = id[i];
        strcpy (lista[i].titulo, titulo[i]);
        lista[i].duracion = duracion [i];
        lista[i].interprete = interprete[i];
    }

}

void inicializarInterprete (eInterprete lista[],int tam)
{
    int i;
    int id [] = {10,11,12,13,14};
    char nombre [][50] = {"Metallica","The eagles","Queen","Eric Clapton","Michael Jackson"};
    char nacionalidad [][30] = {"Estadounidense","Estadounidense","Britanica","Britanica","Estadounidense"};

    for (i=0;i<tam;i++)
    {
        lista[i].idInterprete = id[i];
        strcpy (lista[i].nombre, nombre[i]);
        strcpy (lista[i].nacionalidad, nacionalidad[i]);
    }

}

void listarCanciones (eCancion lista[],int tam)
{
    int i;
    printf("Canciones:\n");

    for (i=0;i<tam;i++)
    {
        printf("%d---%s---%d minutos---%d interprete\n",lista[i].idCancion,lista[i].titulo,lista[i].duracion,lista[i].interprete);
    }
}

void listarInterpretes (eInterprete lista[],int tam)
{
    int i;
    printf("Interpretes:\n");

    for (i=0;i<tam;i++)
    {
        printf("%d---%s---%s\n",lista[i].idInterprete,lista[i].nombre,lista[i].nacionalidad);
    }
}
