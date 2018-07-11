#include <stdio.h>

int main()
{
	int len;
	scanf("%d", &len);

	int temp;
	int result = 0;
	int i;
	for (i = 0; i < len; i++)
	{
		scanf("%d", &temp);
		result = result + temp % 10000007;
		result = result * 113 % 10000007;
	}
	printf("%d\n", result);
	return 0;
}
