#include <stdio.h>

int stampToSeconds(int * timestamp);
int * secondsToStamp(int seconds, int * timestamp);

int main()
{
	int len;
	scanf("%d", &len);
	int dates[len][4];

	int i;
	int date1[4];
	int date2[4];
	int diff;
	for (i = 0; i < len; i++)
	{
		scanf("%d %d %d %d %d %d %d %d", &date1[0], &date1[1], &date1[2], &date1[3],
						&date2[0], &date2[1], &date2[2], &date2[3]);
		diff = stampToSeconds(date2) - stampToSeconds(date1);
		secondsToStamp(diff, dates[i]);
	}

	for (i = 0; i < len; i++)
	{
		printf("(%d %d %d %d) ", dates[i][0], dates[i][1], dates[i][2], dates[i][3]);
	}
	printf("\n");

	return 0;
}

int stampToSeconds(int * timestamp)
{
	return 60 * (24 * 60 * timestamp[0] + 60 * timestamp[1] + timestamp[2]) + timestamp[3];
}

int * secondsToStamp(int seconds, int * timestamp)
{
	int temp;
	timestamp[3] = seconds % 60;
	temp = seconds / 60;
	timestamp[2] = temp % 60;
	temp = temp / 60;
	timestamp[1] = temp % 24;
	timestamp[0] = temp / 24;
	return timestamp;
}
