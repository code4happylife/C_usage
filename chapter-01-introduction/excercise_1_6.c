#include <stdio.h>
main()
{
	int c;
	c = getchar();
	if(c == EOF)
	{
		printf("When c is equal to EOF, the value (c==EOF) is :%d",(c == EOF));
	}
	else{
		printf("When c is not equal to EOF,the value (c == EOF) is :%d",(c==EOF));
	}
	/*
 * When c is not equal to EOF,the value (c == EOF) is :0
 * When c is equal to EOF, the value (c==EOF) is :1
*/
}
