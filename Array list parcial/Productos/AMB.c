#include <stdio.h>
#include <stdlib.h>
#include "AMB.h"
#include "funciones.h"
#include  "ArrayList.h"



int menu(int limiteInf, int limiteSup)
{
    int opcion;

    system("cls");
    printf("----------ABM----------");
    opcion = recibeIntRango("\n1 - Alta\n2 - Baja\n3 -Baja Fisica\n4 - Modificar \n5 - Listar\n6 - Salir\n\nOpcion: ","\nNo ha ingresado un valor permitido. Reingrese\n\nOpcion: ",limiteInf,limiteSup);

    return opcion;
}
Eproducto* alta_producto()
{
    Eproducto *producto = (Eproducto*)malloc(sizeof(Eproducto));


    producto->codigo= recibeStringANumeroRango("\nIngrese el codigo del producto (1 a 50): ", "\nNo ha ingresado un valor numerico. Reingrese", 1, 50);

    while(recibeStringLetras("\nIngrese la Descripcion del producto: ", producto->descripcion) == 0)
    {
        printf("\nLa Descripcion solo debe contener letras. Reingrese\n");
        recibeChar("\nEnter para continuar");
        continue;
    }
    producto->importe = recibeStringANumeroRangoFloat("\nIngrese el Importe del producto: ","\nNo ha ingresado un valor permitido. Reingrese",1,100);
    recibeChar("\nEnter para continuar");
   // producto->cantidad=recibeStringNumeroRango("\nIngrese la Cantidad de Productos(1 a 100):","\nNo ha ingresado ningun valor numerico.Reingrese",1,100);
    //producto->estado=1;

    return producto;
}

void listar_producto(ArrayList *this){
    int i;

    for(i=0; i<this->size; i++)
    {
        listar(this->pElements[i]);
    }
    recibeChar("\nEnter para continuar");
}

void listar(Eproducto *producto){
    printf("\nCodigo: %d - Descripcion: %s - Importe: %.02f",producto->codigo,producto->descripcion,producto->importe);
}

int bajaFisica_producto(ArrayList *this){
    int auxCod;
    int i;
    int auxReturn = 0;
    Eproducto *auxProducto;


    auxCod = recibeIntRango("\nIngrese el Codigo buscado","\nNo ha ingresado un Codigo valido. Reingrese",1,50);
    for(i=0; i<this->size; i++)
    {
        auxProducto = al_get(this,i);

        if(auxProducto->codigo = auxCod){
            al_remove(this,i);
            auxReturn = 1;
            break;
        }
    }

    recibeChar("\nEnter para continuar");
    return auxReturn;
}


void copiar(ArrayList *this){
    FILE *ARCH;
    Eproducto *pProducto;
    int flag = 0;
    int cant;

    ARCH = fopen("archivo.csv","r");
    if(ARCH == NULL)
    {
        ARCH = fopen("archivo.csv","w");
        flag = 1;
    }
    if(flag == 0)
    {
        while(!feof(ARCH))
        {
            pProducto = new_producto();
            fflush(stdin);
            cant = fread(pProducto,sizeof(Eproducto),1,ARCH);

            if(cant != 1){
                if(feof(ARCH)){
                    break;
                }
                else{
                    printf("\nError");
                }
            }

            fflush(stdin);
            al_add(this,pProducto);
        }
    }
    recibeChar("\nTermino la copia");
    fclose(ARCH);
}

void guardar(ArrayList *this){
    FILE *ARCH;
    Eproducto *producto = malloc(sizeof(Eproducto));
    int i;

    ARCH = fopen("archivo.csv","w+");
    if(ARCH == NULL){
        printf("\nError al abrir el archivo");
    }
    else{
        for(i=0; i<this->size; i++) {
            producto = al_get(this,i);
            printf("\nCodigo: %d - Descripcion: %s - Importe: %f",producto->codigo,producto->descripcion,producto->importe);
            fwrite(producto,sizeof(Eproducto),1,ARCH);
        }
    }
    printf("\nTermino el guardado");
    fclose(ARCH);

}

Eproducto * new_producto()
{
    Eproducto *producto;
    producto = (Eproducto*)malloc(sizeof(Eproducto));

    return producto;
}

void modificar_producto(ArrayList *this){
    int auxCod,auxIndex,opcion;
    int i;
    Eproducto *auxProducto = new_producto();

    printf("----------Modificacion----------");

    listar_producto(this);

    auxCod = recibeStringANumeroRango("\nIngrese el Codigo del usuario cuyos datos desea modificar: ", "\nNo ha ingresado un valor numerico. Reingrese: ", 1, 50);
    for(i=0; i<this->size; i++)
    {
        auxProducto = al_get(this,i);

        if(auxProducto->codigo = auxCod){
            while(opcion != 4){
                opcion = recibeIntRango("\n1 - Codigo\n2 - Descripcion\n3 - Importe\n4 - Salir\n\nOpcion: ","\nNo ha ingresado un valor permitido. Reingrese\n\nOpcion: ",1,4);

                switch(opcion){
                case 1:
                    auxProducto->codigo = recibeStringANumeroRango("\nIngrese el Codigo del producto (1 a 50): ", "\nNo ha ingresado un valor numerico. Reingrese", 1, 50);
                    break;

                case 2:
                    break;

                case 3:
                    break;

                case 4:
                    break;
                }
            }
        }
    }
}
