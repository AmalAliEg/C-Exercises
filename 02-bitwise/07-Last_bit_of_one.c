#include <stdio.h>


#define LEN	sizeof(int)*8		//to get the size of byte  in bts


int main(void)
{
	/*the inputs: values's vari. */
	int a;
	int bit_position=-1;
	int counter;

	/*massag to show to the user*/
	printf("enter the value \n");
	/*get the valus from the user*/
	scanf("%d",&a);
	

	/*operations on the values*/	
	
	for (counter=0; counter<LEN;counter++)
	{
	
	/*chech on the operation*/
											//       00001010   00001010 
		if ( (a>>counter) & 1)		//if it equal 0  00000001 & 11111101
		{
			bit_position=counter;
		}
	
	}
		
	/*print the values of 1 counts in the binary repres.*/
	if (bit_position==-1)
	{
		printf("no 1\'s ");

	}
	else 
	{
		printf("there are %d of 1\'s in the binary repres. of the value %d you entered ",bit_position,a);
	}
	
	
	
	
	
	
	
	return 0;
	
}

