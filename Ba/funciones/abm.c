#include "abm.h"
#include <stdio.h>

int obtenerEspacioLibre(eEstructura lista[],int tam)
{
    int i;
    int aux;

    for(i=0;i<tam;i++)
    {
        if (lista[i].estado==0)
        {
            aux = i;
        }
    }
    return aux;
}

int buscarPorEntero(eEstructura lista[],int dato, int tam)
{
    int i;

    for (i=0;i<tam;i++)
    {
        if (lista[i].estado==1 && lista[i].dato == dato)
        {
            printf("Este es el usuario\n%s\t%d\t%d\n",lista[i].vec,lista[i].dato2,lista[i].dato);
        }
    }
    return dato;
}

void borrar(eEstructura lista[], int tam, int dato)
{
    char rta;
    int i;
    for (i=0;i<tam;i++)
    {
        if (lista[i].estado==1 && lista[i].dato == dato)
        {
            printf("Desea eliminarlo? <s/n>\n");
            rta = getch();
            if (rta == 's')
            {
                lista[i].estado = 0;
            }
        }
    }
}

void alta (eEstructura lista[], int tam)
{
    int i;

    i =obtenerEspacioLibre(lista,tam);
    lista[i].estado =1;
    printf("Ingrese *******: ");
    fflush (stdin);
    gets (lista[i].vec);
    printf("Ingrese ****: ");
    scanf("%d", &lista[i].dato);
    printf("Ingrese *****: ");
    scanf ("%d", &lista[i].dato2);
}

void mostrar(eEstructura lista[],int tam)
{
    int i;

    for (i=0;i<tam;i++)
    {
      if (lista[i].estado == 1)
      {
        printf("NOMBRE\tEDAD\tDNI\n%s\t%d\t%d\n",lista[i].vec,lista[i].dato2,lista[i].dato);
      }
    }
}

void modificar(eEstructura lista[],int tam)
{
    int i;
    int dato;
    int opcion;

    printf("Ingrese el dato de la persona a modificar: ");
    scanf("%d",&dato);
    for (i=0;i<tam;i++)
    {
        if (lista[i].estado == 1 && lista[i].dato ==dato)
        {
            printf("Los datos son\n dato: %s\t dato: %d\t dato: %d\nCual es el dato que desea modificar?\n 1 - vector\n 2 - dato\n",lista[i].vec,lista[i].dato2,lista[i].dato);
            scanf("%d", &opcion);
            switch (opcion)
            {
            case 1:
                printf("Que nombre desea asignarle?");
                fflush(stdin);
                gets(lista[i].vec);
            break;
            case 2:
                printf("Que edad desea ingresar?");
                scanf("%d", &lista[i].dato);
            break;
            }
        }

    }

}
