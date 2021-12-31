#include <stdio.h>

int add(int a,int b)
{
	return (a+b);
}

int subdract(int a,int b)
{
	return (a-b);
}

int multyply(int a,int b)
{
	return (a*b);
}

float divide(int a,int b)
{
	return (a/(float)b);
}

int main(void)
{
	char button;
	button = 'q';
	do
	{
		int num1, num2;
		float result;
		char ch;

		printf("Type two whole numbers that you want to do mathematical operations on\n");
		printf("Number 1:\n");
		scanf("%d", &num1);
		printf("Number 2:\n");
		scanf("%d", &num2);

		printf("Select a mathematical operation.\n1.Press 'a' for addition\n2.Press 's' for subdraction\n3.Press 'm' for multyplication\n4.Press 'd' for division\n");
		ch = getchar();
		ch = getchar();

		if(ch == 'a' || ch == 's' || ch == 'm' || ch == 'd' )
		{
			if(ch == 'a')
			{
				result = add(num1,num2);
				printf("The result is %.0f\n", result);
			}
			if(ch == 's')
			{
				result = subdract(num1,num2);
				printf("The result is %.0f\n", result);
			}
			if(ch == 'm')
			{
				result = multyply(num1,num2);
				printf("The result is %.0f\n", result);
			}
			if(ch == 'd')
			{
				result = divide(num1,num2);
				printf("The result is %.3f\n", result);
			}
		}else{
			printf("Wrong selection, please try again");
		}
		
		printf("Press 'q' if you want to redo operations, or press anything else to exit program\n");
		button = getchar();
		button = getchar();
	}while(button == 'q');
	
	return 0;
}
