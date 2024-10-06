#include <stdio.h>
#include <stdlib.h>
#include "book.h"

int size=20;
int main() {
	Book *bookMall = (Book *)malloc(sizeof(Book) * size);
	hardCodedBooks(bookMall);
	int choice;
	do {
		int sCh;
		char AD;
		int id;
		char auth[50], catg[50];

		choice = showMenu();
		Book *bs;

		switch (choice) {
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

				if (srbk == 1) {
					printf("Enter the ID of the book: ");
					scanf("%d", &id);
					int res = searchBookByID(bookMall, id); // Search by ID
					if (res == -1) {
						printf("No book found for ID: %d\n", id); // Book not found
					} else {
						displayOneBook(&bookMall[res]); // Display the found book
					}
				} else if (srbk == 2) {
					char bkNm[50];
					printf("Enter the name of the book: ");
					fflush(stdin);                              // Clear input buffer
					gets(bkNm);                                 // Get book name input
					int res = searchBookByName(bookMall, bkNm); // Search by name
					if (res == -1) {
						printf("No book found for name: %s\n", bkNm); // Book not found
					} else {
						displayOneBook(&bookMall[res]); // Display the found book
					}
				} else {
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

				switch (sCh) {
					case 1:
						printf("Enter Order: 'A' for Ascending, 'D' for Descending: ");
						fflush(stdin);
						scanf("%c", &AD);                        // Accept order (Ascending or Descending)
						bs = sortbookMallByRating(bookMall, AD); // Sort by rating
						if (bs != NULL) {
							displayBooks(bs); // Display sorted books
							free(bs);         // Free allocated memory for sorted books
						}
						break;

					case 2:
						printf("Enter Order: 'A' for Ascending, 'D' for Descending: ");
						fflush(stdin);
						scanf("%c", &AD);                     // Accept order (Ascending or Descending)
						bs = sortbookMallPrice(bookMall, AD); // Sort by price
						if (bs != NULL) {
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

				switch (sCh) {
					case 1:
						printf("Enter Order: 'A' for Highest Rating, 'D' for Lowest Rating: ");
						fflush(stdin);
						scanf("%c", &AD);                        // Accept order
						bs = sortbookMallByRating(bookMall, AD); // Sort by rating
						if (bs != NULL) {
							displayTop3(bs); // Display top 3 books
							free(bs);        // Free memory
						}
						break;

					case 2:
						printf("Enter Order: 'A' for Highest Price, 'D' for Lowest Price: ");
						fflush(stdin);
						scanf("%c", &AD);                     // Accept order
						bs = sortbookMallPrice(bookMall, AD); // Sort by price
						if (bs != NULL) {
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
	return 0;
}
