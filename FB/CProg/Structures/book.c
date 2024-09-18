#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void showMenu();

int size = 10;
int idx = 0;

typedef struct Book
{
    int bId;
    char bName[50];
    float price;
    int rating;
    char author[30];
} Book;

Book *addBook(Book *b, int bkQnty)
{
    printf("\nAdding Books");
    if (idx == size - bkQnty || size < bkQnty)
    {
        size = 2 * size;
        b = (Book *)realloc(b, sizeof(Book) * size);
        printf("\nReallocating");
        if (b == NULL)
        {
            printf("\nReallocation Failed");
            return;
        }
        else
        {
            for (int i = 0; i < bkQnty, idx < size; i++, idx++)
            {
                printf("\nEnter Book %d Data", idx + 1);
                printf("\nEnter Book Id :");
                scanf("%d", &b[idx].bId);
                printf("\nEnter Book Name :");
                fflush(stdin);
                gets(b[idx].bName);
                printf("\nEnter Book Price :");
                scanf("%f", &b[idx].price);
                printf("\nEnter Book Rating (1-5):");
                scanf("%d", &b[idx].rating);
                printf("\nEnter Book Author Name :");
                fflush(stdin);
                gets(b[idx].author);
            }
        }
    }
    else if (size > bkQnty)
    {
        for (int i = 0; i < bkQnty, idx < size; i++, idx++)
        {
            printf("\nEnter Book %d Data", idx + 1);
            printf("\nEnter Book Id :");
            scanf("%d", &b[idx].bId);
            printf("\nEnter Book Name :");
            fflush(stdin);
            gets(b[idx].bName);
            printf("\nEnter Book Price :");
            scanf("%f", &b[idx].price);
            printf("\nEnter Book Rating (1-5):");
            scanf("%d", &b[idx].rating);
            printf("\nEnter Book Author Name :");
            fflush(stdin);
            gets(b[idx].author);
        }
    }
    return b;
}

void displayBooks(Book *b)
{
    printf("\nAll Books are ");

    for (int i = 0; i < idx; i++)
    {
        printf("\nBook Id :%d", b[i].bId);
        printf("\nBook Name :%s", b[i].bName);
        printf("\nBook Price :%.2f", b[i].price);
        printf("\nBook Rating :%d", b[i].rating);
        printf("\nBook Author :%s", b[i].author);
    }
}
void displayOneBook(Book *b)
{
    printf("\n\n\tBook Data is");
    printf("\nBook Id :%d", b->bId);
    printf("\nBook Name :%s", b->bName);
    printf("\nBook Price :%.2f", b->price);
    printf("\nBook Rating :%d", b->rating);
    printf("\nBook Author :%s", b->author);
}

int searchBook(Book *b, int id)
{
    for (int i = 0; i < idx; i++)
    {
        if (b[i].bId == id)
        {
            return i;
        }
    }
    return -1;
}

void updateBook(Book *b, int id)
{
    int bk = searchBook(b, id);
    if (bk == -1)
    {
        printf("\nNo Book Found of id: %d", id);
    }
    else
    {
        printf("\nOld price is : %.2f\nEnter new Price :", b[bk].price);
        scanf("%f", &b[bk].price);

        printf("\nOld Rating is : %d \nEnter new Price :", b[bk].rating);
        scanf("%d", &b[bk].rating);
    }

    // price & rating
}

void removeBook(Book *b, int id)
{
    // Remove book and
    int bk = searchBook(b, id);
    if (bk == -1)
    {
        printf("\nNo Book Found of id: %d", id);
    }
    else
    {
        for (int i = 0; i < idx; i++)
        {
            if (b[i].bId == b[bk].bId)
            {
                for (int j = i; j < idx - 1; j++)
                {
                    b[j] = b[j + 1];
                }
                idx--;
            }
        }
    }
}

