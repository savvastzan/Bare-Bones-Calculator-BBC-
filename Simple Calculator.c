#include <stdio.h>

int main(void)
{
	int num1, num2;
	char ch;
	char button = 'a';
	
	do
	{
		printf("Type two integers that you want to do mathematical operations on\n");
		printf("Number 1:\n");
		scanf("%d", &num1);
		printf("Number 2:\n");
		scanf("%d", &num2);
		float div = num1/(float)num2;

		printf("Select a mathematical operation.\n1.Press 'a' for addition\n2.Press 's' for subdraction\n3.Press 'm' for multiplication\n4.Press 'd' for division\n");
		ch=getch();
		switch(ch){
			case 'a':
				printf("The result is %d\n", num1+num2);
				break;
			case 's':
				printf("The result is %d\n", num1-num2);
				break;
			case 'm':
				printf("The result is %d\n", num1*num2);
				break;
			case 'd':
				printf("The result is %.3f\n", div);
				break;
			default:
				printf("Wrong selection, please try again\n");
				break;
		}
		
		printf("Press 'q' to exit, otherwise press anything else to redo operations\n");
		button=getch();
	}while(button != 'q');
	
	return 0;
}
