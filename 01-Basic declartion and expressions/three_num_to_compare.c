
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter three number to compare\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    int max= (n1>n2)? ( n1>n3? n1:n3) :( n2>n3? n2:n3);
    
    printf("the maximun is %d\n", max);

    return 0;
}