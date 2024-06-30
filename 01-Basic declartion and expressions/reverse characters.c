/******************************************************************************

                                    Online C Compiler.
                   Write a C program to print the following characters in reverse.
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX

*******************************************************************************/

#include <stdio.h>

int main()
{
    char c1,c2,c3;
    printf("enter three characters:  ");
    scanf("%c%c%c",&c1,&c2,&c3);
    printf("you entered %c-%c-%c characters\n",c1,c2,c3);
    printf("the reveresed characters is %c-%c-%c\n",c3,c2,c1);

    return 0;
}