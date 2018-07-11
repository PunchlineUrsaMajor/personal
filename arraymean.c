#include <stdio.h>
#include "round.h"

#define MAXLEN 50

int average(int *nums, int len);

int main()
{
	int len;
	scanf("%d", &len);
	int avgs[len];

	int nums[MAXLEN];
	int i;
	int num;
	int count;
	for (i = 0; i < len; i++)
	{
		count = 0;
		while (1)
		{
			scanf("%d", &num);
			if (num == 0) break;
			nums[count++] = num;
		}
		avgs[i] = average(nums, count);
	}

	for (i = 0; i < len; i++)
	{
		printf("%d ", avgs[i]);
	}

	printf("\n");

	return 0;
}

int average(int *nums, int len)
{
	int sum = 0;
	int i;
	for (i = 0; i < len; i++)
	{
		sum = sum + nums[i];
	}
	return abbeyRound((float) sum / len);
}
