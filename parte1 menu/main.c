#include <stdio.h>
#include <string.h>

void main()
{
    int opc;
    int n1, n2, n3;
    do
    {
        printf("1.  Introduccion Del Pedido\n");
        printf("2.  Factura\n");
        printf("3.  Añadir Nuevo Item Al Almacen\n");
        printf("4.  Exit\n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            printf("Cosas del menu 1\n ");
            scanf("%d", &n1);
            break;

        case 2:
            printf("Cosas del menu 2\n ");
            scanf("%d", &n2);
            break;
        case 3:
            printf("Cosas del menu 3\n ");
            scanf("%d", &n3);
            break;
        case 4:
            printf("Exit\n ");
            break;

        default:
            printf("No bueno\n ");
            break;
        }
    } while (opc != 4);
}