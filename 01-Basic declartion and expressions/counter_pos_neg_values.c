/******************************************************************************

C program that reads 5 numbers and counts the number of positive numbers and negative numbers.
Test Data :
Input the first number: 5
Input the second number: -4
Input the third number: 10
Input the fourth number: 15
Input the fifth number: -1
Expected Output:
Number of positive numbers: 3
Number of negative numbers: 2
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    int counter_pos=0;
    int counter_neg=0;
for (int i=5;i>0;i--)
{
    printf("Enter a number: ");
    scanf("%d",&num);
    
     (num>0||num==0)? counter_pos++:counter_neg++;  
    
}
printf("counter for pos. values is %d\n",counter_pos);
printf("counter for neg. values is %d\n",counter_neg);
    return 0;
}