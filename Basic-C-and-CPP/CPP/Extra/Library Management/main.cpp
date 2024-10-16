#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include "libraryManagement.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	Book *books = new Book[100];
	Student *students = new Student[20];
	Library library(101, "My Library", books, students);
	Book *b = NULL;
	b = library.getBooks();
	Student *s = NULL;
	s = library.getStudents();
	return 0;
}