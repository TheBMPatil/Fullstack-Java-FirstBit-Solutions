#include "book.h"

int main()
{
    Book b1(1, "Ikigai", "Byrne", 149.99);
    b1.displayBook();
    Book::showCount();
    cout << "\n";
    Book b2;
    b2.displayBook();
    Book::showCount();
    cout << "\n";

    Book b3(2, "The Secret", "Rhonda", 199.99);
    b3.displayBook();
    Book::showCount();

    cout << "\n";
    Book::showLibName();
    Book::updateLibName("The World Library");
    cout << "\nUpdated : ";
    Book::showLibName();
    return 0;
}