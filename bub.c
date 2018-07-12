#include <stdio.h>
#include "checksum.h"

int main()
{
	int swaps, checksum, cur, next, temp;
	swaps = 0;
	checksum = 0;
	scanf("%d %d", &cur, &next);
	while (next != -1)
	{
		if (cur > next) {
			temp = cur;
			cur = next;
			next = temp;
			swaps++;
		}
		checksum += cur;
		checksum = (checksum * 113) % 10000007;
		cur = next;
		scanf("%d", &next);
	}
	checksum += cur;
	checksum = (checksum * 113) % 10000007;
	printf("%d %d\n", swaps, checksum);
	return 0;
}
