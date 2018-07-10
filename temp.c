#include <stdio.h>
#include "round.h"

#define TEMP_CONST .555555

int main()
{
	int len;
	scanf("%d", &len);
	int temps[len];

	int a, i;
	for(i = 0; i < len; i++)
	{
		scanf("%d", &a);
		temps[i] = abbeyRound((a - 32) * TEMP_CONST);
	}

	for(i = 0; i < len; i++)
	{
		printf("%d ", temps[i]);
	}
	printf("\n");
}
