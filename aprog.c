#include <stdio.h>

int sumUnder(int n);

int main()
{
	int len;
	scanf("%d", &len);
	int progs[len];

	int a, b, n, i;
	for (i = 0; i < len; i++)
	{
		scanf("%d %d %d", &a, &b, &n);
		progs[i] = a * n + b * sumUnder(n - 1);
	}

	for (i = 0; i < len; i++)
	{
		printf("%d ", progs[i]);
	}
	printf("\n");
	return 0;
}

int sumUnder(int n)
{
	int sum = 0;
	int i;
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	return sum;
}
