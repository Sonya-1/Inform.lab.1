#include <stdio.h>

int main()
{
	int n, max_n;
	max_n = 0;

	do {
		printf("Input number: ");
		scanf("%d", &n);
		if (max_n <= n) {
			max_n = n;
		}

	} while (n != 0);

	printf("Max %d\n", max_n);

	return 0;
}
