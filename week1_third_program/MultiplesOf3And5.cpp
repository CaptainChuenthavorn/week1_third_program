#include <stdio.h>
int main()
{
	int n, i, total=0;
	printf("Enter number to calculate multiples of 3 and 5 sum : ");
		scanf_s("%d", &n);
	for (i = 0;i < n;i++) {
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf(" %d +", i);
			total += i;
		}
	}
	printf(" %d = %d",i, total);
	printf("\n\ntotal is  %d", total);
	return 0;
}