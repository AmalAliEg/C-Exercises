#include <stdio.h>
#include <math.h>			//to get pow function 



int main(void)
{
	/*the inputs: values's vari. */
	int a;		//root1
	int b;		//root2
	int c;		//root3
	/*the outputs var.*/
	int root;
	int root2;
	
	/*massag to show to the user*/
	printf("enter the root1 number\n");
	/*get the valus from the user*/
	scanf("%d",&a);
	/*massag to show to the user*/
	printf("enter the root2 number\n");
	/*get the valus from the user*/
	scanf("%d",&b);
	/*massag to show to the user*/
	printf("enter the root3 number\n");
	/*get the valus from the user*/
	scanf("%d",&c);
	
	/*massag to show to the user*/
	printf("the root you entered is:\n%d\n%d\n%d\n",a,b,c);
	
	
	if (!a && !b && !c)
	{
		printf("no solution\n");

	}
	else if(!a)
	{
		root=((-c)/b);
		printf("one root =%d\n",root);
	}
	else if (  (b*2)-(4*a*c)<0  )
	{
		printf("no roots\n");
	}
	else {
				root=(  (((-b)+(b*2-4*a*c) )/2)/(2*a));
				root2=(  (((-b)-(b*2-4*a*c) )/2)/(2*a));
		printf("two roots:\nfirst =%d\nsecond =%d\n",root,root2);
	}


	
	
	
	
	
	
	
	
	return 0;
	
}

