#include <stdio.h>
/*
 * Main print positeve and negateve
 * 
 *Return always 0
*/
int main(void)
{
	int n;
	scanf("%d", &n);

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d  is negative\n", n);
	}
	return (0);
}
