#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Book
{
    int bId;
    char bName[50];
    float price;
    float rating;
    char author[50];
    char category[50];

} Book;

Book *isFull(Book *, int);

int idx = 0;
int size = 2;

void main()
{
    int ch;

    Book *brr = (Book *)malloc(sizeof(Book) * size);

    do
    {
        ch = choice();
        int usize;

        switch (ch)
        {
        case 1:

            printf("\nHow many books you want to store : ");
            scanf("%d", &usize);

            brr = isFull(brr, usize);

            addB(brr, usize);

            break;
        case 2:
            disp(brr);
            break;

        case 3:
            search(brr);
            break;
        case 4:
            update(brr);
            break;
        case 5:
            removeB(brr);
            break;
        }

    } while (ch < 6);

    printf("\nExited!!!!!!!!!!!!!!");
}

int choice()
{
    int ch = 0;
    printf("\n*************MENU**************");
    printf("\n1} Add Book");
    printf("\n2} Display Book");
    printf("\n3} search Book"); // by id,name,author
    printf("\n4} update Book");
    printf("\n5} Remove Book");
    printf("\n6} Exit");
    printf("\nEnter your choice : ");
    scanf("%d", &ch);
    return ch;
}

void addB(Book *b, int usize)
{

    int i = 0;
    for (; i < usize; idx++, i++)
    {
        printf("\n----------------------------------------");
        printf("\nEnter The Book id : ");
        scanf("%d", &b[idx].bId);

        fflush(stdin);
        printf("\nEnter the book name : ");
        gets(b[idx].bName);

        printf("\nenter the book price : ");
        scanf("%f", &b[idx].price);

        printf("\nenter the book rating : ");
        scanf("%f", &b[idx].rating);

        fflush(stdin);
        printf("\nenter the book author : ");
        gets(b[idx].author);

        fflush(stdin);
        printf("\nenter the book category : ");
        gets(b[idx].category);
    }
}

void disp(Book *b)
{
    //	printf("\n found following data :");
    int i = 0;
    for (; i < idx; i++)
    {
        printf("\n----------------------------------------");
        printf("\nBook Id %d", b[i].bId);
        printf("\nBook Name %s", b[i].bName);
        printf("\nBook Price %f", b[i].price);
        printf("\nBook Rating %f", b[i].rating);
        printf("\nBook Author %s", b[i].author);
        printf("\nBook Category %s", b[i].category);
    }
}

void search(Book *b)
{

    int ch;

    printf("\nChoose among the options for search:");
    printf("\n1)ID\n2)Name\n3)author : ");
    scanf("%d", &ch);

    if (ch == 1)
    {
        int id;
        printf("\nEnter Book ID");
        scanf("%d", &id);
        int i = 0;
        for (; i < idx; i++)
        {
            if (b[i].bId == id)
            {
                dispB(b, i);
            }
        }
    }
    else if (ch == 2)
    {
        char nm[50];
        fflush(stdin);
        printf("\nEnter Book name : ");
        gets(nm);
        int i = 0;
        for (; i < idx; i++)
        {
            if (strcmp(nm, b[i].bName) == 0)
            {
                dispB(b, i);
            }
        }
    }
    else if (ch == 3)
    {
        char nm[50];
        fflush(stdin);
        printf("\nEnter Book author : ");
        gets(nm);
        int i = 0;
        for (; i < idx; i++)
        {
            if (strcmp(nm, b[i].author) == 0)
            {
                dispB(b, i);
            }
        }
    }
}

void dispB(Book *b, int i)
{

    printf("\n----------------------------------------");
    printf("\nBook Id %d ", b[i].bId);
    printf("\nBook Name %s ", b[i].bName);
    printf("\nBook Price %f ", b[i].price);
    printf("\nBook rating %f ", b[i].rating);
    printf("\nBook Author %s ", b[i].author);
    printf("\nBook Category %s :", b[i].category);
}

void update(Book *b)
{
    int ch;
    int id;
    printf("\n Enter the book ID for update : ");
    scanf("%d", &id);
    int i = 0, j = -1;
    for (; i < idx; i++)
    {
        if (b[i].bId == id)
        {
            j = i;
        }
    }
    if (j == -1)
    {
        printf("Invalid Book ID");
        return j;
    }

    printf("\nwhat you want to update from following :");
    printf("\n1]price");
    printf("\n2]rating ");
    scanf("%d", &ch);
    float newp;
    float newrat;
    switch (ch)
    {
    case 1:
        printf("preivous price : %f", b[j].price);
        printf("\nEnter new price : ");
        scanf("%f", &newp);
        b[j].price = newp;
        break;
    case 2:
        printf("preivous rating : %f", b[j].rating);
        printf("\nEnter new rating :");
        scanf("%f", &newrat);
        b[j].rating = newrat;
        break;
    }

    printf("\nBook Updated!!!!!!!!!!!!");
}

void removeB(Book *b)
{
    int id;
    printf("\n Enter the book ID for remove : ");
    scanf("%d", &id);
    int i = 0, j = -1;
    for (; i < idx; i++)
    {
        if (b[i].bId == id)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        printf("Invalid Book ID!!!!!!!!!!!!!!!!!!!!");
        return 0;
    }

    for (; j < idx; j++)
    {
        b[j] = b[j + 1];
    }
    printf("\nBook removed !!!!!!!!!!!!!!!!!!!!!");
    idx--;
}

Book *isFull(Book *b, int usize)
{
    Book *temp = NULL;
    if (size < usize || size < (idx + usize))
    {
        printf("\n size in isfull - %d", size);
        size = size + (usize * 2);
        printf("\n new size in isfull - %d", size);
        temp = (Book *)realloc(b, sizeof(Book) * size);

        printf("\nsize of temp %d", sizeof(*temp));

        if (temp != NULL)
        {
            return temp;
        }
        else
        {
            printf("\n insufficent storage!!!!!!");
            return b;
        }
    }

    return b;
}
