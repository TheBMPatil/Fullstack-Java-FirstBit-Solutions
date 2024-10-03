#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// GLobal Values
int size = 20;
static int bookIndex = 0;

// Structure
typedef struct Book
{
    int bId;
    char bookTitle[50];
    float price;
    float rating;
    char author[50];
    char category[50];
} Book;

// HardCoded Books Function
void hardCodedBooks(Book *);

// AddBook Helper
void addBookHelper(Book *b, int bookQuantity)
{
    for (int i = 0; i < bookQuantity; i++, bookIndex++)
    {
        printf("\n|--------------------------------:: Enter Book %d Data ::------------------------------|\n", bookIndex + 1);

        // Input for Book ID
        printf("| Enter Book ID           : ");
        scanf("%d", &b[bookIndex].bId);

        // Input for Book Name
        printf("| Enter Book Name         : ");
        fflush(stdin);
        gets(b[bookIndex].bookTitle);

        // Input for Book Price
        printf("| Enter Book Price        : ");
        scanf("%f", &b[bookIndex].price);

        // Input for Book Rating
        do
        {
            printf("| Enter Book Rating (1-5) : ");
            scanf("%f", &b[bookIndex].rating);
            if (b[bookIndex].rating > 5)
            {
                printf("\n\nInvalid Input \n");
            }

            /* code */
        } while (b[bookIndex].rating > 5);

        // Input for Book Author Name
        printf("| Enter Book Author Name  : ");
        fflush(stdin);
        gets(b[bookIndex].author);

        // Input for Book Category Name
        printf("| Enter Book Category     : ");
        fflush(stdin);
        gets(b[bookIndex].category);

        // printf("|--------------------------------------------------------------------------------------|\n");
    }
}

// Add Book
Book *addBook(Book *b, int bookQuantity)
{
    printf("\n|--------------------------------:: Adding Books ::------------------------------------|\n");

    // Check if reallocation is needed
    if (size - bookIndex < bookQuantity)
    {
        size = (size * 1.5) + bookQuantity; // Adjust the size dynamically
        printf("| Reallocating memory to hold more books...\n");

        Book *temp = (Book *)realloc(b, sizeof(Book) * size); // Attempt to reallocate memory

        if (temp == NULL)
        {
            printf("| Reallocation Failed! Not enough memory available.\n");
            printf("|-------------------------------------------------------------------------------------|\n");
            return b; // Return original memory block if realloc fails
        }
        else
        {
            b = temp; // Assign new block if realloc is successful
            printf("| Reallocation Successful. New size: %d\n", size);
            addBookHelper(b, bookQuantity); // Add books using helper function
            // printf("|-------------------------------------------------------------------------------------|\n");
            return b;
        }
    }
    else if (size > bookQuantity && bookIndex < size)
    {
        // No need to reallocate, just add books
        printf("| Adding books without reallocation...\n");
        addBookHelper(b, bookQuantity); // Add books using helper function
        printf("|-------------------------------------------------------------------------------------|\n");
        return b;
    }

    printf("|-------------------------------------------------------------------------------------|\n");
    return b; // Return the updated book collection
}

// Display On Book
void displayOneBook(Book *b)
{
    printf("\n\n|----------------------------------:: Book Data ::------------------------------------|\n");
    printf("| Book ID       : %-67d |\n", b->bId);
    printf("| Book Name     : %-67s |\n", b->bookTitle);
    printf("| Book Price    : %-67.2f |\n", b->price);
    printf("| Book Rating   : %-67.2f |\n", b->rating);
    printf("| Book Author   : %-67s |\n", b->author);
    printf("| Book Category : %-67s |\n", b->category);
    printf("|-------------------------------------------------------------------------------------|\n");
}

// Display All Books
void displayBooks(Book *b)
{
    printf("\nAll Books are ");

    for (int i = 0; i < bookIndex; i++)
    {
        // displayOneBook(&b[i]);
        printf("\n\n|----------------------------------:: Book Data ::------------------------------------|\n");
        printf("| Book ID       : %-67d |\n", b[i].bId);
        printf("| Book Name     : %-67s |\n", b[i].bookTitle);
        printf("| Book Price    : %-67.2f |\n", b[i].price);
        printf("| Book Rating   : %-67.2f |\n", b[i].rating);
        printf("| Book Author   : %-67s |\n", b[i].author);
        printf("| Book Category : %-67s |\n", b[i].category);
        printf("|-------------------------------------------------------------------------------------|\n");
    }
}

