#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void showMenu();

int size = 10;
int bookIndex = 0;

typedef struct Book
{
    int bId;
    char bookTitle[50];
    float price;
    float rating;
    char author[50];
    char category[50];

} Book;

void hardCodedBooks(Book *);

Book *addBook(Book *b, int bookQuantity)
{
    printf("\nAdding Books");
    if (size - bookIndex <= bookQuantity)
    {
        size = (2 * size) + bookQuantity;
        Book *temp = (Book *)realloc(b, sizeof(Book) * size);
        // printf("\nReallocating");
        if (temp == NULL)
        {
            printf("\nReallocation Failed");
            return b;
        }
        else
        {
            b = temp;
            // printf("\nReallocated");
            addBookHelper(b, bookQuantity);
            return b;
        }
    }
    else if (size > bookQuantity && bookIndex < size)
    {
        // printf("\n Without reallocating");
        addBookHelper(b, bookQuantity);
        return b;
    }
}

void addBookHelper(Book *b, int bookQuantity)
{
    for (int i = 0; i < bookQuantity; i++, bookIndex++)
    {
        printf("\nEnter Book %d Data", bookIndex + 1);
        printf("\nEnter Book Id :");
        scanf("%d", &b[bookIndex].bId);
        printf("\nEnter Book Name :");
        fflush(stdin);
        gets(b[bookIndex].bookTitle);
        printf("\nEnter Book Price :");
        scanf("%f", &b[bookIndex].price);
        printf("\nEnter Book Rating (1-5):");
        scanf("%f", &b[bookIndex].rating);
        printf("\nEnter Book Author Name :");
        fflush(stdin);
        gets(b[bookIndex].author);
    }
}

void displayBooks(Book *b)
{
    printf("\nAll Books are ");

    for (int i = 0; i < bookIndex; i++)
    {
        printf("\nBook Id :%d", b[i].bId);
        printf("\nBook Name :%s", b[i].bookTitle);
        printf("\nBook Price :%.2f", b[i].price);
        printf("\nBook Rating :%.2f", b[i].rating);
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
        printf("\nBook Name :%s", b[i].bookTitle);
        printf("\nBook Price :%.2f", b[i].price);
        printf("\nBook Rating :%.2f", b[i].rating);
        printf("\nBook Author :%s", b[i].author);
        printf("\nBook Category :%s", b[i].category);
    }
}

void displayOneBook(Book *b)
{
    printf("\n\n\tBook Data is : ");
    printf("\nBook Id :%d", b->bId);
    printf("\nBook Name :%s", b->bookTitle);
    printf("\nBook Price :%.2f", b->price);
    printf("\nBook Rating :%.2f", b->rating);
    printf("\nBook Author :%s", b->author);
    printf("\nBook Category :%s", b->category);
}

int searchBookByID(Book *b, int id)
{
    for (int i = 0; i < bookIndex; i++)
    {
        if (b[i].bId == id)
        {
            return i;
        }
    }
    return -1;
}

int searchBookByName(Book *b, char bookTitle[])
{
    for (int i = 0; i < bookIndex; i++)
    {
        if (strcasecmp(b[i].bookTitle, bookTitle) == 0)
        {
            return i;
        }
    }
    return -1;
}

void updateBook(Book *b, int id)
{
    int bk = searchBookByID(b, id);
    if (bk == -1)
    {
        printf("\nNo Book Found of id: %d", id);
    }
    else
    {
        printf("\nOld price is : %.2f\nEnter new Price :", b[bk].price);
        scanf("%f", &b[bk].price);

        printf("\nOld Rating is : %.2f \nEnter new Price :", b[bk].rating);
        scanf("%f", &b[bk].rating);
    }

    // price & rating
}

void removeBook(Book *b, int id)
{
    // Remove book and
    int bk = searchBookByID(b, id);
    if (bk == -1)
    {
        printf("\nNo Book Found of id: %d", id);
    }
    else
    {
        for (int i = 0; i < bookIndex; i++)
        {
            if (b[i].bId == b[bk].bId)
            {
                for (int j = bk; j < bookIndex - 1; j++)
                {
                    b[j] = b[j + 1];
                }
                bookIndex--;
            }
        }
    }
}

