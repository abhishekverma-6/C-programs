#include <stdio.h>
int main()
{
	int a, b, add, multi, sub, sum, choose;
	float div;
	printf(" choose your option:-");
	printf("\n 1 for add");
	printf("\n 2 for sub");
	printf("\n 3 for muliti");
	printf("\n 4 for divsion \n ");
	scanf(" %d", &choose);
	printf(" enter your first number :");
	scanf("%d", &a);
	printf(" enter your second number :");
	scanf("%d", &b);
	sum = a + b;
	sub = a - b;
	multi = a * b;
	div = (float)a / b;
	switch (choose)
	{
	case 1:
		printf(" sum is = %d", sum);
		break;
	case 2:
		printf(" sub is = %d", sub);
		break;
	case 3:
		printf(" multi is = %d", multi);
		break;
	case 4:
		printf(" division is = %f", div);
		break;
	default:
		printf(" please select correct input");
	}
	return 0;
}