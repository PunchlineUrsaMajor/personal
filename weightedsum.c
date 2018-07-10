#include <stdio.h>

int weightedSum(int num);

int main()
{
	printf("%d\n", weightedSum(4231));
	return 0;
}

int weightedSum(int num)
{
	int sum = 0;
	int lastSum = 0;
	int temp = 0;
	while (num > 0)
	{
		temp = temp + num % 10;
		sum = lastSum + temp;
		printf("%d\n", sum);
		lastSum = temp;
		num = num / 10;
	}
	return sum;
}
