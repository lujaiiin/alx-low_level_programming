#include<stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	if (n > 5) {
		printf("is %d and is greater than 5" , n);
        } else if( n == 0) {
		printf("is %d and is 0" , n);
	} else if( n < 6 && n != 0) {
		printf("is %d and is less than 6 and not 0" , n);
	}
	return (0);
}
