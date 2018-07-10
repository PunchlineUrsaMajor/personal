#include <stdio.h>
#include <math.h>

int main()
{
	int len;
	scanf("%d", &len);
	int rounds[len];

	int a, b, i;
	float ans;
	for (i = 0; i < len; i++)
	{
		scanf("%d %d", &a, &b);
		ans = (float) a / b;
		if (ans / .5 == 1 || ans / .5 == -1) {
			rounds[i] = (int) ans + .5;
		} else {
			rounds[i] = (int) round(ans);
		}
	}

	for (i = 0; i < len; i++)
	{
		printf("%d ", rounds[i]);
	}

	printf("\n");
}
