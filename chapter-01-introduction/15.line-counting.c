#include <stdio.h>

main()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	nl++;
	printf("The input has %d lines\n", nl);
}
