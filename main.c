// Parte 3 del trabajo
// Introduction of a new item for sale
// Permitirá la introducción de nuevos objetos en el almacén

// Para esto una descripción de hasta 150 caracteres, su precio y el número de items disponibles
// serán pedidos
// Ten en cuenta que sólo pueden pedirse 15 objetos diferentes en el almacén, ya que no hay espacio pa mas

// Si está lleno debe reportarse que no es posible introducir nuevos items

#include <stdio.h>
#include <string.h>

int items = 0;
int menu;
int num = 13;

struct item
{
    char descripcionObjeto[151]; // 150 caracteres, sin incluir el último
    float precio;
    int numeroItemsDisponibles;
};

void main()
{
    do
    {
        struct item objeto1;

        printf("Introduce new item description: \n");

        // scanf("%s", objeto1.descripcionObjeto);
        fgets(objeto1.descripcionObjeto, 151, stdin);

        printf("Introduce new item price: \n");

        scanf("%f", &objeto1.precio);

        printf("Introduce number of available new items: \n");

        scanf("%d", &objeto1.numeroItemsDisponibles);

        printf("%s %.2f %d", objeto1.descripcionObjeto, objeto1.precio, objeto1.numeroItemsDisponibles);

        num++;

    } while (num < 15);

    // printf("%d", num);
    // Restriccion de 15 objetos totales en el almacen
}