#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

namespace book {

	extern int size; // Adjust size as needed for the array

	class Book {
		private:
			int bId;
			string bookTitle;
			float price;
			float rating;
			string author;
			string category;

		public:
			// Constructors
			Book();
			Book(int, string, float, float, string, string );

			// Getters and Setters
			int getId() const;
			void setId(int id);

			string getTitle() const;
			void setTitle(const string& );

			float getPrice() const;
			void setPrice(float );

			float getRating() const;
			void setRating(float );

			string getAuthor() const;
			void setAuthor(const string& );

			string getCategory() const;
			void setCategory(const string& );

			// Display functions
			void display() const;
			static void displayTop3(Book * int );

			// Static Helper functions
			static void hardCodedBooks(Book *);
			static void addBookHelper(Book *,int );
			static Book* searchBookByName(Book *,  const string& );
			static Book* searchBookByID(Book *, int id);
			static void updateBook(Book*,  int id);
			static void removeBook(Book *, int id);

			static void listAllAuthors(Book *);
			static void listAllCategories(Book *);
			static void listBooksByAuthor(Book *, const string& );
			static void listBooksByCategory(Book *, const string& );

			static void sortBooksByRating(Book *,  char );
			static void sortBooksByPrice(Book *,  char );

	};
	int showMenu();
}

#endif // BOOK_H
