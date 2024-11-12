#include "book.h"
#include <iostream>
#include <string>

using namespace std;

int size = 20;

int main() {
    Book* bookMall = new Book[size];
    hardCodedBooks(bookMall);
    int choice;

    do {
        int id;
        string auth, catg;

        choice = showMenu();

        switch (choice) {
            case 1:
                // Add a single book
                cout << "\n|--------------------------------:: Add Single Book ::---------------------------------|\n";
                bookMall = addBook(bookMall, size, 1); // Updated to pass size for resizing if needed
                cout << "|---------------------------------------------------------------------------------------|\n";
                break;

            case 2:
                // Add multiple books
                cout << "\n|------------------------------:: Add Multiple Books ::--------------------------------|\n";
                cout << "Enter the number of books you want to store: ";
                int bookQuantity;
                cin >> bookQuantity;
                bookMall = addBook(bookMall, size, bookQuantity); // Pass current size and quantity
                cout << "|-------------------------------------------------------------------------------------|\n";
                break;

            case 3:
                // Display all books
                cout << "\n|-------------------------------:: Display All Books ::-------------------------------|\n";
                displayBooks(bookMall, size);
                cout << "|-------------------------------------------------------------------------------------|\n";
                break;

            case 4:
                // Search for a book
                cout << "\n|------------------------------:: Search for a Book ::---------------------------------|\n";
                cout << "How do you want to search the book? \n 1) By Book ID \t 2) By Book Name \n";
                int srbk;
                cin >> srbk;

                if (srbk == 1) {
                    cout << "Enter the ID of the book: ";
                    cin >> id;
                    int res = searchBookByID(bookMall, size, id);
                    if (res == -1) {
                        cout << "No book found for ID: " << id << '\n';
                    } else {
                        displayOneBook(&bookMall[res]);
                    }
                } else if (srbk == 2) {
                    cout << "Enter the name of the book: ";
                    cin.ignore();
                    getline(cin, auth);
                    int res = searchBookByName(bookMall, size, auth);
                    if (res == -1) {
                        cout << "No book found for name: " << auth << '\n';
                    } else {
                        displayOneBook(&bookMall[res]);
                    }
                } else {
                    cout << "\nInvalid search option. Please choose correctly!\n";
                }
                cout << "|-------------------------------------------------------------------------------------|\n";
                break;

            case 5:
                // Update a book by ID
                cout << "\n|--------------------------------:: Update Book ::---------------------------------------|\n";
                cout << "Enter the ID of the book you want to update: ";
                cin >> id;
                updateBook(bookMall, size, id);
                cout << "|-------------------------------------------------------------------------------------|\n";
                break;

            case 6:
                // Remove a book by ID
                cout << "\n|---------------------------------: Remove Book :--------------------------------------|\n";
                cout << "Enter the ID of the book you want to delete: ";
                cin >> id;
                bookMall = removeBook(bookMall, size, id); // Update array if size changes
                cout << "|-------------------------------------------------------------------------------------|\n";
                break;

            case 7:
                // List all authors
                cout << "\n|--------------------------------: List All Authors :---------------------------------|\n";
                listAllAuthors(bookMall, size);
                cout << "\n|-------------------------------------------------------------------------------------|\n";
                break;

            case 8:
                // List books by author
                cout << "\n|---------------------------: List Books by Author :----------------------------------|\n";
                cout << "Enter the name of the author: ";
                cin.ignore();
                getline(cin, auth);
                listBooksByAuthor(bookMall, size, auth);
                cout << "\n|-------------------------------------------------------------------------------------|\n";
                break;

            case 9:
                // List all categories
                cout << "\n|-----------------------------: List All Categories :--------------------------------|\n";
                listAllCategories(bookMall, size);
                cout << "\n|-------------------------------------------------------------------------------------|\n";
                break;

            case 10:
                // List books by category
                cout << "\n|-------------------------: List Books by Category :---------------------------------|\n";
                cout << "Enter the category name: ";
                cin.ignore();
                getline(cin, catg);
                listBooksByCategory(bookMall, size, catg);
                cout << "\n|-------------------------------------------------------------------------------------|\n";
                break;

            default:
                cout << "\nInvalid choice! Please select a valid option.\n";
                break;
        }

    } while (choice != 0);

    delete[] bookMall; // Free the allocated memory
    return 0;
}
