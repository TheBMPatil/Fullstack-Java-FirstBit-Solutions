#include <bits/stdc++.h>
// Create object of student class (Outside SY & TY package) having roll number, name, SYMakrs and TYMarks. Add the marksof SY and TY Computer subjects and calculate grade ("A" for >=70, "B" for >=60, "C" for >=50, “Pass Class” for >=40 else “Fail”) and display the result of the student in proper format.
#include <string>
#include "sy.h"
#include "ty.h"
using namespace sy;
using namespace ty;
using namespace std;

namespace student
{

    class Student
    {
    private:
        int roll_no;
        string name;
        sy::Marks SyMarks;
        ty::Marks TyMarks;
        string grade;

    public:
        Student();
        Student(int, string, sy::Marks, ty::Marks);

        void calculateGrade();

        void display();
    };

}