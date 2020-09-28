#include <stdio.h>
#define MAXLINE 1000
int newgetline(char line[ ],int maxline);
int removetrail(char rline[ ]);
main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];	
	max = 0;
	while((len = newgetline(line, MAXLINE)) > 0)
		if(removetrail(line)>0)
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

int removetrail(char s[])
{
	int i;
	for(i=0;s[i]!='\n';++i)
		;
	--i;
	for(i>0; (s[i]==' ') || (s[i] == '\t');--i)
	;
	if (i >=0 )
	{
		++i;
		s[i]='\n';
		++i;
		s[i]='\0';
	}
	return i;

}
