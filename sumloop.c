#include <stdio.h>

int main()
{
	int len;
	scanf("%d", &len);

	int sum = 0;
	int temp;
	int i;
	for (i = 0; i < len; i++)
	{
		scanf("%d", &temp);
		sum += temp;
	}

	printf("%d\n", sum);
}
