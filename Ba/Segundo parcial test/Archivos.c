 #include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
FILE* generarBinario (char path[])
{
    FILE* archivo = fopen(path,"rb");
    if (archivo == NULL)
    {
        archivo = fopen (path,"wb");
        if (archivo == NULL)
        {
            printf ("No se pudo generar el archivo");
        }
    }
    return archivo;
}

int guardarEnBinario(ArrayList* lista, char* path)
{
    int returnAux=-1;
    FILE* archivo;
    archivo = fopen (path,"wb");
    if (archivo != NULL)
    {
        fwrite(lista,sizeof(ArrayList),1,archivo);
        fclose(archivo);
        returnAux=0;
    }
    return returnAux;
}

ArrayList* leerDesdeArchivo (char* path)
{
    ArrayList* lista = al_newArrayList();
    FILE* archivo;
    archivo = fopen (path,"rb");
    fread(lista,sizeof(ArrayList),1,archivo);
    fclose(archivo);

    return lista;
}
