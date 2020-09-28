#include <stdio.h>
#define MAXLINE 1000
int newgetline(char line[ ],int maxline);
void reverse(char rline[]);
main()
{
	int len;
	int max;
	char line[MAXLINE];
	char reverseline[MAXLINE];
	max = 0;
	while((len = newgetline(line, MAXLINE)) > 0)
	{
		reverse(line);
		printf("%s",line);	
	}
	return 0;

}

int newgetline(char s[],int lim)
{
	int c,i;
	for (i=0; i < lim -1 && (c=getchar()) != EOF && c!='\n';++i)
		s[i] = c;
	if(c=='\n')
	{
		s[i]=c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void reverse(char rline[])
{
	int i,j;
	char temp;
	for(i=0;rline[i]!='\0';i++)
	;
	--i;
	if(rline[i]=='\n')
		--i;
	j=0;
	
	while(j < i)
	{
		temp = rline[j];
		rline[j] = rline[i];
		rline[i] = temp;
		--i;
		++j;
	}

}
