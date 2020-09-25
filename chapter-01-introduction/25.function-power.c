#include <stdio.h>

int power(int m, int n);

main()
{
	int i;
	// the i in main is unrelated with the i in functon power
	for (i = 0; i < 10; ++i)
		printf("the exponential is :%d, when the base is 2, the result is : %d, when base is -3 , the result is %d\n", i, power(2, i), power(-3, i));
	return 0;
}

int power(int base, int n)
{
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}
