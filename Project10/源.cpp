#include<stdio.h>
int main()
{
	int max(int x, int y);
	int a, b, c, d ,p;
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	printf("%d", max(max(a, b), max(c, d)));
	return 0;
}
int max(int x, int y)
	{
		if (x > y)
			return x;
		return y;
	}
