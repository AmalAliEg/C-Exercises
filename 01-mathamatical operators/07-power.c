#include <stdio.h>
#include <math.h>			//to get pow function 



int main(void)
{
	/*the inputs: values's vari. */
	int a;		//base 
	int p;		//power ->expone
	/*the outputs var.*/
	int power;
	
	/*massag to show to the user*/
	printf("enter the base number\n");
	/*get the valus from the user*/
	scanf("%d",&a);
	/*massag to show to the user*/
	printf("enter the power number\n");
	/*get the valus from the user*/
	scanf("%d",&p);
	
	/*massag to show to the user*/
	printf("the base you entered is: %d\nthe exponent you entered is: %d\n",a,p);
	
	power=pow(a,p);
	printf("\the result is:	%d",power);

	
	
	
	
	
	
	
	
	return 0;
	
}

