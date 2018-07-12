#include <stdio.h>

int main()
{
	int len, x, y, n, i, px, py, tx, ty;
	scanf("%d", &len);
	int ans[len];

	for (i = 0; i < len; i++)
	{
		px = 0;
		py = 0;
		tx = 0;
		ty = 0;
		scanf("%d %d %d", &x, &y, &n);
		while (px + py != n)
		{
			if (tx + x < ty + y) {
				px++;
				tx = tx + x;
			} else {
				py++;
				ty = ty + y;
			}
		}
		ans[i] = tx > ty ? tx : ty;
	}

	for (i = 0; i < len; i++)
	{
		printf("%d ", ans[i]);
	}
	printf("\n");

	return 0;
}
