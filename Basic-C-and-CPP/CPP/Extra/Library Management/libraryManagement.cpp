#include "libraryManagement.h"
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
Student::Student()
{
    rollNo = 0;
    name = "No Name";
    marks = 0;
}

Student::Student(int rollNo, string name, int marks)
{
    this->rollNo = rollNo;
    this->name = name;
    this->marks = marks;
}

Student::Student(int rollNo, string name)
{
    this->rollNo = rollNo;
    this->name = name;
}

// getters
int Student::getRollNo()
{
    return this->rollNo;
}

string Student::getName()
{
    return this->name;
}

int Student::getMarks()
{
    return this->marks;
}

// setters
void Student::setRollNo(int rollNo)
{
    this->rollNo = rollNo;
}

void Student::setName(string name)
{
    this->name = name;
}

void Student::setMarks(int marks)
{

    this->marks = marks;
}

Book::Book()
{
    this->bookId = 0;
    this->bookName = "No Name";
    this->bookAuthor = "No Name";
    this->bookPrice = 00;
}

Book::Book(int id, string Name, string author, float price)
{
    this->bookId = id;
    this->bookName = Name;
    this->bookAuthor = author;
    this->bookPrice = price;
}
// getters
int Book::getId() { return this->bookId; }
string Book::getName() { return this->bookName; }
string Book::getAuthor() { return this->bookAuthor; }
double Book::getPrice() { return this->bookPrice; }
// setters
void Book::setId(int id) { this->bookId = id; }
void Book::setName(string Name) { this->bookName = Name; }
void Book::setAuthor(string author) { this->bookAuthor = author; }
void Book::setPrice(double price) { this->bookPrice = price; }

Library::Library(int id, string libraryName, Book *Books, Student *Students)
{
    this->id = id;
    this->libraryName = libraryName;
    this->books = Books;
    this->students = Students;
}

Book *Library::getBooks() { return this->books; }
Student *Library::getStudents() { return this->students; }