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
    char author[50];
    char category[50];

} Book;

Book *addBook(Book *b, int bkQnty)
{
    printf("\nAdding Books");

    // TODO
    // when bqty is less
    // size - idx == bqty then realloc
    //  || size < bkQnty
    // Find size of array

    if (size - idx <= bkQnty)
    {
        size = 2 * size + bkQnty;
        b = (Book *)realloc(b, sizeof(Book) * size);
        printf("\nReallocating");
        if (b == NULL)
        {
            printf("\nReallocation Failed");
            return;
        }
        else
        {
            printf("\nReallocated");
            for (int i = 0; i < bkQnty; i++, idx++)
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
    else if (size > bkQnty && idx < size)
    {
        printf("\n Without reallocating");
        for (int i = 0; i < bkQnty; i++, idx++)
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
            printf("\nEnter Book Category :");
            fflush(stdin);
            gets(b[idx].category);
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
        printf("\nBook Category :%s", b[i].category);
    }
}

void displayTop3(Book *b)
{
    printf("\nTop 3 Books are ");

    for (int i = 0; i < 3; i++)
    {
        printf("\nBook Id :%d", b[i].bId);
        printf("\nBook Name :%s", b[i].bName);
        printf("\nBook Price :%.2f", b[i].price);
        printf("\nBook Rating :%d", b[i].rating);
        printf("\nBook Author :%s", b[i].author);
        printf("\nBook Category :%s", b[i].category);
    }
}

void displayOneBook(Book *b)
{
    printf("\n\n\tBook Data is : ");
    printf("\nBook Id :%d", b->bId);
    printf("\nBook Name :%s", b->bName);
    printf("\nBook Price :%.2f", b->price);
    printf("\nBook Rating :%d", b->rating);
    printf("\nBook Author :%s", b->author);
    printf("\nBook Category :%s", b->category);
}

int searchBookByID(Book *b, int id)
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

int searchBookByName(Book *b, char bName[])
{
    for (int i = 0; i < idx; i++)
    {
        if (strcasecmp(b[i].bName, bName) == 0)
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
    strcpy(b[0].author, "J.R.R. Tolkien");
    strcpy(b[0].category, "Fantasy");

    b[1].bId = 2;
    strcpy(b[1].bName, "Pride and Prejudice");
    b[1].price = 14.99;
    b[1].rating = 4;
    strcpy(b[1].author, "Jane Austen");
    strcpy(b[1].category, "Romance");

    b[2].bId = 3;
    strcpy(b[2].bName, "To Kill a Mockingbird");
    b[2].price = 18.99;
    b[2].rating = 5;
    strcpy(b[2].author, "Harper Lee");
    strcpy(b[2].category, "Fiction");

    b[3].bId = 4;
    strcpy(b[3].bName, "1984");
    b[3].price = 12.99;
    b[3].rating = 4;
    strcpy(b[3].author, "George Orwell");
    strcpy(b[3].category, "Dystopian");

    b[4].bId = 5;
    strcpy(b[4].bName, "The Hitchhiker's Guide to the Galaxy");
    b[4].price = 15.99;
    b[4].rating = 5;
    strcpy(b[4].author, "Douglas Adams");
    strcpy(b[4].category, "Science Fiction");

    b[5].bId = 6;
    strcpy(b[5].bName, "Harry Potter and the Sorcerer's Stone");
    b[5].price = 22.99;
    b[5].rating = 5;
    strcpy(b[5].author, "J.K. Rowling");
    strcpy(b[5].category, "Fantasy");

    b[6].bId = 7;
    strcpy(b[6].bName, "The Great Gatsby");
    b[6].price = 16.99;
    b[6].rating = 4;
    strcpy(b[6].author, "F. Scott Fitzgerald");
    strcpy(b[6].category, "Classics");

    b[7].bId = 8;
    strcpy(b[7].bName, "The Catcher in the Rye");
    b[7].price = 13.99;
    b[7].rating = 4;
    strcpy(b[7].author, "J.D. Salinger");
    strcpy(b[7].category, "Classics");

    b[8].bId = 9;
    strcpy(b[8].bName, "The Alchemist");
    b[8].price = 11.99;
    b[8].rating = 5;
    strcpy(b[8].author, "Paulo Coelho");
    strcpy(b[8].category, "Philosophy");

    b[9].bId = 10;
    strcpy(b[9].bName, "The Little Prince");
    b[9].price = 10.99;
    b[9].rating = 5;
    strcpy(b[9].author, "Antoine de Saint-Exupéry");
    strcpy(b[9].category, "Children's Literature");
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
// Displya All category
void listAllCategories(Book *b)
{
    printf("\nList Of All the authors :");
    int cnt = 1;
    for (int i = 0; i < idx; i++)
    {
        printf("\n%d) %s", cnt++, b[i].category);
    }
}
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

// List Books By Category
void listBooksByCategory(Book *b, char category[])
{
    printf("\nList of Books By : %s", category);
    for (int i = 0; i < idx; i++)
    {
        if (strcasecmp(b[i].category, category) == 0)
        {
            displayOneBook(&b[i]);
        }
    }
}

Book *sortBMallByRating(Book *b, char AD)
{
    Book b1[idx];
    for (int i = 0; i < idx; i++)
    {
        b1[i] = b[i];
    }
    switch (AD)
    {
    case 'A':
        for (int i = 0; i < idx; i++)
        {
            for (int j = 0; j < idx; j++)
            {
                if (b1[i].rating > b1[j].rating)
                {
                    int temp = b1[i].rating;
                    b1[i].rating = b1[j].rating;
                    b1[j].rating = temp;
                }
            }
        }
        return b1;
    case 'D':
        for (int i = 0; i < idx; i++)
        {
            for (int j = 0; j < idx; j++)
            {
                if (b1[i].rating < b1[j].rating)
                {
                    int temp = b1[i].rating;
                    b1[i].rating = b1[j].rating;
                    b1[j].rating = temp;
                }
            }
        }
        return b1;
    default:
        printf("\nInvalid Order");
        return NULL;
    }
}
Book *sortBMallPrice(Book *b, char AD)
{
    Book b1[idx];
    for (int i = 0; i < idx; i++)
    {
        b1[i] = b[i];
    }
    switch (AD)
    {
    case 'A':
        for (int i = 0; i < idx; i++)
        {
            for (int j = 0; j < idx; j++)
            {
                if (b1[i].price > b1[j].price)
                {
                    int temp = b1[i].price;
                    b1[i].price = b1[j].price;
                    b1[j].price = temp;
                }
            }
        }
        return b1;

    case 'D':
        for (int i = 0; i < idx; i++)
        {
            for (int j = 0; j < idx; j++)
            {
                if (b1[i].price < b1[j].price)
                {
                    int temp = b1[i].price;
                    b1[i].price = b1[j].price;
                    b1[j].price = temp;
                }
            }
        }
        return b1;

    default:
        printf("\nInvalid Order");
        return NULL;
    }
}

void main()
{

    Book *bMall = (Book *)malloc(sizeof(Book) * size);
    // Book arr[10];
    int choice = 0;
    // printf("\nSizeof Book :%d", sizeof(bMall) / sizeof(bMall[0]));
    // printf("\nSizeof Book :%d", sizeof(*bMall) * size);
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
            printf("\nSizeof Book :%d", sizeof(*bMall) * size);
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
            printf("\nHow do you want to search Book : \n 1) By Book Id \t 2) By Book Name ");
            int srbk;
            scanf("%d", &srbk);
            if (srbk == 1)
            {
                printf("\nEnter the id of book you want to search");
                scanf("%d", &id);
                int res = searchBookByID(bMall, id);
                if (res == -1)
                {
                    printf("\nNo Book Found for id: %d", id);
                }
                else
                {
                    displayOneBook(&bMall[res]);
                }
            }
            else if (srbk == 2)
            {
                char bkNm[50];
                printf("\nEnter the Name of book you want to search");
                fflush(stdin);
                gets(bkNm);
                int res = searchBookByName(bMall, bkNm);
                if (res == -1)
                {
                    printf("\nNo Book Found for Name: %s", bkNm);
                }
                else
                {
                    displayOneBook(&bMall[res]);
                }
            }
            else
            {
                printf("\nBad Behavior man sahi se number dal na meri jaan..!");
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
            printf("\nEnter the name of the author : ");
            fflush(stdin);
            gets(auth);
            listBooksByAuthor(bMall, auth);
            break;
        case 9:
            listAllCategories(bMall);
            break;
        case 10:
            char catg[50];
            printf("\nEnter the name of thg Category : ");
            fflush(stdin);
            gets(catg);
            listBooksByCategory(bMall, catg);
            break;
        case 11:
            char AD;
            printf("\nEnter Your Choice:");
            printf("\n1) Sort By Rating:");
            printf("\n2) Sort By Price:");
            int sCh;
            scanf("%d", &sCh);
            switch (sCh)
            {
            case 1:
                printf("\nEnter Order :\n'A' For ascending order \n'B'  for descending Order");
                fflush(stdin);
                scanf("%c", &AD);
                Book *bs = sortBMallByRating(bMall, AD);
                if (bs != NULL)
                {
                    displayBooks(bs);
                }
                break;
            case 2:
                printf("\nEnter Order :\n'A' For ascending order \n'B'  for descending Order");
                fflush(stdin);
                scanf("%c", &AD);
                Book *bs = sortBMallPrice(bMall, AD);
                if (bs != NULL)
                {
                    displayBooks(bs);
                }
                break;
            default:
                printf("\nInvalid Choice..!");
                break;
            }
            break;
        case 12:
            char AD;
            printf("\nEnter Your Choice:");
            printf("\n1) Top 3 Books By Rating:");
            printf("\n2) Top 3 Books By Price:");
            int sCh;
            scanf("%d", &sCh);
            switch (sCh)
            {
            case 1:
                printf("\nEnter Order :\n'A' For Highest Rating \n'B'  For Lowest Rating");
                fflush(stdin);
                scanf("%c", &AD);
                Book *bs = sortBMallByRating(bMall, AD);
                if (bs != NULL)
                {
                    displayTop3(bs);
                }
                break;
            case 2:
                printf("\nEnter Order :\n'A' For Highest Price \n'B'  For Lowest Order");
                fflush(stdin);
                scanf("%c", &AD);
                Book *bs = sortBMallPrice(bMall, AD);
                if (bs != NULL)
                {
                    displayTop3(bs);
                }
                break;
            default:
                printf("\nInvalid Choice..!");
                break;
            }

            break;
        default:
            printf("\nInvalid Choice Brooo!");
            break;
        }
    } while (choice);
}

void showMenu()
{
    printf("\n\n:Book System:\n");
    printf("\n1)Add Book \t2)Add Multiple Books \t3)Display All Books \n4)Search Book By ID \t5) Update Book \t6) Remove Book \n7) List All Authors \t8) List The Books By one Author \t9) List All Categories \n10) List Books By Categories \t11) Sort Books By Rating  or Price \t12) List Top 3 Books");
}