#include <stdio.h>
#include <math.h>

int abbeyRound(float num);

int abbeyRound(float num)
{
	if (num / .5 == 1 || num / .5 == -1) {
		return (int) (num + .5);
	} else {
		return (int) round(num);
	}
}
