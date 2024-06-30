#include <stdio.h>



int main(void)
{
	/*the inputs: values's vari. */
	char a;
	
	
	/*massag to show to the user*/
	printf("enter the character to chech if its vowel or not\n");
	
	/*get the valus from the user*/
	scanf("%c",&a);
	printf("the character you entered is: %c\n\n",a);

switch(a){
	case 'a':
	case 'e':
	case 'u':
	case 'o':
	case 'l':
			/*the value of the output */
		printf("\tcharacter you entered is vowel");
		break;
	default:
		printf("\tcharacter you entered is not vowel");
		break;

	
}
	
	
	
	
	
	
	
	
	return 0;
	
}

