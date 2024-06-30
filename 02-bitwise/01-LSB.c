#include <stdio.h>



int main(void)
{
	/*the inputs: values's vari. */
	int a;


	
	/*massag to show to the user*/
	printf("enter the value \n");
	/*get the valus from the user*/
	scanf("%d",&a);
	/*operations on the values*/
	if ( a & ~(0b00000001))		//if it equal 0
	{
		printf("the LSB bit is 0 \n");
		
	}
	else 
	{	
		printf("the LSB bit is 1 \n");
	}
	
	
	
	
	
	
	
	
	return 0;
	
}

