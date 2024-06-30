#include <stdio.h>


#define LEN	sizeof(int)*8		//to get the size of byte  in bts


int main(void)
{
	/*the inputs: values's vari. */
	int a;
	int bit_position=-1;
	int counter=0;
	int flag=1;

	/*massag to show to the user*/
	printf("enter the value \n");
	/*get the valus from the user*/
	scanf("%d",&a);
	

	/*operations on the values*/	
	
	while (flag)
	{
	
	/*chech on the operation*/
											//       00001010   00001010 
		if ( (a>>counter) & 1)		//if it equal 0  00000001 & 11111101
		{
			bit_position=counter;
			flag=0;
		}
		else 
		{
			counter++;

		}
		
	
	}
		
	/*print the values of 1 counts in the binary repres.*/
	if (bit_position==-1)
	{
		printf("no 1\'s ");

	}
	else 
	{
		printf("the position of first 1\'s is in bit number %d in the binary repres. of the value %d you entered ",bit_position,a);
	}
	
	
	
	
	
	
	
	return 0;
	
}

