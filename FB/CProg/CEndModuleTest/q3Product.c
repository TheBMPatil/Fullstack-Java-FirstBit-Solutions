#include <stdio.h>
#include <stdlib.h>
int size = 5, index = 0;
typedef struct Product
{
    int id;
    char name[20];
    float price;
} Product;
void getProducts(Product *p, int usize)
{
    for (int i = 0; i < usize; i++, index++)
    {
        printf("\nEnter Product ID :");
        scanf("%d", &p[index].id);
        printf("\nEnter Product Name :");
        fflush(stdin);
        gets(p[index].name);
        printf("\nEnter Product Price :");
        scanf("%f", &p[index].price);
    }
}
void showProducts(Product *p)
{
    for (int i = 0; i < index; i++)
    {
        printf("\nProduct ID :%d", p[i].id);
        printf("\nProduct Name :%s", p[i].name);
        printf("\nProduct Price :%.2f", p[i].price);
    }
}
Product *addDiscount(Product *p)
{
    Product *tempd = (Product *)malloc(sizeof(Product) * index);

    for (int i = 0; i < index; i++)
        tempd[i] = p[i];

    for (int i = 0; i < index; i++)
    {

        if (p[i].price > 500)
        {
            tempd[i].price = p[i].price - (p[i].price * 0.20);
            // printf("\nProduct Price With Discount 20%% is:%.2f", p[i].price);
        }

        return tempd;
    }
}

Product *addGST(Product *p)
{
    Product *temp = (Product *)malloc(sizeof(Product) * index);

    for (int i = 0; i < index; i++)
    {
        temp[i] = p[i];
        temp[i].price = p[i].price + (p[i].price * 0.18);
    }
    return temp;
}
void displayBill(Product *p)
{
    Product *temp;
    temp = addGST(p);
    for (int i = 0; i < index; i++)
        p[i] = temp[i];

    temp = addDiscount(p);
    for (int i = 0; i < index; i++)
        p[i] = temp[i];

    float totalAmount;
    printf("\n\tFinal Bill :");
    for (int i = 0; i < index; i++)
    {
        printf("\nProduct %d", i + 1);
        printf("\nProduct ID :%d", p[i].id);
        printf("\nProduct Name :%s", p[i].name);
        printf("\nProduct Price :%.2f", p[i].price);
        totalAmount += p[i].price;
    }
    printf("\n\tTotal Bill : %.4f\n", totalAmount);
}
void main()
{
    int sUser;
    Product *prod = (Product *)malloc(sizeof(Product) * size);
    int ch;
    do
    {
        Product *temp;
        printf("\nEnter Your Choice.\n1)Add Products \t2) Display All products \t3) Add GST to each product \t4) Add Discounts to products \n5) Print Final Bill\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter How many products do you want to add : ");
            scanf("%d", &sUser);
            if (sUser > size)
            {
                size = sUser;
                temp = (Product *)realloc(prod, sizeof(Product) * size);
                if (temp == NULL)
                {
                    printf("\n\nReallocation Failed");
                    return; /* code */
                }
                else
                {
                    prod = temp;
                }
            }

            getProducts(prod, sUser);
            break;
        case 2:
            showProducts(prod);
            break;
        case 3:
            temp = addGST(prod);
            showProducts(temp);
            // free(temp);
            break;
        case 4:
            temp = addDiscount(prod);
            showProducts(temp);
            //
            break;
        case 5:
            displayBill(prod);
            break;
        case 0:
            printf("\nExiting....");
            free(temp);
            free(prod);
            break;
        default:
            printf("\nInvalid Choice!!");
            break;
        }
    } while (ch != 0);
}
