#include <stdio.h>

int main()
{
	int len;
	scanf("%d", &len);
	int mins[len];

	int a, b, i;
	for (i = 0; i < len; i++)
	{
		scanf("%d %d", &a, &b);
		if (a > b) {
			mins[i] = b;
		} else {
			mins[i] = a;
		}
	}

	for (i = 0; i < len; i++)
	{
		printf("%d ", mins[i]);
	}

	printf("\n");
}
