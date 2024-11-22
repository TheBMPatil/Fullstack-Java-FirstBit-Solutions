#include "student.h"
#include "sy.h"
#include "ty.h"
using namespace student;
using namespace sy;
using namespace ty;
int main()
{
    sy::Marks syMarks(45, 65, 43);
    ty::Marks tyMarks(75, 83);
    Student *s1 = new Student(12, "Bhagvat", syMarks, tyMarks);
    s1->calculateGrade();
    s1->display();
    return 0;
}