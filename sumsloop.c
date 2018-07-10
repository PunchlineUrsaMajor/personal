#include <stdio.h>

int main()
{
	size_t len;
	scanf("%ld", &len);
	int sums[len];

	int a;
	int b;
	int i;
	for (i = 0; i < len; i++)
	{
		scanf("%d %d", &a, &b);
		sums[i] = a + b;
	}

	for (i = 0; i < len; i++)
	{
		printf("%d ", sums[i]);
	}
	printf("\n");
}
