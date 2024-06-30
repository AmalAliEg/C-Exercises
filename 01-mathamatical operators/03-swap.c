#include <stdio.h>



int main(void)
{
	/*the inputs: values's vari. */
	int a;
	int p;
	
	/*var. to use in swaping process*/
	int swap;
	
	/*massag to show to the user*/
	printf("enter the two numbes to swap as \'number+enter\'  \n");
	
	/*get the valus from the user*/
	scanf("%d\n%d",&a,&p);
	printf("	the two numbes before swap: \nthe value of the first number is: %d\nthe value of the second number is: %d\n",a,p);

	swap=a;
	a=p;
	p=swap;
	

	/*the value of the output */
	printf("	the two numbes after swap: \nthe value of first number is: %d\nthe value of the second number is: %d\n",a,p);			// to remove - sign -->result*(-1)
	
	
	
	
	
	
	
	
	return 0;
	
}

