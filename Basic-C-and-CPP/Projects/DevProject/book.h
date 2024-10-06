//All the declarations
//int size = 20;
//static int bookIndex = 0;



typedef struct Book {
	int bId;
	char bookTitle[50];
	float price;
	float rating;
	char author[50];
	char category[50];
} Book;

int showMenu();

void hardCodedBooks(Book *);

void addBookHelper(Book *, int );
Book *addBook(Book *, int );
void displayOneBook(Book *);
void displayBooks(Book *);
void displayTop3(Book *);
int searchBookByName(Book *, char []);
int searchBookByID(Book *, int ) ;
void updateBook(Book *, int );
void removeBook(Book *, int );

void listAllAuthors(Book *);
void listAllCategories(Book *);
void listBooksByAuthor(Book *, char []);

void listBooksByCategory(Book *, char []);
Book *sortbookMallByRating(Book *, char);
Book *sortbookMallPrice(Book *, char );
