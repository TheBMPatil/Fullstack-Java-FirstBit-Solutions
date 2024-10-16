#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Book
{
	int bookId;
	string bookName;
	string bookAuthor;
	double bookPrice;

public:
	Book();
	Book(int, string, string, float);
	// getters
	int getId();
	string getName();
	string getAuthor();
	double getPrice();
	// setters
	void setId(int);
	void setName(string);
	void setAuthor(string);
	void setPrice(double);
};

class Student
{
	int rollNo;
	string name;
	int marks;

public:
	Student();
	Student(int, string, int);
	Student(int, string);

	// getters
	int getRollNo();
	string getName();
	int getMarks();

	// setters
	void setRollNo(int);
	void setName(string);
	void setMarks(int);
};

class Library
{
	int id;
	string libraryName;
	Book *books;
	Student *students;

public:
	Library(int, string, Book *, Student *);

	Book *getBooks();
	Student *getStudents();
};