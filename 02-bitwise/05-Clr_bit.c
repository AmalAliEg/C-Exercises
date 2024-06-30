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
	
	printf("for the number %d; the specific bit is set to be %d \n",a, !(a & (1<<bit))?0:1);

	/*operations on the values*/	
	a &= ~(1<<bit);
	/*chech on the operation*/
											//   00001010   00001010 
	if ( !(a & (1<<bit)))		//if it equal 0  00000010 & 11111101
	{
		printf("the specific bit now is 0 \n");
		
	}
	else 
	{	
		printf("the specific bit now is 1 \n");
	}
	
	
	
	
	
	
	
	
	return 0;
	
}

