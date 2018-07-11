#include <stdio.h>

#define MAXLEN 100

int main()
{
	int ans;
	scanf("%d", &ans);
	int mod;
	char ops[MAXLEN];
	int params[MAXLEN];
	int i = 0;
	char op;
	while (1)
	{
		op = getchar();
		if (op == '+') {
			ops[i] = op;
			scanf("%d", &params[i++]);
		} else if (op == '*') {
			ops[i] = op;
			scanf("%d", &params[i++]);
		} else if (op == '%') {
			scanf("%d", &mod);
			break;
		}
	}
	int j;
	for (j = 0; j < i; j++)
	{
		if (ops[j] == '+') ans = (ans + params[j]) % mod;
		else if (ops[j] == '*') ans = (ans * params[j]) % mod;
	}

	printf("%d\n", ans);
	return 0;
}
