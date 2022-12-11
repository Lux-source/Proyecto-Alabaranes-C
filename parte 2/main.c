#include <stdio.h>
#include <string.h>

struct invoice
{
    char description[151];
    int quantity;
    float price;
    float amount;
    float total;
};

int main(void)
{
    struct invoice item1 = {"Rubber", 4, 5.6, item1.amount = item1.quantity * item1.price, 3.4};

    printf("--------------------------------------------------------------------------------\n \t\t\t INVOICE - WAREHOUSE ALBACETE\n");
    printf("--------------------------------------------------------------------------------\nDESCRIPTION           QUANTITY      PRICE          AMOUNT\n");
    printf("%-12s\t         %d\t     %.2f\t    %.2f\t\n    ", item1.description, item1.quantity, item1.price, item1.amount);
    printf("TOTAL: %.2f", item1.total);
}