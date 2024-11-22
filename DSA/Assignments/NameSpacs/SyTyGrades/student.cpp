#include "student.h"

namespace student
{

    Student::Student()
    {
        this->name = "No Name";
        this->roll_no = 0;
        this->SyMarks;
        this->TyMarks;
        this->grade = "undefined";
    }
    Student::Student(int rollNo, string Name, sy::Marks syMarks, ty::Marks tyMarks)
        : roll_no(rollNo), name(Name), SyMarks(syMarks), TyMarks(tyMarks)
    {
    }

    // Student::Student(int rollNo, string Name, sy::Marks syMarks, ty::Marks tyMarks)
    // {
    //     this->roll_no = rollNo;
    //     this->name = Name;
    //     this->SyMarks = SyMarks;
    //     this->TyMarks = TyMarks;
    // }

    // void Student::display()
    // {
    //     cout << "Roll No : " << this->roll_no << endl;
    //     cout << "Name  : " << this->name << endl;
    //     cout << "SY Marks :: " << endl;
    //     cout << "CompTotal:" << this->SyMarks.getComputerTotal() << endl;
    //     cout << "ElectronicsTotal:" << this->SyMarks.getElectronicsTotal() << endl;
    //     cout << "MathsTotal:" << this->SyMarks.getMathsTotal() << endl;
    // }
    void Student::display()
    {
        cout << "Roll No : " << roll_no << endl;
        cout << "Name : " << name << endl;
        cout << "SY Marks: " << SyMarks.getComputerTotal() << ", "
             << SyMarks.getMathsTotal() << ", " << SyMarks.getElectronicsTotal() << endl;
        cout << "TY Marks: " << TyMarks.getTheory() << ", " << TyMarks.getPractical() << endl;
        cout << "Grade: " << grade << endl;
    }

    void Student::calculateGrade()
    {
        int total = SyMarks.getComputerTotal() + TyMarks.getPractical();
        total /= 2;
        if (total >= 70)
        {
            grade = "A";
        }
        else if (total >= 60)
        {
            grade = "B";
        }
        else if (total >= 50)
        {
            grade = "C";
        }
        else if (total >= 40)
        {
            grade = "Pass Class";
        }
        else
        {
            grade = "Fail";
        }
    }

}