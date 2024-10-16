using namespace std;
#include <bits/stdc++.h>

class Exam
{
    int marks;

public:
    void setMarks(int marks) { this->marks = marks; }
    int getMarks() { return this->marks; }
    void giveGrades(int grade)
    {
        if (grade > 80)
        {
            cout << "\nExcellent";
        }
        else if (grade > 65 && grade < 80)
        {
            cout << "\nGood";
        }
        else if (grade > 50 && grade < 65)
        {
            cout << "\nPass";
        }
        else
        {
            cout << "\nFail";
        }
    }
};

class Student
{
    int rollNo;
    string name;
    Exam *exams = new Exam[3];

public:
    Student()
    {
        this->name = "Not Given";
        this->rollNo = 0;
        this->exams[0].setMarks(0);
        this->exams[1].setMarks(0);
        this->exams[2].setMarks(0);
    }

public:
    Student(char *name, int rollNo, Exam *exams)
    {
        this->name = name;
        this->rollNo = rollNo;
        this->exams = exams;
    }
    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }
    void setName(char *name)
    {
        this->name = name;
    }
    void setMarks(Exam *exams)
    {
        this->exams = exams;
    }

    int getRollNo()
    {
        return this->rollNo;
    }
    string getName()
    {
        return this->name;
    }
    Exam *getMarks()
    {
        return this->exams;
    }

    void display()
    {
        cout << "\nRoll No:" << this->rollNo;
        cout << "\nName :" << this->name;
        cout << "\nMarks 1 :" << this->exams[0].getMarks();
        cout << "\nMarks 2 :" << this->exams[1].getMarks();
        cout << "\nMarks 3 :" << this->exams[2].getMarks();
    }

    int percentageCalc()
    {
        return (this->exams[0].getMarks() + this->exams[1].getMarks() + this->exams[2].getMarks()) / 3;
    }
};

// class ResultMgt
// {
//     Student s;

// public:

// };

int main()
{
    Exam exams[3];
    exams[0].setMarks(78);
    exams[1].setMarks(89);
    exams[2].setMarks(56);
    Student s1("Bhagvat", 96, exams);
    cout << "\nStudent Data : ";
    s1.display();

    int grade = s1.percentageCalc();
    cout << "\nPercentage :" << grade;
    cout << "\nYour grade status: ";
    exams->giveGrades(grade);
    return 0;
}