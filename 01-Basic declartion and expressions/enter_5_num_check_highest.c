/******************************************************************************

                   C program to print all numbers between 1 and 100 which are divided by a specified number 
                   and the remainder will be 3.
Test Data :
Input an integer: 25
Expected Output:
3
28
53
78              

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int num[5];
    int max=0;
    int iter=0;
    
    for (int i=1;i<=5;i++)
    {
    printf("enter a num %d: ",i);
    scanf("%d",&num[i]);

    }
    
    for(int i=1; i<=5;i++)
    {
       if (num[i]>max)
       {
           max=num[i];
           iter=i;
       }
    }
    printf("the highest one is: %d, the position is %d",max,iter);
    


    return 0;
}