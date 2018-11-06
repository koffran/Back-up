#include <stdio.h>
#include <stdlib.h>
#include "Datos.h"
#include "ArrayList.h"

int main()
{
    ArrayList* lista = al_newArrayList();
    ArrayList* auxList = al_newArrayList();
    eProducto* producto;
    eProducto* auxProducto;
    FILE* datos = generarBinario("datos.dat");
    FILE* temporal = generarBinario("temporal.dat");

    int opcion;
    int indice;
    int indiceReal;
    char rta = 's';

    while (rta == 's')
    {
       opcion = menu ("\n1 - Alta\n2 - Baja\n3 -Baja Fisica\n4 - Modificar \n5 - Listar\n6 - Salir\n\nOpcion: ","\nNo ha ingresado un valor permitido. Reingrese\n\nOpcion: ",1,6);
        system ("cls");
        switch(opcion)
        {
        case 1:
            producto = alta_producto();
            al_add(lista,producto);
            guardarEnBinario(lista,"datos.dat");
            system ("Pause");
            break;
        case 2:

            system ("Pause");
            break;
        case 3:

            system ("Pause");
            break;
        case 4:
            indice = buscarIndice(lista);
            auxProducto=al_get(lista,indice);
            printf("El producto seleccionado es: \n");
            mostrarProducto(auxProducto);
            printf("Desea modificarlo? <s-n>");
            if (rta == 's')
            {
                modificarProducto (auxProducto);
            }
            al_add(lista->pElements+indice,auxProducto);
            system ("Pause");
            break;
        case 5:
            auxList = leerDesdeArchivo ("datos.dat");
            listar(auxList);
            system ("Pause");
            break;
        case 6:
            rta = 'n';
            break;
        }
    }

    return 0;
}