// Display Top 3
void displayTop3(Book *b)
{
    printf("\nTop 3 Books are ");

    for (int i = 0; i < 3 && i < bookIndex; i++)
    {
        // displayOneBook(&b[i]);
        printf("\n\n|----------------------------------:: Book Data ::------------------------------------|\n");
        printf("| Book ID       : %-67d |\n", b[i].bId);
        printf("| Book Name     : %-67s |\n", b[i].bookTitle);
        printf("| Book Price    : %-67.2f |\n", b[i].price);
        printf("| Book Rating   : %-67.2f |\n", b[i].rating);
        printf("| Book Author   : %-67s |\n", b[i].author);
        printf("| Book Category : %-67s |\n", b[i].category);
        printf("|-------------------------------------------------------------------------------------|\n");
    }
}

// Search Book By ID
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

// Search Book By Name
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

// Update Book Price & rating
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
}

// Remove / Delete Book
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
    int i = 0;
    printf("\nList of Books By : %s", category);
    for (; i < bookIndex; i++)
    {
        if (strcasecmp(b[i].category, category) == 0)
        {
            displayOneBook(&b[i]);
        }
    }
    if (i == bookIndex)
    {
        printf("\n No Book Found of this Category...!\n");
    }
}

// Sort Book By Rating
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

// Sort By Price
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

// Show Menu Function
int showMenu()
{
    int ch;
    printf("\n\n|--------------------------------------- Book System ----------------------------------|\n");
    printf("| 1)  Add Book               | 2)  Add Multiple Books     | 3)  Display All Books      |\n");
    printf("| 4)  Search Book 	     | 5)  Update Book            | 6)  Remove Book            |\n");
    printf("| 7)  List All Authors       | 8)  List Books By Author   | 9)  List All Categories    |\n");
    printf("| 10) List Books By Category | 11) Sort Books             | 12) List Top 3 Books       |\n");
    printf("|--------------------------------------------------------------------------------------|\n");
    printf("\tEnter your choice: ");
    scanf("%d", &ch);
    printf("|--------------------------------------------------------------------------------------|\n");
    return ch;
}

