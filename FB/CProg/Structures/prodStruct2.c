#include <stdio.h>
struct Product
{
    int prodId;
    char prodName[50];
    double price;
    char mfgDate[11];
    char expDate[11];
};
void main()
{
    struct Product p1, p2, p3;
    printf("\nEnter Product Id:");
    scanf("%d", &p1.prodId);

    printf("\nEnter Product Name:");
    fflush(stdin);
    scanf("%s", p1.prodName);

    printf("\nEnter Product Price:");
    scanf("%lf", &p1.price);

    fflush(stdin);
    printf("\nEnter Product MFG in DD/MM/YYYY format:");
    fflush(stdin);
    scanf("%s", p1.mfgDate);

    printf("\nEnter Product EXP in DD/MM/YYYY format:");
    fflush(stdin);
    scanf("%s", p1.expDate);

    printf("\nProduct 1");
    printf("\nProd ID: %d", p1.prodId);
    printf("\nProd Name: %s", p1.prodName);
    printf("\nProd Price : %lf", p1.price);
    printf("\nProd MFG: %s", p1.mfgDate);
    printf("\nProd EXP: %s", p1.expDate);
}