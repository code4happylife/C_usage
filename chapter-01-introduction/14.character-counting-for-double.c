#include <stdio.h>

/* count characters in input; 2nd version */
main()
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("Total count of characters in input is : %.0f\n", nc);
}
