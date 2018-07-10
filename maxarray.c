#include <stdio.h>

#define LENGTH 300

int main()
{
	int max;
	int min;
	scanf("%d", &max);
	min = max;
	int i;
	int temp;
	for (i = 1; i < LENGTH; i++)
	{
		scanf("%d", &temp);
		if (temp > max) max = temp;
		if (temp < min) min = temp;
	}

	printf("%d %d\n", max, min);
	return 0;
}
