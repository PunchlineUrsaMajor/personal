#include <stdio.h>

int main()
{
	int len;
	scanf("%d", &len);
	int pairs[len * 2];

	int x1, y1, x2, y2, a, b, i;
	for(i = 0; i < len * 2; i = i + 2)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		a = (y2 - y1) / (x2 - x1);
		b = y2 - a * x2;
		pairs[i] = a;
		pairs[i + 1] = b;
	}

	for (i = 0; i < len * 2; i = i + 2)
	{
		printf("(%d %d) ", pairs[i], pairs[i + 1]);
	}
	printf("\n");
}
