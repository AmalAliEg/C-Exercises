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
	/*massag to show to the user*/
	printf("enter the bit to check \n");
	/*get the valus from the user*/
	scanf("%d",&bit);
	/*operations on the values*/					    //  00000010 
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

