#include <stdio.h>
#include "checksum.h"

int main()
{
	int nums[6] = {1, 3, 2, 4, 5, 6};

	int ans = checksum(nums, 6);
	printf("%d\n", ans);
}
