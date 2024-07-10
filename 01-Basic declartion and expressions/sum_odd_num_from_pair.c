/******************************************************************************

                   C program to compute the sum of consecutive odd numbers from a given pair of integers.
Test Data :
Input a pair of numbers (for example 10,2):
Input first number of the pair: 10
Input second number of the pair: 2
Expected Output:
List of odd numbers: 3
5
7
9
Sum=24    

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int num1;
    int num2;
    int sum=0;
    printf("enter a num 1: ");
    scanf("%d",&num1);

    printf("enter a num 2: ");
    scanf("%d",&num2);

    //check which is higher
    if (num1>num2)
    {
        num1+=num2;
        num2=num1-num2;
        num1-=num2;
        
    }
// printf("num1 %d",num1);
// printf("num2 %d",num2);
 
    for(int i=num1; i<=num2;i++)
    {
       if ( (i%2) )
       {
            sum+=i;
       }
    }
    printf("the summation is: %d\n", sum);



    return 0;
}