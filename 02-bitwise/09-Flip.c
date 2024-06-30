#include <stdio.h>


#define LEN	sizeof(int)*8		//to get the size of byte  in bts


int main(void)
{
	/*the inputs: values's vari. */
	int a;
	int counter=0;

	/*massag to show to the user*/
	printf("enter the value \n");
	/*get the valus from the user*/
	scanf("%d",&a);
	

	/*operations on the values*/	
	
	for (counter=0;counter<LEN;counter++)
	{
	
	/*chech on the operation*/
											//       00001010   00001010 
		a=~ ((a>>counter) & 1);		//if it equal 0  00000001 & 11111101

	
	}
	
	for (counter=0;counter<LEN;counter++)
		{
		
		/*chech on the operation*/
												//       00001010   00001010 
		printf("%d",(!(a>>counter)&1?0:1));
		
		}	

	
	
	
	
	
	
	return 0;
	
}

