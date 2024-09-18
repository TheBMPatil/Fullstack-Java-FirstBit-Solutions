#include <stdio.h>
#include <string.h>
// Product ( ID, quantiy)
typedef struct Product
{
    int ID;
    int quantiy;
    int price;
    char name[20];
} Product;

void storeProduct(Product *prod, int *idx)
{
    printf("\nEnter ID:");
    scanf("%d", &prod[*idx].ID);
    printf("\nEnter Name of product:");
    fflush(stdin);
    gets(prod[*idx].name);
    printf("\nEnter quantiy:");
    scanf("%d", &prod[*idx].quantiy);
    printf("\nEnter Price:");
    scanf("%d", &prod[*idx].price);
}

void displayProduct(Product *prod, int *idx)
{
    printf("\n Entered data");
    for (int i = 0; i < *idx; i++)
    {
        printf("\n");
        printf("\nID: %d", prod[i].ID);
        printf("\nName: %s", prod[i].name);
        printf("\nQuantiy: %d", prod[i].quantiy);
        printf("\nPrice: %d", prod[i].price);
    }
}

Product storeByVal()
{
    Product temp;

    printf("\nEnter ID:");
    scanf("%d", &temp.ID);
    printf("\nEnter Name of product:");
    fflush(stdin);
    gets(temp.name);
    printf("\nEnter quantiy:");
    scanf("%d", &temp.quantiy);
    printf("\nEnter Price:");
    scanf("%d", &temp.price);

    return temp;
}

void printByVal(Product p)
{
    printf("\nID: %d", p.ID);
    printf("\nName: %s", p.name);
    printf("\nQuantiy: %d", p.quantiy);
    printf("\nPrice: %d", p.price);
}

int searchByAddress(Product *p, int key, int *max)
{
    for (int i = 0; i < *max; i++)
    {
        if (p[i].ID == key)
        {
            return i;
        }
    }
    return -1;
}

void printByAddr(Product *p)
{
    printf("\nID: %d", p->ID);
    printf("\nName: %s", p->name);
    printf("\nQuantiy: %d", p->quantiy);
    printf("\nPrice: %d", p->price);
}

void main()
{
    Product p1;
    p1 = storeByVal();
    printByVal(p1);

    Product s[10];
    int idx = 0;
    printf("\nHow many Products do you want to Store : ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++, idx++)
    {
        storeProduct(s, &idx);
    }
    displayProduct(s, &idx);

    int srchId;
    printf("\nEnter product id you want to search: ");
    scanf("%d", &srchId);
    int x = searchByAddress(s, srchId, &idx);
    printByAddr(&s[x]);
}
