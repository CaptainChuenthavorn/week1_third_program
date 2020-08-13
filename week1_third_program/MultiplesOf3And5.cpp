#include <stdio.h>
int main()
{
	int keep[10], i,n;
	for (n = 0;n < 10;n++) {
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			for (i = 0;i < 1;i++) {
				keep[i] = n;
			}

		}
		for (i = 0;i < 10;i++) {
			printf("\nKeep[%d] : %d", i, keep[i]);
		}
		
	}
	return 0;
}