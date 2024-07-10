/******************************************************************************

                    C program to check whether a given integer is positive even, 
                    negative even, positive odd or negative odd. 
                    Print even if the number is 0.
Test Data :
Input an integer: 13
Expected Output:
Positive Odd                    

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("enter a num: ");
    scanf("%d",&num);
    

    if (!num)
    {
        printf("even");
    }
        
    
    else if (num<0  && num%2==0)    
    {
        printf("negative even ");
        
    }
    else if(num>0 && num%2==0)
    {
        printf("postive even ");

    }
    else if(num<0 && num%2!=0 )    
    {
        printf("negative odd ");
        
    }
    else if(num>0  && num%2!=0 )
    {
        printf("postive odd ");

    }

    return 0;
}