void hardCodedBooks(Book *b)
{
    b[0].bId = 1;
    strcpy(b[0].bName, "The Lord of the Rings");
    b[0].price = 29.99;
    b[0].rating = 5;
    strcpy(b[0].author, "Bhagvat");

    b[1].bId = 2;
    strcpy(b[1].bName, "Pride and Prejudice");
    b[1].price = 14.99;
    b[1].rating = 4;
    strcpy(b[1].author, "Bhagvat");

    b[2].bId = 3;
    strcpy(b[2].bName, "To Kill a Mockingbird");
    b[2].price = 18.99;
    b[2].rating = 5;
    strcpy(b[2].author, "Bhagvat");

    b[3].bId = 4;
    strcpy(b[3].bName, "1984");
    b[3].price = 12.99;
    b[3].rating = 4;
    strcpy(b[3].author, "George Orwell");

    b[4].bId = 5;
    strcpy(b[4].bName, "The Hitchhiker's Guide to the Galaxy");
    b[4].price = 15.99;
    b[4].rating = 5;
    strcpy(b[4].author, "Douglas Adams");

    b[5].bId = 6;
    strcpy(b[5].bName, "Harry Potter and the Sorcerer's Stone");
    b[5].price = 22.99;
    b[5].rating = 5;
    strcpy(b[5].author, "J.K. Rowling");

    b[6].bId = 7;
    strcpy(b[6].bName, "The Great Gatsby");
    b[6].price = 16.99;
    b[6].rating = 4;
    strcpy(b[6].author, "F. Scott Fitzgerald");

    b[7].bId = 8;
    strcpy(b[7].bName, "The Catcher in the Rye");
    b[7].price = 13.99;
    b[7].rating = 4;
    strcpy(b[7].author, "J.D. Salinger");

    b[8].bId = 9;
    strcpy(b[8].bName, "The Alchemist");
    b[8].price = 11.99;
    b[8].rating = 5;
    strcpy(b[8].author, "Paulo Coelho");

    b[9].bId = 10;
    strcpy(b[9].bName, "The Little Prince");
    b[9].price = 10.99;
    b[9].rating = 5;
    strcpy(b[9].author, "Antoine de Saint-Exupéry");
    idx = 10;
}

// Displya All Authors

void listAllAuthors(Book *b)
{
    printf("\nList Of All the authors :");
    int cnt = 1;
    for (int i = 0; i < idx; i++)
    {
        printf("\n%d) %s", cnt++, b[i].author);
    }
}
// void listAllAuthorsDup(Book *b)
// {
//     printf("\nList Of All the authors :");
//     int cnt = 1;
//     for (int i = 1; i < idx; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if (strcasecmp(b[i].author, b[j].author) != 0)
//             {
//                 printf("\n%d) %s", cnt++, b[j].author);
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }
// }

// Search By author

void listBooksByAuthor(Book *b, char author[])
{
    printf("\nList of Books By : %s", author);
    for (int i = 0; i < idx; i++)
    {
        if (strcasecmp(b[i].author, author) == 0)
        {
            displayOneBook(&b[i]);
        }
    }
}

void main()
{

    Book *bMall = (Book *)malloc(sizeof(Book) * size);
    int choice = 0;
    // printf("\nSizeof Book :%d", sizeof(*bMall));
    hardCodedBooks(bMall);

    do
    {
        int id;
        char auth[50];
        showMenu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            bMall = addBook(bMall, 1);
            break;
        case 2:
            printf("\nEnter How many Books do you Wnat to store :");
            int bkQnty;
            scanf("%d", &bkQnty);
            // bMall = (Book *)malloc(sizeof(Book) * bkQnty);
            bMall = addBook(bMall, bkQnty);
            break;
        case 3:
            displayBooks(bMall);
            break;
        case 4:
            printf("\nEnter the id of book you want to search");

            scanf("%d", &id);
            int res = searchBook(bMall, id);
            if (res == -1)
            {
                printf("\nNo Book Found for id: %d", id);
            }
            else
            {
                displayOneBook(&bMall[res]);
            }
            break;

        case 5:
            printf("\nEnter the id of book you want to Update");
            scanf("%d", &id);
            updateBook(bMall, id);
            break;
        case 6:
            printf("\nEnter the id of book you want to Delete");
            scanf("%d", &id);
            removeBook(bMall, id);
            break;
        case 7:
            listAllAuthors(bMall);
            break;
        case 8:
            printf("Enter the name of thge author : ");
            fflush(stdin);
            gets(auth);
            listBooksByAuthor(bMall, auth);
            break;
        // case 9:
        //     listAllAuthorsDup(bMall);
        //     break;
        default:
            printf("\nInvalid Choice Brooo!");
            break;
        }
    } while (choice);
}

void showMenu()
{
    printf("\n\n:Book System:\n");
    printf("\n1)Add Book \t2)Add Multiple Books \t3)Display All Books \n4)Search Book \t5) Update Book \t6) Remove Book \n7) List All Authors \t8) List The Books By one Author");
}