// Displya All Authors
void listAllAuthors(Book *b)
{
    printf("\nList Of All the authors :");
    int cnt = 1;
    for (int i = 0; i < bookIndex; i++)
    {
        printf("\n%d) %s", cnt++, b[i].author);
    }
}
// Displya All category
void listAllCategories(Book *b)
{
    printf("\nList Of All the authors :");
    int cnt = 1;
    for (int i = 0; i < bookIndex; i++)
    {
        printf("\n%d) %s", cnt++, b[i].category);
    }
}
// Search By author

void listBooksByAuthor(Book *b, char author[])
{
    printf("\nList of Books By : %s", author);
    for (int i = 0; i < bookIndex; i++)
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
    for (int i = 0; i < bookIndex; i++)
    {
        if (strcasecmp(b[i].category, category) == 0)
        {
            displayOneBook(&b[i]);
        }
    }
}

Book *sortbookMallByRating(Book *b, char AD)
{
    Book *b1 = (Book *)malloc(sizeof(Book) * bookIndex);
    // Book b1[bookIndex];
    for (int i = 0; i < bookIndex; i++)
    {
        b1[i] = b[i];
    }
    switch (AD)
    {
    case 'A':
        for (int i = 0; i < bookIndex; i++)
        {
            for (int j = 0; j < bookIndex - 1; j++)
            {
                if (b1[j].rating > b1[j + 1].rating)
                {
                    Book temp = b1[j];
                    b1[j] = b1[j + 1];
                    b1[j + 1] = temp;
                }
            }
        }
        return b1;
    case 'D':
        for (int i = 0; i < bookIndex; i++)
        {
            for (int j = 0; j < bookIndex - 1; j++)
            {
                if (b1[j].rating < b1[j + 1].rating)
                {
                    Book temp = b1[j];
                    b1[j] = b1[j + 1];
                    b1[j + 1] = temp;
                }
            }
        }
        return b1;
    default:
        printf("\nInvalid Order");
        return NULL;
    }
}

