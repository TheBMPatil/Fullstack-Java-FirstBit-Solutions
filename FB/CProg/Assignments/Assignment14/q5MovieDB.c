// 5. Movie Database: Create a program that uses structures to manage a movie database with details like title, director, release year, and genre. Allow users to add, search for, and update movie records.

#include <stdio.h>

typedef struct Movie
{
    char title[20];
    char director[20];
    int releseYear;
    char gener[20];
} Movie;

void addMovie(Movie *movie){}