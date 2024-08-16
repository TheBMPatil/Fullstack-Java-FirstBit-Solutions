#include <stdio.h>
void main()
{
    float baseSalary = 7777.0, totalSalary;
    float DA, TA, HRA;
    if (baseSalary <= 5000)
    {
        DA = 0.10 * baseSalary;
        // printf(" DA %f \n", DA);
        TA = 0.20 * baseSalary;
        // printf(" TA %f \n", TA);
        HRA = 0.25 * baseSalary;
        // printf(" HRA %f \n", HRA);
        //  totalSalary = DA + TA + HRA + baseSalary;
        // printf("Total Salary for bsae %f is : %f ", baseSalary, totalSalary);
    }
    else
    {
        DA = 0.15 * baseSalary;
        // printf(" DA %f \n", DA);
        TA = 0.25 * baseSalary;
        // printf(" TA %f \n", TA);
        HRA = 0.30 * baseSalary;
        // printf(" HRA %f \n", HRA);
        // float totalSalary = DA + TA + HRA + baseSalary;
        // printf("Total Salary for bsae %f is : %f ", baseSalary, totalSalary);
    }
    totalSalary = DA + TA + HRA + baseSalary;
    printf("Total Salary for bsae %f is : %f ", baseSalary, totalSalary);
}