Book *sortbookMallPrice(Book *b, char AD)
{
    Book *b1 = (Book *)malloc(sizeof(Book) * bookIndex);
    // Book b1[bookIndex];
    for (int i = 0; i < bookIndex; i++)
    {
        b1[i] = b[i];
    }
    switch (AD)
    {
    case 'A':
        for (int i = 0; i < bookIndex; i++)
        {
            for (int j = 0; j < bookIndex - 1; j++)
            {
                if (b1[j].price > b1[j + 1].price)
                {
                    Book temp = b1[j];
                    b1[j] = b1[j + 1];
                    b1[j + 1] = temp;
                }
            }
        }
        return b1;

    case 'D':
        for (int i = 0; i < bookIndex; i++)
        {
            for (int j = 0; j < bookIndex - 1; j++)
            {
                if (b1[j].price < b1[j + 1].price)
                {
                    Book temp = b1[j];
                    b1[j] = b1[j + 1];
                    b1[j + 1] = temp;
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

    Book *bookMall = (Book *)malloc(sizeof(Book) * size);
    // Book arr[10];
    // printf("\nSizeof Book :%d", sizeof(bookMall) / sizeof(bookMall[0]));
    // printf("\nSizeof Book :%d", sizeof(*bookMall) * size);
    int choice = 0;
    hardCodedBooks(bookMall);

    do
    {
        int id;
        char auth[50], catg[50];
        showMenu();
        scanf("%d", &choice);
        int sCh;
        char AD;
        Book *bs;
        switch (choice)
        {
        case 1:
            printf("\nSizeof Book :%d", sizeof(*bookMall) * size);
            bookMall = addBook(bookMall, 1);
            break;
        case 2:
            printf("\nEnter How many Books do you Wnat to store :");
            int bookQuantity;
            scanf("%d", &bookQuantity);
            // bookMall = (Book *)malloc(sizeof(Book) * bookQuantity);
            bookMall = addBook(bookMall, bookQuantity);
            break;
        case 3:
            displayBooks(bookMall);
            break;
        case 4:
            printf("\nHow do you want to search Book : \n 1) By Book Id \t 2) By Book Name ");
            int srbk;
            scanf("%d", &srbk);
            if (srbk == 1)
            {
                printf("\nEnter the id of book you want to search");
                scanf("%d", &id);
                int res = searchBookByID(bookMall, id);
                if (res == -1)
                {
                    printf("\nNo Book Found for id: %d", id);
                }
                else
                {
                    displayOneBook(&bookMall[res]);
                }
            }
            else if (srbk == 2)
            {
                char bkNm[50];
                printf("\nEnter the Name of book you want to search");
                fflush(stdin);
                gets(bkNm);
                int res = searchBookByName(bookMall, bkNm);
                if (res == -1)
                {
                    printf("\nNo Book Found for Name: %s", bkNm);
                }
                else
                {
                    displayOneBook(&bookMall[res]);
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
            updateBook(bookMall, id);
            break;
        case 6:
            printf("\nEnter the id of book you want to Delete");
            scanf("%d", &id);
            removeBook(bookMall, id);
            break;
        case 7:
            listAllAuthors(bookMall);
            break;
        case 8:
            printf("\nEnter the name of the author : ");
            fflush(stdin);
            gets(auth);
            listBooksByAuthor(bookMall, auth);
            break;
        case 9:
            listAllCategories(bookMall);
            break;
        case 10:

            printf("\nEnter the name of thg Category : ");
            fflush(stdin);
            gets(catg);
            listBooksByCategory(bookMall, catg);
            break;
        case 11:

            printf("\nEnter Your Choice:");
            printf("\n1) Sort By Rating:");
            printf("\n2) Sort By Price:");

            scanf("%d", &sCh);
            switch (sCh)
            {
            case 1:
                printf("\nEnter Order :\n'A' For ascending order \n'D'  for descending Order");
                fflush(stdin);
                scanf("%c", &AD);
                bs = sortbookMallByRating(bookMall, AD);
                if (bs != NULL)
                {
                    displayBooks(bs);
                    free(bs);
                }
                break;
            case 2:
                printf("\nEnter Order :\n'A' For ascending order \n'D' For descending Order");
                fflush(stdin);
                scanf("%c", &AD);
                bs = sortbookMallPrice(bookMall, AD);

                if (bs != NULL)
                {
                    displayBooks(bs);
                    free(bs);
                }
                break;
            default:
                printf("\nInvalid Choice..!");
                break;
            }
            break;
        case 12:
            printf("\nEnter Your Choice:");
            printf("\n1) Top 3 Books By Rating:");
            printf("\n2) Top 3 Books By Price:");

            scanf("%d", &sCh);
            switch (sCh)
            {
            case 1:
                printf("\nEnter Order :\n'A' For Highest Rating \n'D'  For Lowest Rating");
                fflush(stdin);
                scanf("%c", &AD);
                bs = sortbookMallByRating(bookMall, AD);
                if (bs != NULL)
                {
                    displayTop3(bs);
                    free(bs);
                }
                break;
            case 2:
                printf("\nEnter Order :\n'A' For Highest Price \n'D'  For Lowest Order");
                fflush(stdin);
                scanf("%c", &AD);
                bs = sortbookMallPrice(bookMall, AD);
                if (bs != NULL)
                {
                    displayTop3(bs);
                    free(bs);
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
    free(bookMall);
}

void showMenu()
{
    printf("\n\n:Book System:\n");
    printf("\n1)Add Book \t2)Add Multiple Books \t3)Display All Books \n4)Search Book By ID \t5) Update Book \t6) Remove Book \n7) List All Authors \t8) List The Books By Author \t9) List All Categories \n10) List Books By Categories \t11) Sort Books \t12) List Top 3 Books");
}
void hardCodedBooks(Book *b)
{
    b[0].bId = 1;
    strcpy(b[0].bookTitle, "The Lord of the Rings");
    b[0].price = 29.99;
    b[0].rating = 5.1;
    strcpy(b[0].author, "J.R.R. Tolkien");
    strcpy(b[0].category, "Fantasy");

    b[1].bId = 2;
    strcpy(b[1].bookTitle, "Pride and Prejudice");
    b[1].price = 14.99;
    b[1].rating = 4.2;
    strcpy(b[1].author, "Jane Austen");
    strcpy(b[1].category, "Romance");

    b[2].bId = 3;
    strcpy(b[2].bookTitle, "To Kill a Mockingbird");
    b[2].price = 18.99;
    b[2].rating = 5.6;
    strcpy(b[2].author, "Harper Lee");
    strcpy(b[2].category, "Fiction");

    b[3].bId = 4;
    strcpy(b[3].bookTitle, "1984");
    b[3].price = 12.99;
    b[3].rating = 4.9;
    strcpy(b[3].author, "George Orwell");
    strcpy(b[3].category, "Dystopian");

    b[4].bId = 5;
    strcpy(b[4].bookTitle, "The Hitchhiker's Guide to the Galaxy");
    b[4].price = 15.99;
    b[4].rating = 5.3;
    strcpy(b[4].author, "Douglas Adams");
    strcpy(b[4].category, "Science Fiction");

    b[5].bId = 6;
    strcpy(b[5].bookTitle, "Harry Potter and the Sorcerer's Stone");
    b[5].price = 22.99;
    b[5].rating = 5.8;
    strcpy(b[5].author, "J.K. Rowling");
    strcpy(b[5].category, "Fantasy");

    b[6].bId = 7;
    strcpy(b[6].bookTitle, "The Great Gatsby");
    b[6].price = 16.99;
    b[6].rating = 4.6;
    strcpy(b[6].author, "F. Scott Fitzgerald");
    strcpy(b[6].category, "Classics");

    b[7].bId = 8;
    strcpy(b[7].bookTitle, "The Catcher in the Rye");
    b[7].price = 13.99;
    b[7].rating = 4.8;
    strcpy(b[7].author, "J.D. Salinger");
    strcpy(b[7].category, "Classics");

    b[8].bId = 9;
    strcpy(b[8].bookTitle, "The Alchemist");
    b[8].price = 11.99;
    b[8].rating = 5.3;
    strcpy(b[8].author, "Paulo Coelho");
    strcpy(b[8].category, "Philosophy");

    b[9].bId = 10;
    strcpy(b[9].bookTitle, "The Little Prince");
    b[9].price = 10.99;
    b[9].rating = 5.6;
    strcpy(b[9].author, "Antoine de Saint-Exupéry");
    strcpy(b[9].category, "Children's Literature");

    // Additional 10 Books
    b[10].bId = 11;
    strcpy(b[10].bookTitle, "War and Peace");
    b[10].price = 20.99;
    b[10].rating = 4.9;
    strcpy(b[10].author, "Leo Tolstoy");
    strcpy(b[10].category, "Historical Fiction");

    b[11].bId = 12;
    strcpy(b[11].bookTitle, "Moby Dick");
    b[11].price = 17.50;
    b[11].rating = 4.5;
    strcpy(b[11].author, "Herman Melville");
    strcpy(b[11].category, "Adventure");

    b[12].bId = 13;
    strcpy(b[12].bookTitle, "The Odyssey");
    b[12].price = 13.99;
    b[12].rating = 4.8;
    strcpy(b[12].author, "Homer");
    strcpy(b[12].category, "Epic");

    b[13].bId = 14;
    strcpy(b[13].bookTitle, "Brave New World");
    b[13].price = 15.99;
    b[13].rating = 5.2;
    strcpy(b[13].author, "Aldous Huxley");
    strcpy(b[13].category, "Science Fiction");

    b[14].bId = 15;
    strcpy(b[14].bookTitle, "Frankenstein");
    b[14].price = 11.99;
    b[14].rating = 4.7;
    strcpy(b[14].author, "Mary Shelley");
    strcpy(b[14].category, "Horror");

    b[15].bId = 16;
    strcpy(b[15].bookTitle, "The Divine Comedy");
    b[15].price = 18.99;
    b[15].rating = 5.4;
    strcpy(b[15].author, "Dante Alighieri");
    strcpy(b[15].category, "Poetry");

    b[16].bId = 17;
    strcpy(b[16].bookTitle, "Don Quixote");
    b[16].price = 19.99;
    b[16].rating = 4.9;
    strcpy(b[16].author, "Miguel de Cervantes");
    strcpy(b[16].category, "Classics");

    b[17].bId = 18;
    strcpy(b[17].bookTitle, "Crime and Punishment");
    b[17].price = 14.99;
    b[17].rating = 5.1;
    strcpy(b[17].author, "Fyodor Dostoevsky");
    strcpy(b[17].category, "Psychological Fiction");

    b[18].bId = 19;
    strcpy(b[18].bookTitle, "Jane Eyre");
    b[18].price = 12.99;
    b[18].rating = 4.8;
    strcpy(b[18].author, "Charlotte Brontë");
    strcpy(b[18].category, "Gothic Fiction");

    b[19].bId = 20;
    strcpy(b[19].bookTitle, "The Hobbit");
    b[19].price = 21.99;
    b[19].rating = 5.7;
    strcpy(b[19].author, "J.R.R. Tolkien");
    strcpy(b[19].category, "Fantasy");

    bookIndex = 20; // Update the bookIndex
}
