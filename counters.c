#include <stdio.h>
#include <string.h>

int main()
{
	int m, n, i;
	scanf("%d %d", &m, &n);
	int counters[n];
	memset(counters, 0, sizeof(counters));

	int num;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &num);
		counters[num - 1]++;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", counters[i]);
	}

	printf("\n");
	return 0;
}
