
typedef struct {

    char vec[50];
    int dato;
    int estado;
    int dato2;

}eEstructura;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @param el tamaño del array.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(eEstructura lista[], int tam);

/**
 * Obtiene el indice que coincide con el dato pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param el dato a ser buscado en el array.
 * @param el tamaño del array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dato
 */
int buscarPorEntero(eEstructura lista[], int , int tam);

/** \brief Elimina la seleccion de la lista
 *
 * \param Lista el array.
 * \param tamaño del array
 * \param el dato de la persona a borrar
 */
void borrar(eEstructura lista[], int tam, int dato);

/** \brief Pide los datos
 *
 * \param array
 * \param el tamaño del array
 *
 */
void alta (eEstructura lista[], int);

/** \brief imprime el listado de personas
 *
 * \param array de personas
 * \param tamaño del array
 *
 */
void mostrar(eEstructura lista[],int);

/** \brief presenta un grafico de barras que separa por franja etaria
 *
 * \param array de personas
 * \param tamaño del array
 *
 */
void mostrarGrafico (eEstructura lista[],int tam);

/** \brief Ordena en orden alfabetico los nombres
 *
 * \param array de personas
 * \param tamaño del array
 *
 */

void Ordenar(int arr[], int tam)

void modificar(eEstructura lista[],int tam);



