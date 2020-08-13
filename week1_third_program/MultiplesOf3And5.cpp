#include <stdio.h>
int main()
{
	int n, i, total=0;
	printf("Enter number to calculate multiples of 3 and 5 sum : ");
		scanf_s("%d", &n);
	for (i = 0;i < n;i++) {
		if (i % 3 == 0 || i % 5 == 0)
		{
			total += i;
		}
	}
	printf("total is  %d", total);
	return 0;
}