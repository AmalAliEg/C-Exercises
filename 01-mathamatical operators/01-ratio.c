#include <stdio.h>



int main(void)
{
	/*the inputs: values's vari. */
	int a;
	int b;
	int c;
	int d;
	/*the var. to done the operations on */
	int num;
	int dom;
	/*the output value */
	float result;
	
	/*massag to show to the user*/
	printf("enter the four values to get the ratio \n");
	printf("enter the four values as ->number+enter\n");
	/*get the valus from the user*/
	scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
	/*operations on the values*/
	num=a+b;
	dom=c-d;
	/*condition */
	if (!dom)		//if it equal 0
	{
		printf("domenator is 0 , try different number\n");
		
	}
	else 
	{	
	/*the value of the output */
	result=(num/dom);
	printf("the ratio of the value is: %.3f\n",(-1)*result);			// to remove - sign -->result*(-1)
	}
	
	
	
	
	
	
	
	
	return 0;
	
}

