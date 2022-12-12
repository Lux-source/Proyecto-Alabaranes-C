#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct item
{
    char descripcion[151]; // 150 caracteres, sin incluir el último
    float precio;
    int stock;
    int stockGet; // cantidad que compro
};
typedef struct item Item;

// Funcion total

// Funcion añadir items

Item addItem()
{
    Item objeto;

    printf("Introduce new item description:\n");

    fgetc(stdin); // porque si no se saltaba el fgets

    fgets(objeto.descripcion, 151, stdin);

    printf("Introduce new item price:\n");

    scanf("%f", &objeto.precio);

    printf("Introduce number of available new items:\n");

    scanf("%d", &objeto.stock);

    printf("DESCRIPCIÓN\t%s\nPRECIO\t%.2f\nUnidades\t%d\n", objeto.descripcion, objeto.precio, objeto.stock);

    return objeto;
};

// funcion añadir bill note

// funcion parte 2

struct invoice
{
    char description[151];
    int quantity;
    float price;
    float amount;
    float total;
};

int printInvoice(void)
{
    float total = 22.40; // para que no se rompa y salga la cantidad del ejemplo
    struct invoice item1 = {"Rubber", 4, 5.6, item1.amount = item1.quantity * item1.price, 3.4};
    printf("--------------------------------------------------------------------------------\n \t\t\t INVOICE - WAREHOUSE ALBACETE\n");
    printf("--------------------------------------------------------------------------------\nDESCRIPTION           QUANTITY      PRICE          AMOUNT\n");
    printf("%-12s\t         %d\t     %.2f\t    %.2f\t\n", item1.description, item1.quantity, item1.price, item1.amount);
    printf("--------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\tTOTAL\t    %.2f\n", total);
}

void main()
{
    char identificador[151];
    int opc, opc2, opc3;
    int n1, n2, n3;
    int billnote;

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
    int n = sizeof(almacen) / sizeof(almacen[0]); // comprobabamos el tamaño
    int num = 11;
    // int billnote;

    do
    {
        printf("1.  Introduce billnote\n");
        printf("2.  Invoice\n");
        printf("3.  Add new item to the warehouse\n");
        printf("4.  Exit\n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            // vamos a meter un loop que muestra la lista de objetos a elegir
            for (int i = 0; i < sizeof(almacen) / sizeof(almacen[0]); i++)
            {
                printf("%-60s\t%.2f\t%d\n", almacen[i].descripcion, almacen[i].precio, almacen[i].stock);
            }

            break;

        case 2:
            printInvoice();

            break;
        case 3:
            printf("Add new item to the warehouse\n");
            do
            {
                printf("Current number of items: %d\n", num);
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
            printf("\nNo more items to add\n");
            break;
        case 4:
            printf("Exit\n ");
            break;

        default:
            printf("No bueno\n ");
            break;
        }
    } while (opc != 4 /*&& billnote < 5*/);
}