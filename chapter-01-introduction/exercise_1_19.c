#include <stdio.h>
#define MAXLINE 1000
int newgetline(char line[ ],int maxline);
main()
{
	int len;
	int max;
	char line[MAXLINE];
	char reverseline[MAXLINE];
	max = 0;
	while((len = newgetline(line, MAXLINE)) > 0)
	{	
		int i;
		int j;
		for(i=0,j=len-1;i<len;i++,j--)
		{
			reverseline[i] = line[j];
			
		}
		printf("The origin char array is:%s, the reverse array is :%s\n",line,reverseline);
	}
	return 0;

}

int newgetline(char s[],int lim)
{
	int c,i;
	for (i=0; i < lim -1 && (c=getchar()) != EOF && c!='\n';++i)
		s[i] = c;
	s[i] = '\0';
	return i;
}

