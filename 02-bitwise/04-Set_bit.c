#include <stdio.h>



int main(void)
{
	/*the inputs: values's vari. */
	int a;
	int bit;

	/*massag to show to the user*/
	printf("enter the value \n");
	/*get the valus from the user*/
	scanf("%d",&a);
	/*massage to show to the user*/
	printf("enter the bit to set \n");
	/*get the valus from the user*/
	scanf("%d",&bit);
	
	printf("for the number %d; the specific bit is set to be %d \n",a,(a & (1<<bit)));

	/*operations on the values*/	
	a |= (1<<bit);
	/*chech on the operation*/
														//  00000010 
	if ( !(a & (1<<bit)))		//if it equal 0  00000010 & 00000100
	{
		printf("the specific bit is 0 \n");
		
	}
	else 
	{	
		printf("the specific bit is 1 \n");
	}
	
	
	
	
	
	
	
	
	return 0;
	
}

