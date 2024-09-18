#include <stdio.h>
#include <string.h>
// void getMYProduct(struct Product *);
// void showProduct(struct Product *);
struct Product
{
    int prodId;
    char prodName[50];
    double price;
    int mfgDate[3];
    int expDate[3];
};

void main()
{
    struct Product p[4];
    p[0].prodId = 1;
    strcpy(p[0].prodName, "Remote");
    p[0].price = 145.68;
    p[0].mfgDate[0] = 10;
    p[0].mfgDate[1] = 9;
    p[0].mfgDate[2] = 2016;
    p[0].expDate[0] = 10;
    p[0].expDate[1] = 9;
    p[0].expDate[2] = 2026;

    printf("\nProduc 1");
    printf("\nProd Id: %d", p[0].prodId);
    printf("\nProd Nam: %s", p[0].prodName);
    printf("\nProd Price: %lf", p[0].price);
    printf("\nMFG Date : %d/%d/%d", p[0].mfgDate[0], p[0].mfgDate[1], p[0].mfgDate[2]);
    printf("\nEXP Date : %d/%d/%d", p[0].expDate[0], p[0].expDate[1], p[0].expDate[2]);
    // getMYProduct(p);
    // showProduct(p);
}

// void getMYProduct(struct Product *p)
// {
//     for (int i = 1; i < 5; i++)
//     {
//         printf("\nEnter data for product %d", i + 1);
//         printf("\nEnter Product ID");
//         scanf("%d", p[i].prodId);
//         printf("\nEnter Product Name");
//         scanf("%s", p[i].prodName);
//         printf("\nEnter Product Price");
//         scanf("%lf", p[i].price);
//         printf("\nEnter Product MFG");
//         for (int j = 0; j < 3; j++)
//         {
//             if (j == 0)
//             {
//                 printf("\nEnter DD :");
//                 scanf("%d", p[i].mfgDate[j]);
//             }
//             else if (j == 1)
//             {
//                 printf("\nEnter MM :");
//                 scanf("%d", p[i].mfgDate[j]);
//             }
//             else if (j == 2)
//             {
//                 printf("\nEnter MM :");
//                 scanf("%d", p[i].mfgDate[j]);
//             }
//         }
//         printf("\nEnter Product EXP");
//         for (int j = 0; j < 3; j++)
//         {
//             if (j == 0)
//             {
//                 printf("\nEnter DD :");
//                 scanf("%d", p[i].expDate[j]);
//             }
//             else if (j == 1)
//             {
//                 printf("\nEnter MM :");
//                 scanf("%d", p[i].expDate[j]);
//             }
//             else if (j == 2)
//             {
//                 printf("\nEnter MM :");
//                 scanf("%d", p[i].expDate[j]);
//             }
//         }
//     }
// }

// void showProduct(struct Product *p)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         printf("\nProd Id: %d", p[i].prodId);
//         printf("\nProd Name: %s", p[i].prodName);
//         printf("\nProd Name: %lf", p[i].price);
//         printf("\nMFG Date:");
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d", p[i].mfgDate[j]);
//         }
//         printf("\nEXP Date:");
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d", p[i].expDate[j]);
//         }
//     }
// }