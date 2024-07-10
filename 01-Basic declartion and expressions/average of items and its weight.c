/******************************************************************************

                                    Online C Compiler.
                  a C program that accepts two item's weight and number of purchases 
                  (floating point values) and calculates their average value.
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444

*******************************************************************************/

#include <stdio.h>

int main()
{
    int item1,item2;
    float weight1,weight2;
    
    printf("enter the number of item1 and its weight: ");
    scanf("%d %f",&item1,&weight1);
    
    printf("enter the number of item2 and its weight: ");
    scanf("%d %f",&item2,&weight2);
    float result= ( (item1*weight1)+(item2*weight2)  )/(item2+item1);
    
    printf("the average value is  %f\n",result);
    

    return 0;
}