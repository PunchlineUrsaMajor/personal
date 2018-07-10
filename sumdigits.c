#include <stdio.h>

int sumDigits(int num);

int main()
{
	int len;
	scanf("%d", &len);
	int sums[len];

	int a, b, c, i;
	for (i = 0; i < len; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		sums[i] = sumDigits(a * b + c);
	}

	for (i = 0; i < len; i++)
	{
		printf("%d ", sums[i]);
	}
	printf("\n");
	return 0;
}

int sumDigits(int num)
{
	int sum = 0;
	while (num > 0)
	{
		sum = sum + num % 10;
		num = num / 10;
	}
	return sum;
}
