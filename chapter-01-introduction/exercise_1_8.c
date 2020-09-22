#include <stdio.h>
/* count blanks, tabs, newlines */
main()
{
	int c, blank_count, tab_count, newline_count;
	blank_count = 0;
	tab_count = 0;
	newline_count = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++newline_count;
		else if ( c== '\t')
			++tab_count;
		else if (c == ' ')
			++blank_count;

	printf("The input has %d newlines, %d tabs, %d blanks\n", newline_count, tab_count, blank_count);
//hello world     go
//The input has 1 newlines, 1 tabs, 1 blanks

}
