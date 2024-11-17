// 1. Create a class Book with members as bid,bname,price and author.Add following methods:
// a. Constructor (Support both parameterized and parameterless)
// b. Destructor
// c. ShowBook
// d. Add static variable count and also maintain count of objects created.

#include "book.h"
string Book::lib_name = "My Library";
int Book::count = 0;
Book::Book()
{
    this->author = "Not given";
    this->bname = "Not given";
    this->price = 0.0;
    this->id = 0;
    count++;
}
Book::Book(int id, string name, string author, double price)
{
    count++;
    this->author = author;
    this->bname = name;
    this->price = price;
    this->id = id;
}

void Book::displayBook()
{
    cout << "\nBook Id     : " << this->id;
    cout << "\nBook Name   : " << this->bname;
    cout << "\nBook Author : " << this->author;
    cout << "\nBook Price  : " << this->price;
}

void Book::showLibName()
{
    cout << "\nLibrary Name :" << lib_name;
}

void Book::updateLibName(string libname)
{
    lib_name = libname;
}

void Book::showCount()
{
    cout << "\nObject Count :" << count;
}
