#include <stdio.h>
#define NONBLANK '#'
main(){
	int c, lastc;
	lastc = NONBLANK;
	while((c=getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (lastc != ' ')
				putchar(c);
		}
		else
			putchar(c);

		lastc = c;
	}
}
