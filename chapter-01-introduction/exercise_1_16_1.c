#include <stdio.h>
#define MAXLINE 1000
int newgetline(char line[ ],int maxline);
main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	max = 0;
	while((len = newgetline(line, MAXLINE)) > 0)
		printf("%d:%s",len,line);
	
	return 0;

}

int newgetline(char s[],int lim)
{
	int c,i;
	for (i=0; i < lim -1 && (c=getchar()) != EOF && c!='\n';++i)
		s[i] = c;
	if (c=='\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
