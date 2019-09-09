#include <stdio.h>

int max4(int a, int b, int c, int d)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	return max;
}

int main(void)
{
	printf("max(%d,%d,%d,%d = %d\n", 4, 3, 2, 1, max4(4, 3, 2, 1));
	return 0;
}


