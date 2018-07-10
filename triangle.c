#include <stdio.h>

int main()
{
	int len;
	scanf("%d", &len);
	int tris[len];

	int a, b, c, i;
	for (i = 0; i < len; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		tris[i] = c <= a + b && b <= a + c && a <= b + c;
	}

	for (i = 0; i < len; i++)
	{
		printf("%d ", tris[i]);
	}
	printf("\n");
	return 0;
}
