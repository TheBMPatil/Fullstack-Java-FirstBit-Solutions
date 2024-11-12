//include h


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "book.h"
namespace book {
	extern int size;
	static int bookIndex = 0;


// Structure
// Show Menu Function
	int showMenu() {
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
	void Book::hardCodesdBooks(Book *books) { //	void  Book::hardCodedBooks(Book* books) {


		books[0].setId(1);
		books[0].setTitle("The Lord of the Rings");
		books[0].setPrice(29.99);
		books[0].setRating(5.1);
		books[0].setAuthor("J.R.R. Tolkien");
		books[0].setCategory("Fantasy");

		books[1].setId(2);
		books[1].setTitle("Pride and Prejudice");
		books[1].setPrice(14.99);
		books[1].setRating(4.2);
		books[1].setAuthor("Jane Austen");
		books[1].setCategory("Romance");

		books[2].setId(3);
		books[2].setTitle("To Kill a Mockingbird");
		books[2].setPrice(18.99);
		books[2].setRating(5.6);
		books[2].setAuthor("Harper Lee");
		books[2].setCategory("Fiction");

		books[3].setId(4);
		books[3].setTitle("1984");
		books[3].setPrice(12.99);
		books[3].setRating(4.9);
		books[3].setAuthor("George Orwell");
		books[3].setCategory("Dystopian");

		books[4].setId(5);
		books[4].setTitle("The Hitchhiker's Guide to the Galaxy");
		books[4].setPrice(15.99);
		books[4].setRating(5.3);
		books[4].setAuthor("Douglas Adams");
		books[4].setCategory("Science Fiction");

		books[5].setId(6);
		books[5].setTitle("Harry Potter and the Sorcerer's Stone");
		books[5].setPrice(22.99);
		books[5].setRating(5.8);
		books[5].setAuthor("J.K. Rowling");
		books[5].setCategory("Fantasy");

		books[6].setId(7);
		books[6].setTitle("The Great Gatsby");
		books[6].setPrice(16.99);
		books[6].setRating(4.6);
		books[6].setAuthor("F. Scott Fitzgerald");
		books[6].setCategory("Classics");

		books[7].setId(8);
		books[7].setTitle("The Catcher in the Rye");
		books[7].setPrice(13.99);
		books[7].setRating(4.8);
		books[7].setAuthor("J.D. Salinger");
		books[7].setCategory("Classics");

		books[8].setId(9);
		books[8].setTitle("The Alchemist");
		books[8].setPrice(11.99);
		books[8].setRating(5.3);
		books[8].setAuthor("Paulo Coelho");
		books[8].setCategory("Philosophy");

		books[9].setId(10);
		books[9].setTitle("The Little Prince");
		books[9].setPrice(10.99);
		books[9].setRating(5.6);
		books[9].setAuthor("Antoine de Saint-Exupéry");
		books[9].setCategory("Children's Literature");

		// Additional 10 Books
		books[10].setId(11);
		books[10].setTitle("War and Peace");
		books[10].setPrice(20.99);
		books[10].setRating(4.9);
		books[10].setAuthor("Leo Tolstoy");
		books[10].setCategory("Historical Fiction");

		books[11].setId(12);
		books[11].setTitle("Moby Dick");
		books[11].setPrice(17.50);
		books[11].setRating(4.5);
		books[11].setAuthor("Herman Melville");
		books[11].setCategory("Adventure");

		books[12].setId(13);
		books[12].setTitle("The Odyssey");
		books[12].setPrice(13.99);
		books[12].setRating(4.8);
		books[12].setAuthor("Homer");
		books[12].setCategory("Epic");

		books[13].setId(14);
		books[13].setTitle("Brave New World");
		books[13].setPrice(15.99);
		books[13].setRating(5.2);
		books[13].setAuthor("Aldous Huxley");
		books[13].setCategory("Science Fiction");

		books[14].setId(15);
		books[14].setTitle("Frankenstein");
		books[14].setPrice(11.99);
		books[14].setRating(4.7);
		books[14].setAuthor("Mary Shelley");
		books[14].setCategory("Horror");

		books[15].setId(16);
		books[15].setTitle("The Divine Comedy");
		books[15].setPrice(18.99);
		books[15].setRating(5.4);
		books[15].setAuthor("Dante Alighieri");
		books[15].setCategory("Poetry");

		books[16].setId(17);
		books[16].setTitle("Don Quixote");
		books[16].setPrice(19.99);
		books[16].setRating(4.9);
		books[16].setAuthor("Miguel de Cervantes");
		books[16].setCategory("Classics");

		books[17].setId(18);
		books[17].setTitle("Crime and Punishment");
		books[17].setPrice(14.99);
		books[17].setRating(5.1);
		books[17].setAuthor("Fyodor Dostoevsky");
		books[17].setCategory("Psychological Fiction");

		books[18].setId(19);
		books[18].setTitle("Jane Eyre");
		books[18].setPrice(12.99);
		books[18].setRating(4.8);
		books[18].setAuthor("Charlotte Brontë");
		books[18].setCategory("Gothic Fiction");

		books[19].setId(20);
		books[19].setTitle("The Hobbit");
		books[19].setPrice(21.99);
		books[19].setRating(5.7);
		books[19].setAuthor("J.R.R. Tolkien");
		books[19].setCategory("Fantasy");
	}



	void Book::addBookHelper(Book* b, int bookQuantity) {
		for (int i = 0; i < bookQuantity; i++, bookIndex++) {
			cout << "\n|--------------------------------:: Enter Book " << bookIndex + 1 << " Data ::------------------------------|\n";

			// Input for Book ID
			int id;
			cout << "| Enter Book ID           : ";
			cin >> id;
			b[bookIndex].setId(id);

			// Input for Book Name
			string title;
			cout << "| Enter Book Name         : ";
			cin.ignore(); // Clear newline from input buffer
			getline(cin, title);
			b[bookIndex].setTitle(title);

			// Input for Book Price
			float price;
			cout << "| Enter Book Price        : ";
			cin >> price;
			b[bookIndex].setPrice(price);

			// Input for Book Rating
			float rating;
			do {
				cout << "| Enter Book Rating (1-5) : ";
				cin >> rating;
				if (rating > 5) {
					cout << "\n\nInvalid Input. Please enter a rating between 1 and 5.\n";
				}
			} while (rating > 5);
			b[bookIndex].setRating(rating);

			// Input for Book Author Name
			string author;
			cout << "| Enter Book Author Name  : ";
			cin.ignore(); // Clear newline from input buffer
			getline(cin, author);
			b[bookIndex].setAuthor(author);

			// Input for Book Category Name
			string category;
			cout << "| Enter Book Category     : ";
			getline(cin, category);
			b[bookIndex].setCategory(category);

			cout << "|--------------------------------------------------------------------------------------|\n";
		}
	}


// Add Book

	Book* Book::addBook(Book* b, int& bookQuantity) {
		cout << "\n|--------------------------------:: Adding Books ::------------------------------------|\n";

		// Check if reallocation is needed
		if (size - bookIndex < bookQuantity) {
			size = static_cast<int>(size * 1.5) + bookQuantity; // Adjust the size dynamically
			cout << "| Reallocating memory to hold more books...\n";

			// Reallocate memory using new (C++ way)
			Book* temp = new Book[size];

			if (temp == nullptr) {
				cout << "| Reallocation Failed! Not enough memory available.\n";
				cout << "|-------------------------------------------------------------------------------------|\n";
				return b; // Return original memory block if reallocation fails
			} else {
				delete[] b; // Free the old memory block
				b = temp; // Assign new block if reallocation is successful
				cout << "| Reallocation Successful. New size: " << size << "\n";
				addBookHelper(b, bookQuantity); // Add books using helper function
				cout << "|-------------------------------------------------------------------------------------|\n";
				return b;
			}
		} else if (size > bookQuantity && bookIndex < size) {
			// No need to reallocate, just add books
			cout << "| Adding books without reallocation...\n";
			addBookHelper(b, bookQuantity); // Add books using helper function
			cout << "|-------------------------------------------------------------------------------------|\n";
			return b;
		}

		cout << "|-------------------------------------------------------------------------------------|\n";
		return b; // Return the updated book collection
	}

// Display On Book
	void Book::displayOneBook(Book* b) {
		cout << "\n\n|----------------------------------:: Book Data ::------------------------------------|\n";
		cout << "| Book ID       : %-67d |\n", b->getId());
		cout << "| Book Name     : %-67s |\n", b->getTitle().c_str());
		cout << "| Book Price    : %-67.2f |\n", b->getPrice());
		cout << "| Book Rating   : %-67.2f |\n", b->getRating());
		cout << "| Book Author   : %-67s |\n", b->getAuthor().c_str());
		cout << "| Book Category : %-67s |\n", b->getCategory().c_str());
		cout << "|-------------------------------------------------------------------------------------|\n";
	}

