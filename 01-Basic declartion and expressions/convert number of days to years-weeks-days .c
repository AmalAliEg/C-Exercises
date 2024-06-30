/******************************************************************************

                                    Online C Compiler.
                  program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3

*******************************************************************************/

#include <stdio.h>

int main()
{
    int days;
    printf("enter the days: ");
    scanf("%d",&days);
    printf("the number of years %d\n",days/365);
    printf("the number of weeks %d\n",(days%365)/7);
    printf("the number of days  %d\n",days-(  (365*(days/365)) + (7* ((days%365)/7)) )   );


    return 0;
}