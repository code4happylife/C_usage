#include <stdio.h>

int lower(int);
int temp(int);
main()
{
	printf("%c\n", lower('S'));
	printf("%c\n", lower('A'));
	printf("%c\n", lower('Z'));
	printf("%c\n", lower('a'));
	printf("%c\n", lower('G'));
	printf("%c\n",temp('Q'));
}

int lower(int c)
{
	return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}

int temp(int t)
{
	int ret;
	ret = (t >='A' && t <= 'Z') ?(t+'a'-'A'):t;
	return ret;
}
