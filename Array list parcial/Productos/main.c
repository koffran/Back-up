#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include  "ArrayList.h"

int main()
{
    ArrayList *this = al_newArrayList();
    int opcion = 0;

    copiar(this);
    while( opcion != 5)
    {
        opcion = menu(1,5);
        system("cls");

        switch(opcion)
        {
        case 1:
            al_add(this,alta_producto());
            break;

        case 2:
           /* if(baja_producto(this) == 1){
                printf("\nSe dio de baja correctamente");
                recibeChar("\nEnter para continuar");}
            else{
                printf("\nEl id ingresado no fue dado de alta");
                recibeChar("\nEnter para continuar");
            }*/
            break;

        case 3:
            if(bajaFisica_producto(this)==1){
                printf("\n se dio de baja correctamente:");
                recibeChar("\nEnter para continuar");
            }else{
              printf("El id Ingresado no fue dado de alta:");
              recibeChar("\nEnter para continuar");
            }

            break;

        case 4:
            modificar_producto(this);

            break;

        case 5:
            listar_producto(this);
            break;
        }
    }
}