// Display All Books

	void Book::displayBooks(Book* b) {
		cout << "\nAll Books are:\n";

		for (int i = 0; i < bookIndex; i++) {
			cout << "\n\n|----------------------------------:: Book Data ::------------------------------------|\n";
			cout << "| Book ID       : %-67d |\n", b[i].getId());
			cout << "| Book Name     : %-67s |\n", b[i].getTitle().c_str());
			cout << "| Book Price    : %-67.2f |\n", b[i].getPrice());
			cout << "| Book Rating   : %-67.2f |\n", b[i].getRating());
			cout << "| Book Author   : %-67s |\n", b[i].getAuthor().c_str());
			cout << "| Book Category : %-67s |\n", b[i].getCategory().c_str());
			cout << "|-------------------------------------------------------------------------------------|\n";
		}
	}

// Display Top 3
	void Book::displayTop3(Book* b) {
		cout << "\nTop 3 Books are:\n";

		for (int i = 0; i < 3 && i < bookIndex; i++) {
			cout << "\n\n|----------------------------------:: Book Data ::------------------------------------|\n";
			cout << "| Book ID       : %-67d |\n", b[i].getId());
			cout << "| Book Name     : %-67s |\n", b[i].getTitle().c_str());
			cout << "| Book Price    : %-67.2f |\n", b[i].getPrice());
			cout << "| Book Rating   : %-67.2f |\n", b[i].getRating());
			cout << "| Book Author   : %-67s |\n", b[i].getAuthor().c_str());
			cout << "| Book Category : %-67s |\n", b[i].getCategory().c_str());
			cout << "|-------------------------------------------------------------------------------------|\n";
		}
	}

