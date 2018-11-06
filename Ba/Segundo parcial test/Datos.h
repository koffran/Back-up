#include "ArrayList.h"
typedef struct
{
    int codigo;//1-1000
    char descripcion [51];
    float importe;
    int cantidad;
    int activo;//0 para activo -1 para NO activo
}eProducto;


int menu(char[],char[],int,int);
void mostrarProducto (eProducto* );
void listar(ArrayList* );
void modificarProducto (eProducto*);
