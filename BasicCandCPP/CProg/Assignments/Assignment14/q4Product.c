// 4. Point of Sale System: Build a simple point of sale system using structures to represent products with attributes like name, price, and quantity. Allow users to add items to a cart and calculate the total cost.
#include <stdio.h>
#include <string.h>

typedef struct Product
{
    int id;
    char name[20];
    float price;
    int quantity;
} Product;

// All Products
void hardCodedProducts(Product *product)
{
    product[0] = (Product){1, "Laptop", 65000.00, 10};
    product[1] = (Product){2, "Smartphone", 35000.00, 20};
    product[2] = (Product){3, "Tablet", 20000.00, 15};
    product[3] = (Product){4, "Headphones", 5000.00, 30};
    product[4] = (Product){5, "Keyboard", 2000.00, 50};
    product[5] = (Product){6, "Mouse", 1000.00, 100};
    product[6] = (Product){7, "Monitor", 15000.00, 8};
    product[7] = (Product){8, "Printer", 10000.00, 12};
    product[8] = (Product){9, "Webcam", 2000.00, 25};
    product[9] = (Product){10, "Microphone", 3000.00, 40};
    product[10] = (Product){11, "Speaker", 5000.00, 35};
    product[11] = (Product){12, "Hard Drive", 8000.00, 20};
    product[12] = (Product){13, "RAM", 5000.00, 50};
    product[13] = (Product){14, "Power Supply", 3000.00, 40};
    product[14] = (Product){15, "SD Card", 1000.00, 100};
}

// Display One Product
void showOneProduct(Product *product)
{
    printf("\n-----------------------------------");
    printf("\n| Product Id : %-18d |", product->id);
    printf("\n| Product Name : %-16s |", product->name);
    printf("\n| Product Price : %-15.2f |", product->price);
    printf("\n| Available quantity : %-10d |", product->quantity);
    printf("\n-----------------------------------");
}

// Display All Products
void showRoom(Product *product)
{
    for (int i = 0; i < 15; i++)
    {
        printf("\n\tProduct No : %d ", i + 1);
        showOneProduct(&product[i]);
    }
}

// Search Product
int searchProduct(Product *product, char prodName[20])
{
    for (int i = 0; i < 15; i++)
    {
        if (strcmp(product[i].name, prodName) == 0)
        {
            return i;
        }
    }
    return -1;
}

// Add To Cart
typedef struct Bill
{
    int id;
    char name[20];
    int quantity;
    float price;
} Bill;

// Add to cart
int addTOCart(Product *product, Bill *bill)
{
    printf("\nEnter Name of Product You want to add in your cart :");
    char prodName[20];
    int qty = 0;
    fflush(stdin);
    gets(prodName);
    int index = searchProduct(product, prodName);
    if (index == -1)
    {
        printf("\nNo such Product found..!");
        return -1;
    }
    else
    {
        printf("\nSelected Product Details Are : ");
        showOneProduct(&product[index]);
        // printf("\n\nEnter The quantity You want to add in cart 1-%d : ", product[index].quantity);
        // scanf("%d", &qty);
        // if (qty > product[index].quantity)
        // {
        //     printf("\n Invalid Input");
        //     printf("\n\nEnter The quantity You want to add in cart 1-%d : ", product[index].quantity);
        //     scanf("%d", &qty);
        // }
        do
        {
            printf("\nEnter The quantity You want to add in cart 1-%d : ", product[index].quantity);
            scanf("%d", &qty);
            if (qty < 1 || qty > product[index].quantity)
                printf("\nInvalid quantity! Please enter a valid quantity.\n");
        } while (qty < 1 || qty > product[index].quantity);

        bill->id = product[index].id;
        strcpy(bill->name, product[index].name);
        bill->price = product[index].price;
        bill->quantity = qty;
        return 1;
    }
}

float calculateTotalOfProduct(Bill *bill)
{
    // int total = 0;
    // for (int i = 0; i < bill->quantity; i++)
    // {
    //     total += bill->price;
    // }
    // return total;
    return bill->quantity * bill->price;
}

void oneProdBill(Bill *bill)
{
    // printf("\t %d \t %s \t %d \t %.2f \t %d", bill->id, bill->name, bill->quantity, bill->price, calculateTotalOfProduct(bill));

    printf("|  %-7d | %-15s | %-3d | %-7.2f | %-6.2f |", bill->id, bill->name, bill->quantity, bill->price, calculateTotalOfProduct(bill));
}
void printBill(Bill *bill, int totalProd)
{
    printf("\n------------------------------------------------------------");
    printf("\n| Sr.No |    Id    |      Name       | Qty |  Price  | Total |");
    printf("\n------------------------------------------------------------");
    for (int i = 0; i < totalProd; i++)
    {
        printf("\n|  %-5d", i + 1);
        oneProdBill(&bill[i]);
    }
}

float calculateFinalBill(Bill *bill, int noOfProducts)
{
    float totalBill = 0;
    for (int i = 0; i < noOfProducts; i++)
    {
        totalBill += calculateTotalOfProduct(&bill[i]);
    }
    return totalBill;
}

int showMenu()
{
    int ch;
    printf("\nEnter your choice : \n 1) Add Products in cart \t0) Exit : ");
    scanf("%d", &ch);
    return ch;
}

void main()
{
    int ch;
    // printf("Ha bhai Bola bhai");
    Product product[15];
    hardCodedProducts(product);
    char choice;

    printf("\n\n List Of All Products \n");
    showRoom(product);
    do
    {
        ch = showMenu();
        Bill bill[20];
        int i = 0;

        if (ch == 0)
        {
            break;
        }
        else if (ch == 1)
        {
            do
            {
                int id = addTOCart(product, &bill[i]);
                if (id == 1)
                {
                    i++;
                }
                else if (id == -1)
                {
                    i = i;
                }
                printf("\nDo You Want to Add More Product (Y/N) : ");
                fflush(stdin);
                scanf("%c", &choice);

            } while (choice == 'y' || choice == 'Y');

            printBill(bill, i);
            printf("\nGross Total : %.2f", calculateFinalBill(bill, i));
        }
        else
        {
            printf("\nInvalid Choice...!");
        }
    } while (ch != 0);
}