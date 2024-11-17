// 1. Create a class Book with members as bid,bname,price and author.Add following methods:
#include <bits/stdc++.h>
using namespace std;
class Book
{
private:
    int id;
    string bname;
    string author;
    double price;
    static int count;
    static string lib_name;

public:
    Book();
    Book(int, string, string, double);
    void displayBook();

    void static showLibName();
    void static showCount();
    void static updateLibName(string);
    // ~Book();
};
