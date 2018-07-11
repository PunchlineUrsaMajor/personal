#include <stdio.h>

struct IntNode {
	int val;
	struct IntNode * next;
	struct IntNode * previous;
};

struct CalcNode {
	char op;
	int num;
	struct CalcNode *next;
	struct CalcNode *previous;
};
