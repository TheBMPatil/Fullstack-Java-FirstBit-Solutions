#include <iostream>
using namespace std;
#include <string.h>
typedef struct Student
{
    int rollNo;
    char name[30];
    float marks;
    Student()
    {
        cout << "\nDefault Constructor called";
        strcpy(this->name, "Not Given");
        this->rollNo = 0;
        this->marks = 0.00;
    }

public:
    Student(char *name, int rollNo, int marks)
    {
        cout << "\nParametreized Constructor called";
        strcpy(this->name, name);
        this->rollNo = rollNo;
        this->marks = marks;
    }
    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }
    void setName(char *name)
    {
        strcpy(this->name, name);
    }
    void setMarks(float marks)
    {
        this->marks = marks;
    }

    int getRollNo()
    {
        return this->rollNo;
    }
    char *getName()
    {
        return this->name;
    }
    float getMarks()
    {
        return this->marks;
    }

    void display()
    {
        cout << "\nRoll No:" << this->rollNo;
        cout << "\nName :" << this->name;
        cout << "\nMarks :" << this->marks;
    }
} Student;

int main()
{
    Student s1, s2("Bhagvat", 96, 98);
    int rn;
    float marks;
    char name[20];

    // Called After Constructor
    cout << "\nDefault Values  Display";
    s1.display();
    s2.display();
    // Normal After Setters

    cout << "\n\nUsing Setters s1";
    cout << "\nEnter Student Roll No :";
    cin >> rn;
    s1.setRollNo(rn);

    cout << "\nEnter Student Name :";
    cin >> name;
    s1.setName(name);

    cout << "\nEnter Student Marks :";
    cin >> marks;
    s1.setMarks(marks);

    cout << "\n s1 Display";
    s1.display();

    // cout << "\n\nUsing Setters s2";
    // cout << "\nEnter Student Roll No :";
    // cin >> rn;
    // s2.setRollNo(rn);

    // cout << "\nEnter Student Name :";
    // cin >> name;
    // s2.setName(name);

    // cout << "\nEnter Student Marks :";
    // cin >> marks;
    // s2.setMarks(marks);

    // cout << "\n s2 Display";

    // s2.display();
    cout << "\n\nGetters s1";
    cout << "\nRoll No:" << s1.getRollNo() << "\tName :" << s1.getName() << "\tMarks :" << s1.getMarks();
    // cout << "\n\nGetters s2";
    // cout << "\nRoll No:" << s2.getRollNo() << "\tName :" << s2.getName() << "\tMarks :" << s2.getMarks();

    return 0;
}