#include "ArrayList.h"
typedef struct{
    int codigo;
    char descripcion[51];
    float importe;
    int cantidad;
    int estado;
}Eproducto;

Eproducto* alta_producto();
int baja_producto(ArrayList *this);
int bajaFisica_producto(ArrayList *this);
void listar_producto(ArrayList *this);
void listar(Eproducto *this);
void copiar(ArrayList *this);
void guardar(ArrayList *this);
Eproducto * new_producto();
int menu(int limiteInf, int limiteSup);
void modificar_producto(ArrayList *this);