void main()
{
    Book *bookMall = (Book *)malloc(sizeof(Book) * size);
    hardCodedBooks(bookMall);
    int choice;
    do
    {
        int sCh;
        char AD;
        int id;
        char auth[50], catg[50];

        choice = showMenu();
        Book *bs;

        switch (choice)
        {
        case 1:
            // Case for adding a single book
            printf("\n|--------------------------------:: Add Single Book ::---------------------------------|\n");
            // printf("Size of current Book Mall: %d\n", sizeof(*bookMall) * size);
            bookMall = addBook(bookMall, 1); // Add 1 book
            printf("|---------------------------------------------------------------------------------------|\n");
            break;

        case 2:
            // Case for adding multiple books
            printf("\n|------------------------------:: Add Multiple Books ::--------------------------------|\n");
            printf("Enter the number of books you want to store: ");
            int bookQuantity;
            scanf("%d", &bookQuantity);                 // Accept user input for number of books
            bookMall = addBook(bookMall, bookQuantity); // Add the specified number of books
            printf("|-------------------------------------------------------------------------------------|\n");
            break;

        case 3:
            // Display all books in the collection
            printf("\n|-------------------------------:: Display All Books ::-------------------------------|\n");
            displayBooks(bookMall);
            printf("|-------------------------------------------------------------------------------------|\n");
            break;

        case 4:
            // Search a book either by ID or Name
            printf("\n|------------------------------:: Search for a Book ::---------------------------------|\n");
            printf("How do you want to search the book? \n 1) By Book ID \t 2) By Book Name \n");
            int srbk;
            scanf("%d", &srbk); // Accept user's search choice (ID or Name)

            if (srbk == 1)
            {
                printf("Enter the ID of the book: ");
                scanf("%d", &id);
                int res = searchBookByID(bookMall, id); // Search by ID
                if (res == -1)
                {
                    printf("No book found for ID: %d\n", id); // Book not found
                }
                else
                {
                    displayOneBook(&bookMall[res]); // Display the found book
                }
            }
            else if (srbk == 2)
            {
                char bkNm[50];
                printf("Enter the name of the book: ");
                fflush(stdin);                              // Clear input buffer
                gets(bkNm);                                 // Get book name input
                int res = searchBookByName(bookMall, bkNm); // Search by name
                if (res == -1)
                {
                    printf("No book found for name: %s\n", bkNm); // Book not found
                }
                else
                {
                    displayOneBook(&bookMall[res]); // Display the found book
                }
            }
            else
            {
                printf("\nInvalid search option. Please choose correctly!\n");
            }
            printf("|-------------------------------------------------------------------------------------|\n");
            break;

        case 5:
            // Update a book's details by its ID
            printf("\n|--------------------------------:: Update Book ::---------------------------------------|\n");
            printf("Enter the ID of the book you want to update: ");
            scanf("%d", &id);
            updateBook(bookMall, id); // Update book with the given ID
            printf("|-------------------------------------------------------------------------------------|\n");
            break;

        case 6:
            // Remove a book by its ID
            printf("\n|---------------------------------: Remove Book :--------------------------------------|\n");
            printf("Enter the ID of the book you want to delete: ");
            scanf("%d", &id);
            removeBook(bookMall, id); // Remove the book
            printf("|-------------------------------------------------------------------------------------|\n");
            break;

        case 7:
            // List all authors
            printf("\n|--------------------------------: List All Authors :---------------------------------|\n");
            listAllAuthors(bookMall);
            printf("\n|-------------------------------------------------------------------------------------|\n");
            break;

        case 8:
            // List all books by a particular author
            printf("\n|---------------------------: List Books by Author :----------------------------------|\n");
            printf("Enter the name of the author: ");
            fflush(stdin);                     // Clear input buffer
            gets(auth);                        // Get author name input
            listBooksByAuthor(bookMall, auth); // List books by this author
            printf("\n|-------------------------------------------------------------------------------------|\n");
            break;

        case 9:
            // List all categories
            printf("\n|-----------------------------: List All Categories :--------------------------------|\n");
            listAllCategories(bookMall);
            printf("\n|-------------------------------------------------------------------------------------|\n");
            break;

        case 10:
            // List books by a specific category
            printf("\n|-------------------------: List Books by Category :---------------------------------|\n");
            printf("Enter the category name: ");
            fflush(stdin);                       // Clear input buffer
            gets(catg);                          // Get category name input
            listBooksByCategory(bookMall, catg); // List books in this category
            printf("\n|-------------------------------------------------------------------------------------|\n");
            break;

        case 11:
            // Sort books by rating or price
            printf("\n|----------------------------: Sort Books :-----------------------------------------|\n");
            printf("Enter your sorting preference:\n1) Sort by Rating\n2) Sort by Price\n");
            scanf("%d", &sCh);

            switch (sCh)
            {
            case 1:
                printf("Enter Order: 'A' for Ascending, 'D' for Descending: ");
                fflush(stdin);
                scanf("%c", &AD);                        // Accept order (Ascending or Descending)
                bs = sortbookMallByRating(bookMall, AD); // Sort by rating
                if (bs != NULL)
                {
                    displayBooks(bs); // Display sorted books
                    free(bs);         // Free allocated memory for sorted books
                }
                break;

            case 2:
                printf("Enter Order: 'A' for Ascending, 'D' for Descending: ");
                fflush(stdin);
                scanf("%c", &AD);                     // Accept order (Ascending or Descending)
                bs = sortbookMallPrice(bookMall, AD); // Sort by price
                if (bs != NULL)
                {
                    displayBooks(bs); // Display sorted books
                    free(bs);         // Free allocated memory for sorted books
                }
                break;

            default:
                printf("Invalid sorting option!\n");
                break;
            }
            printf("\n|-------------------------------------------------------------------------------------|\n");
            break;

        case 12:
            // List top 3 books by rating or price
            printf("\n|----------------------------: List Top 3 Books :--------------------------------------|\n");
            printf("Enter your choice:\n1) Top 3 by Rating\n2) Top 3 by Price\n");
            scanf("%d", &sCh);

            switch (sCh)
            {
            case 1:
                printf("Enter Order: 'A' for Highest Rating, 'D' for Lowest Rating: ");
                fflush(stdin);
                scanf("%c", &AD);                        // Accept order
                bs = sortbookMallByRating(bookMall, AD); // Sort by rating
                if (bs != NULL)
                {
                    displayTop3(bs); // Display top 3 books
                    free(bs);        // Free memory
                }
                break;

            case 2:
                printf("Enter Order: 'A' for Highest Price, 'D' for Lowest Price: ");
                fflush(stdin);
                scanf("%c", &AD);                     // Accept order
                bs = sortbookMallPrice(bookMall, AD); // Sort by price
                if (bs != NULL)
                {
                    displayTop3(bs); // Display top 3 books
                    free(bs);        // Free memory
                }
                break;

            default:
                printf("Invalid choice!\n");
                break;
            }
            printf("\n|-------------------------------------------------------------------------------------|\n");
            break;

        default:
            // Handle invalid input
            printf("\nInvalid choice! Please select a valid option.\n");
            break;
        }

    } while (choice != 0);
    free(bookMall);
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
