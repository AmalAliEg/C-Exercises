/******************************************************************************

                                    Online C Compiler.
                 a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. 
                 Print the ID and salary (with two decimal places) of the employee for a particular month.
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00

*******************************************************************************/

#include <stdio.h>

int main()
{
    int ID;
    int Hr;

    float SalaryPerHr=15000;
    printf("enter your id: ");
    scanf("%c\n",&ID);
    
    printf("enter worked hours: ");
    scanf("%d",&Hr);
        
    printf("your ID is %c.\nyour Salary is %.2f",ID,SalaryPerHr*Hr);

    
    
    
    return 0;
}