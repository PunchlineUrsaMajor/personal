#include <stdio.h>

int weightedSum(int num);

int main()
{
	int len;
	scanf("%d", &len);
	int sums[len];

	int num, i;
	for (i = 0; i < len; i++)
	{
		scanf("%d", &num);
		sums[i] = weightedSum(num);
	}

	for (i = 0; i < len; i++)
	{
		printf("%d ", sums[i]);
	}

	printf("\n");

	return 0;
}

int weightedSum(int num)
{
	int sum = 0;
	int lastSum = 0;
	while (num > 0)
	{
		lastSum = lastSum + num % 10;
		sum = lastSum + sum;
		num = num / 10;
	}
	return sum;
}
