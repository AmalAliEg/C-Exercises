#include <stdio.h>



int main(void)
{
	/*the inputs: values's vari. */
	float a;
	float p;
	
	
	/*massag to show to the user*/
	printf("enter the two numbes to multiplicate as \'number+enter\'  \n");
	
	/*get the valus from the user*/
	scanf("%f\n%f",&a,&p);
	printf("	the two numbes before multiply: \nthe value of the first number is: %.3f\nthe value of the second number is: %.3f\n",a,p);

	
	
	
	

	/*the value of the output */
	printf("	the result of the number is: %.2f\n",a*p);			// to remove - sign -->result*(-1)
	
	
	
	
	
	
	
	
	return 0;
	
}

