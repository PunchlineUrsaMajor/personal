#include <stdio.h>

#define MAXLEN 100

int main()
{
	char vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};

	int len;
	scanf("%d", &len);
	getchar();
	int vcount[len];

	char line[MAXLEN];

	int i;
	int j;
	int chr;

	for (i = 0; i < len; i++)
	{
		vcount[i] = 0;
		if (fgets(line, MAXLEN, stdin) != NULL) {
			for (chr = 0; chr < MAXLEN; chr++)
			{
				if (line[chr] == '\0') break;
				for (j = 0; j < 6; j++)
				{
					if (line[chr] == vowels[j]) {
						vcount[i]++;
					}
				}
			}
		}
	}

	for (i = 0; i < len; i++)
	{
		printf("%d ", vcount[i]);
	}

	printf("\n");
}
