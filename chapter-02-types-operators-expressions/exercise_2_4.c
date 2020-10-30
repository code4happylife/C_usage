#include <stdio.h>

void squeeze(char[], int);

main()
{
	char s[] = "test";
	squeeze(s, 't');
	printf("%s\n", s);
	char test[]= "good";
	squeeze(test,'o');
	printf("%s\n",test);
}

void squeeze(char s[], int c)
{
	int i ,j;
        //two index to iterate the array
	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];

	s[j] = '\0';
}
