#include <stdio.h>

int main()
{
	int len;
	scanf("%d", &len);
	float approx[len];

	int x, n, i, j;
	float r;
	for (i = 0; i < len; i++)
	{
		r = 1;
		scanf("%d %d", &x, &n);
		for (j = 0; j < n; j++)
		{
			r = (r + ((float) x / r)) / 2;
		}
		approx[i] = r;
	}

	for (i = 0; i < len; i++)
	{
		printf("%f ", approx[i]);
	}

	printf("\n");
	return 0;
}
