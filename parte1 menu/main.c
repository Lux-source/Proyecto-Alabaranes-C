#include <stdio.h>
#include <string.h>

struct item
{
    char descripcion[151]; // 150 caracteres, sin incluir el último
    float precio;
    int stock;
};
typedef struct item Item;

// Funcion añadir items

Item addItem()
{
    Item objeto1;

    printf("Introduce new item description:\n");
    fgetc(stdin);
    fgets(objeto1.descripcion, 151, stdin);

    printf("Introduce new item price:\n");

    scanf("%f", &objeto1.precio);

    printf("Introduce number of available new items:\n");

    scanf("%d", &objeto1.stock);

    printf("DESCRIPCIÓN\t%s\nPRECIO\t%.2f\nUnidades\t%d\n", objeto1.descripcion, objeto1.precio, objeto1.stock);

    return objeto1;
};

void main()
{

    int opc, opc2;
    int n1, n2, n3;

    // Inicializacion items almacen

    Item item1 = {"Carpenter's hammer with fibreglass handle", 4.88, 50};
    Item item2 = {"Rubber mallet", 8.22, 4};
    Item item3 = {"Combination spanner set", 11.99, 10};
    Item item4 = {"Adjustable spanner with screw", 5.54, 12};
    Item item5 = {"Allen key set", 6.95, 20};
    Item item6 = {"Socket spanner set", 21.99, 10};
    Item item7 = {"Precision screwdriver set", 18.46, 15};
    Item item8 = {"Strippling pliers", 5.99, 3};
    Item item9 = {"Universal pliers", 5.63, 12};
    Item item10 = {"Pocket digital multimeter", 18.3, 7};
    Item item11 = {"Multifunction digital multimeter", 32.00, 12};

    // Creacion del almacen

    Item almacen[15] = {item1, item2, item3, item4, item5, item6, item7, item8, item9, item10, item11};
    int n = sizeof(almacen) / sizeof(almacen[0]);
    int num = 11;

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
            break;

        case 2:
            printf("Cosas del menu 2\n ");
            break;
        case 3:
            printf("Añadir nuevo item al almacen\n");
            do
            {
                printf("Numero de items actual: %d\n", num);
                printf("\n\t[1] Add item\n");
                printf("\t[0] Exit\n");
                scanf("%d", &opc2);
                switch (opc2)
                {
                case 1:
                    almacen[num] = addItem();
                    num++;
                    break;
                case 0:

                    break;

                default:
                    break;
                }

            } while (opc2 != 0 && num < 15);
            printf("\nYa no se pueden añadir más items al almacen");
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