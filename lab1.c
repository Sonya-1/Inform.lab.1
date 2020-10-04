#include <stdio.h>

int main()
{
	int n, max_n = 0, min_n = 0, premax = 0, premin = 0;

	while (1) 
	{
		printf("Input n ");
		scanf("%d", &n);

		if (n == 0) {
			break;
		}

		if (max_n == 0 || max_n < n) {
			premax = max_n;
			max_n = n;
		}
		else if (n > premax) {
			premax = n;
		}

		if (min_n == 0 || n < min_n) {
			premin = min_n;
			min_n = n;
		}
		else if (premin == 0 || n < premin) {
			premin = n;
		}
	}

	if (premax == 0) {
		printf("No data\n");
		return 0;
	}

	printf("Max %d\n", max_n);
	printf("Min %d\n", min_n);
	printf("PreMax %d\n", premax);
	printf("PreMin %d\n", premin);

	return 0;
}