// Search Book By ID
	int Book::searchBookByID(Book *b, int id) {
		for (int i = 0; i < bookIndex; i++) {
			if (b[i].getId() == id) {  // Using getter instead of direct member access
				return i;
			}
		}
		return -1;  // Return -1 if book not found
	}


// Search Book By Name
	int Book:: searchBookByName(Book *b, const char bookTitle[]) {
		for (int i = 0; i < bookIndex; i++) {
			if (strcasecmp(b[i].getTitle().c_str(), bookTitle) == 0) {  // Using getter instead of direct member access
				return i;
			}
		}
		return -1;  // Return -1 if book not found
	}


// Update Book Price & rating
	void Book::updateBook(Book* b, int id) {
		int bk = searchBookByID(b, id);
		if (bk == -1) {
			std::cout << "\nNo Book Found with id: " << id << std::endl;
		} else {
			// Give choice to change one by one
			std::cout << "\nWhat do you want to update:\n1) Price \t2) Rating \n\tEnter Your Choice: ";
			int upChoice;
			std::cin >> upChoice;

			if (upChoice == 1) {
				// Using getter to display old price and setter to update the price
				std::cout << "\nOld price is: " << b[bk].getPrice() << "\nEnter new Price: ";
				float newPrice;
				std::cin >> newPrice;
				b[bk].setPrice(newPrice);  // Using setter to update the price
			} else if (upChoice == 2) {
				// Using getter to display old rating and setter to update the rating
				std::cout << "\nOld Rating is: " << b[bk].getRating() << "\nEnter new rating: ";
				float newRating;
				std::cin >> newRating;
				b[bk].setRating(newRating);  // Using setter to update the rating
			} else {
				std::cout << "\n\nInvalid Choice.....!" << std::endl;
			}
		}
	}


