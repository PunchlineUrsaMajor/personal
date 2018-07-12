#include <stdio.h>

#define MAXLEN 100
#define MAXSTACK 50

int checkBrackets(char *str, int len);

int main()
{
	int len;
	scanf("%d", &len);
	int ans[len];
	getchar();
	int i;
	char str[MAXLEN];
	for (i = 0; i < len; i++)
	{
		if (fgets(str, MAXLEN, stdin) != NULL) ans[i] = checkBrackets(str, MAXLEN);
	}

	for (i = 0; i < len; i++)
	{
		printf("%d ", ans[i]);
	}

	printf("\n");
	return 0;
}

int checkBrackets(char *str, int len)
{
	int layer = -1;
	char endStack[MAXSTACK];
	int i;
	for (i = 0; i < len; i++)
	{
		if (str[i] == '\n') break;
		if (str[i] == '(') endStack[++layer] = ')';
		else if (str[i] == '{') endStack[++layer] = '}';
		else if (str[i] == '<') endStack[++layer] = '>';
		else if (str[i] == '[') endStack[++layer] = ']';
		else if (str[i] == ')' || str[i] == '}' || str[i] == ']' || str[i] == '>') {
			if (str[i] != endStack[layer]) {
				return 0;
			}
			else layer--;
		}
	}
	if (layer != -1) return 0;
	return 1;
}
