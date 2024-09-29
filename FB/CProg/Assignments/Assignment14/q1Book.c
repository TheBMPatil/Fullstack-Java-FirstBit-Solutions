// 1. Create a structure Book with data members as bname, id, author, price.
// Accept the values of all these members from user and display them.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int idx = 0;
int size = 5;
void showMenu();
typedef struct Book
{
  int bId;
  char bName[50];
  char author[20];
  float price;
} Book;
void addBookHelper(Book *B, int noOfBooks)
{
  for (int i = idx; i < noOfBooks; i++, idx++)
  {

    printf("\nEnter Data for %d no Book", idx + 1);
    printf("\nEnter Book id : ");
    scanf("%d", &B[i].bId);
    printf("\nEnter Book Name : ");
    fflush(stdin);
    scanf("%s", B[i].bName);
    printf("\nEnter Author Name : ");
    fflush(stdin);
    gets(B[i].author);
    printf("\nEnter Price : ");
    scanf("%f", &B[i].price);
  }
  // return B;
}

Book *addBook(Book *B, int noOfBooks)
{
  if (size - idx < noOfBooks)
  {
    size = 2 * size + noOfBooks;
    Book *temp = (Book *)realloc(B, sizeof(Book) * size);
    if (temp == NULL)
    {
      printf("\nReallocation Failed");
      return B;
    }
    else
    {
      B = temp;
      addBookHelper(B, noOfBooks);
      return B;
    }
  }
  else if (size > noOfBooks && idx < size)
  {
    addBookHelper(B, noOfBooks);
    return B;
  }
}

void displayAllBooks(Book *B)
{
  for (int i = 0; i < idx; i++)
  {
    printf("\n\n-------------------------------: Book No %d :-------------------------------", i + 1);
    printf("\n\tBook id : %d", B[i].bId);
    printf("\n\tBook Name : %s", B[i].bName);
    printf("\n\tBook Author : %s", B[i].author);
    printf("\n\tBook Price : %.2f", B[i].price);
  }
}

void main()
{

  //	Book books[20];
  Book *books = (Book *)malloc(sizeof(Book) * size);
  int ch = 0, n;
  do
  {
    showMenu();
    printf("Enter Your Choice");
    scanf("%d", &ch);
    printf("\n\n--------------------------------------------------------------------------------------------------------");
    switch (ch)
    {
    case 1:
      printf("\n\nEnter How many Books do you want to add ?\n:");
      scanf("%d", &n);
      books = addBook(books, n);
      printf("\n\n--------------------------------------------------------------------------------------------------------");
      break;
    case 2:
      displayAllBooks(books);
      break;
    case 0:
      printf("\n\nExiting...!");
      break;

    default:
      printf("\n\nInvalid Choice na Bhaii...!");
      break;
    }
  } while (ch != 0);

  //	printf("Ha bhai Chalo dekhte hain isko bhi");
}

void showMenu()
{
  printf("\n\n--------------------------------------------------------------------------------------------------------");
  printf("\n------------------------------------: Book Management System :-------------------------------------------");
  printf("\n1) Add Books in Book System \t2) Diaplay All Books \n:=>");
  //	printf("\n--------------------------------------------------------------------------------------------------------\n");
}