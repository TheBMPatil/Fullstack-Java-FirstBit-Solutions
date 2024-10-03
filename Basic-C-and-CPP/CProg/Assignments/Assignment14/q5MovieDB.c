// 5. Movie Database: Create a program that uses structures to manage a movie database with details like title, director, release year, and genre. Allow users to add, search for, and update movie records.
#include <stdio.h>
#include <string.h>

int showMenu();
int size = 25;
int movieIndex = 0;

// Structure
typedef struct Movie
{
    char title[20];
    char director[20];
    int releseYear;
    char gener[20];
    float rating;
    float collection;
} Movie;

// Add One movie record
void addMovie(Movie *movie)
{
    printf("\nEnter The Title of the movie :");
    fflush(stdin);
    gets(movie->title);
    printf("\nEnter Name Of Director :");
    fflush(stdin);
    gets(movie->director);
    printf("\nEnter Release Year of movie:");
    scanf("%d", &movie->releseYear);
    printf("\nEnter Genere of movie :");
    fflush(stdin);
    gets(movie->gener);
    do
    {
        printf("\nEnter Rating of the Movie (1-5) :");
        scanf("%f", &movie->rating);
        if (movie->rating > 5)
        {
            printf("\nInvalid Input...!");
        }

    } while (movie->rating > 5);

    printf("\nEnter Collection of the Movie :");
    scanf("%f", &movie->collection);
}

// Add Multiple Movies
void addMovies(Movie *movies, int noOfMovies)
{
    for (int i = 0; i < noOfMovies && i < size; i++, movieIndex++)
    {
        addMovie(&movies[movieIndex]);
    }
}

// Display One Movie
void displayOne(Movie *movie)
{
    printf("\nTitle of the movie \t: %s", movie->title);
    printf("\nDirector of the movie \t: %s", movie->director);
    printf("\nRelease Year of the movie \t: %d", movie->releseYear);
    printf("\nGenere of the movie \t: %s", movie->gener);
    printf("\nRating of the movie \t: %.1f", movie->rating);
    printf("\nCollection of the movie \t: %.2f \n", movie->collection);
}

// Display All Movies
void displayAll(Movie *movies)
{
    for (int i = 0; i < movieIndex; i++)
    {
        displayOne(&movies[i]);
    }
}

// Search By Movie Name
int searchMovieByTitle(Movie *movies, char title[])
{
    for (int i = 0; i < movieIndex; i++)
    {
        if (strcasecmp(movies[i].title, title) == 0)
        {
            return i;
        }
    }
    return -1;
}

// Update movie
void updateMovie(Movie *movies, char title[])
{
    int idx = searchMovieByTitle(movies, title);
    if (idx == -1)
    {
        printf("\nNo Movie Found of name : %s\n", title);
    }
    else
    {
        printf("\n:: Update Movie ::");
        printf("\nOld Rating is  : %.2f \nEnter New Rating :", movies[idx].rating);
        scanf("%f", &movies[idx].rating);
        printf("\nOld Collection is  : %.2f \nEnter New Collection :", movies[idx].collection);
        scanf("%f", &movies[idx].collection);
        printf("\nUpdated Movie Data \n");
        displayOne(&movies[idx]);
    }
}

// Main Fun
void main()
{
    Movie movies[size];
    int choice, noOfMovies, idx;
    char title[20];
    do
    {
        choice = showMenu();
        switch (choice)
        {
        case 1:
            printf("\nEnter Data Of One Movie");
            addMovie(&movies[movieIndex++]);
            break;
        case 2:
            printf("\nEnter How Many Movies data you want to store : ");
            scanf("%d", &noOfMovies);
            addMovies(movies, noOfMovies);
            break;
        case 3:
            displayAll(movies);
            break;
        case 4:
            printf("\nEnter The title of the movie you want to search :");
            fflush(stdin);
            gets(title);
            idx = searchMovieByTitle(movies, title);
            if (idx == -1)
            {
                printf("\nNo Movie Found of name %s", title);
            }
            else
            {
                displayOne(&movies[idx]);
            }
            break;
        case 5:
            printf("\nEnter The title of the movie you want to Update");
            fflush(stdin);
            gets(title);
            updateMovie(movies, title);
            break;
        case 0:
            printf("\n\nExiting..................");
            break;
        default:
            printf("\n\nInvalid Choice.........!");
            break;
        }
    } while (choice != 0);

    // printf("\nHello");
}

// Show Menu Fun
int showMenu()
{
    int ch;
    printf("\n \t\tMenu ");
    // Allow users to add, search for, and update movie records.
    printf("\n1) Add one Movie data \t2) Add Multiple Movies \t3) Display all movies \n4) Search Movie By Name \t5) Update Movie \n \t:");
    scanf("%d", &ch);
    return ch;
}