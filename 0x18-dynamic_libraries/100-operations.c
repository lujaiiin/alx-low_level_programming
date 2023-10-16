#include <stdio.h>

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mod(int x, int y)
{
	if (y == 0)
	{
		printf("Error:zero\n");
		return (0);
	}
	return (x % y);
}
int mul(int x, int y)
{
	return (x * y);
}

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: zero\n");
		return (0);
	}
	return (a / b);
}