// Remove / Delete Book
	void Book::removeBook(Book* b, int id) {
		int bk = searchBookByID(b, id);  // Search for the book by ID
		if (bk == -1) {
			std::cout << "\nNo Book Found with id: " << id << "\n";
		} else {
			// Shift the books left to remove the book at index 'bk'
			for (int i = bk; i < bookIndex - 1; i++) {
				b[i] = b[i + 1];  // Move the book one position to the left
			}
			bookIndex--;  // Decrease the book count after removal
			std::cout << "\nBook with ID " << id << " has been removed successfully.\n";
		}
	}

// Displya All Authors
	void Book::listAllAuthors(Book* books, int bookIndex) {
		std::cout << "\nList of All Authors:\n";
		int cnt = 1;

		for (int i = 0; i < bookIndex; i++) {
			std::cout << cnt++ << ") " << books[i].getAuthor() << std::endl;
		}
	}


// Displya All category
	void Book::listAllCategories(Book* books, int bookIndex) {
		std::cout << "\nList of All Categories:\n";
		int cnt = 1;

		for (int i = 0; i < bookIndex; i++) {
			std::cout << cnt++ << ") " << books[i].getCategory() << std::endl;
		}
	}


// Search By author
	void listBooksByAuthor(Book *b, char author[]) {
		printf("\nList of Books By : %s", author);
		for (int i = 0; i < bookIndex; i++) {
			if (strcasecmp(b[i].author, author) == 0) {
				displayOneBook(&b[i]);
			}
		}
	}

// List Books By Category
	void listBooksByCategory(Book *b, char category[]) {
		int i = 0;
		printf("\nList of Books By : %s", category);
		for (; i < bookIndex; i++) {
			if (strcasecmp(b[i].category, category) == 0) {
				displayOneBook(&b[i]);
			}
		}
		// if (i == bookIndex)
		// {
		//     printf("\n No Book Found of this Category...!\n");
		// }
	}

// Sort Book By Rating
	Book *sortbookMallByRating(Book *b, char AD) {
		Book *b1 = (Book *)malloc(sizeof(Book) * bookIndex);
		// Book b1[bookIndex];
		for (int i = 0; i < bookIndex; i++) {
			b1[i] = b[i];
		}
		switch (AD) {
			case 'A':
				for (int i = 0; i < bookIndex; i++) {
					for (int j = 0; j < bookIndex - 1; j++) {
						if (b1[j].rating > b1[j + 1].rating) {
							Book temp = b1[j];
							b1[j] = b1[j + 1];
							b1[j + 1] = temp;
						}
					}
				}
				return b1;
			case 'D':
				for (int i = 0; i < bookIndex; i++) {
					for (int j = 0; j < bookIndex - 1; j++) {
						if (b1[j].rating < b1[j + 1].rating) {
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
	Book *sortbookMallPrice(Book *b, char AD) {
		Book *b1 = (Book *)malloc(sizeof(Book) * bookIndex);
		// Book b1[bookIndex];
		for (int i = 0; i < bookIndex; i++) {
			b1[i] = b[i];
		}
		switch (AD) {
			case 'A':
				for (int i = 0; i < bookIndex; i++) {
					for (int j = 0; j < bookIndex - 1; j++) {
						if (b1[j].price > b1[j + 1].price) {
							Book temp = b1[j];
							b1[j] = b1[j + 1];
							b1[j + 1] = temp;
						}
					}
				}
				return b1;

			case 'D':
				for (int i = 0; i < bookIndex; i++) {
					for (int j = 0; j < bookIndex - 1; j++) {
						if (b1[j].price < b1[j + 1].price) {
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
}
