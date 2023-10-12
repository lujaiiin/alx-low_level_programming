#include <stdio.h>

/**
 * sum - function to sum
 * @a: first num
 * @b: secound
 * Return: the sum
 */

float sum(int a, int b)
{
	float c = 0;

	c = a / b;
	return (c);
}

int main(void)
{
	int n1, n2;
	float su = 0;

	puts("enter the numbers to sum\n");
	scanf("%d\n", &n1);
	scanf("%d\n", &n2);

	su = sum(n1, n2);
	puts("the sub  is \n");
	printf("%f\n", su);
	return (0);
}
