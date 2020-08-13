#include <stdio.h>
int main()
{
	int n, i, k, total=0;
	for (i = 0;i < 1000;i++) {
		if (i % 3 == 0 || i % 5 == 0)
		{
			//printf("\n%d %d + %d ", total + i, total, i);
			total += i;
		}
	}
	printf("total : %d", total);
	return 0;
}