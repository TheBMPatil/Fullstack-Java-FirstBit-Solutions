#include <bits/stdc++.h>
using namespace std;

// 1.  Accept 5 Subject Mark’s & calculate Total marks & Average.
int calTotalMarks(int marks[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += marks[i];
    }
    return total;
}

int calAvgOfMarks(int marks[], int n)
{
    // int total = calTotalMarks(marks, n);
    // int avg = total / n;
    // return avg;
    return calTotalMarks(marks, n) / n;
}

int main()
{
    int marks[5];
    cout << "Enter Marks of student : " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks of sub " << i + 1 << " :" << endl;
        cin >> marks[i];
    }

    int totalMarks = calTotalMarks(marks, 5);
    int avg = calAvgOfMarks(marks, 5);
    cout << "\nTotal Marks  : " << totalMarks << endl;
    cout << "Average of marks : " << avg << endl;
}