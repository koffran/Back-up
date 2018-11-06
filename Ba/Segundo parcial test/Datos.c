#include <stdio.h>
#include <stdlib.h>
#include "Datos.h"
#include "validaciones.h"

int menu(char mensaje [], char error [], int limiteInf, int limiteSup)
{
    int opcion;

    system("cls");
    opcion = validaRango(mensaje,error,limiteInf,limiteSup);

    return opcion;
}

void listar(ArrayList* lista)
{
    int i;
    for (i=0;i<lista->size;i++)
    {
        mostrarProducto(lista->pElements[i]);
    }
}

void mostrarProducto (eProducto* producto)
{
    printf("Codigo: %d--- Descripcion: %s----- Importe: %.2f\n", producto->codigo,producto->descripcion,producto->importe);
}

eProducto* alta_producto()
{
    eProducto* producto = (eProducto*)malloc(sizeof(eProducto));
    char auxDesc [51];
    float auxImporte;

    //codigo
    producto->codigo= validaRango("\nIngrese el codigo del producto (1 a 1000): ", "\nNo ha ingresado un numero valido. Reingrese: ", 1, 1000);
    //descripcion
    printf("Ingrese la decripcion: ");
    fflush(stdin);
    gets (auxDesc);
    strcpy(producto->descripcion,auxDesc);
    //importe
    producto->importe = validaPositivo("Ingrese el importe: ");
    //cantidad
    producto->cantidad = validaPositivo("Ingrese la cantidad");

    producto->activo = 0;

    return producto;
}

int buscarIndice (ArrayList* lista)
{
    int aux;
    int i,j;
    eProducto* producto;
    printf("Seleccione un producto ingresando su codigo:\n ");
    listar(lista);
    scanf("%d",&aux);

    for (i=0;i<lista->size;i++)
    {
        producto = compararCodigo(lista->pElements[i],aux);
        return i;
    }
}

int compararCodigo (eProducto* productoA,int codigo)
{
    int retorno= NULL;
    if (productoA->codigo == codigo)
    {
        retorno = productoA;
    }
    return retorno;
}

void modificarProducto (eProducto* producto)
{
    int opcion;
    char auxDesc [51];
    char cierre = 'n';
   do
   {
       opcion = menu("\nQue desea modificar? \n 1- Descripcion\n2- Importe\n3- Cantidad\n4- Salir","\nNo ha ingresado un valor permitido. Reingrese\n\nOpcion:",1,4);
       switch (opcion)
       {
       case 1:
            printf("Ingrese la nueva descripcion: ");
            fflush(stdin);
            gets (auxDesc);
            strcpy(producto->descripcion,auxDesc);
            system("Pause");
            break;
       case 2:
            producto->importe = validaPositivo("Ingrese el nuevo importe: ");
            system ("Pause");
            break;
       case 3:
            producto->cantidad = validaPositivo("Ingrese la nueva cantidad");
            system ("Pause");
            break;
       case 4:
           cierre = 'n';
       }
   }while (cierre != 'n');
}
