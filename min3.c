#include <stdio.h>

int main()
{
	int len;
	scanf("%d", &len);
	long int mins[len];

	long int a, b, c;
	int i;
	for (i = 0; i < len; i++)
	{
		scanf("%ld %ld %ld", &a, &b, &c);
		if (a > b) {
			if (b > c) {
				mins[i] = c;
			} else {
				mins[i] = b;
			}
		} else if (c > a) {
			mins[i] = a;
		} else {
			if (b > c) {
				mins[i] = c;
			} else {
				mins[i] = b;
			}
		}
	}

	for (i = 0; i < len; i++)
	{
		printf("%ld ", mins[i]);
	}

	printf("\n");
}
