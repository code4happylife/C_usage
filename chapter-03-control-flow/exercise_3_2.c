#include <stdio.h>

#define MAX_LEN 1000

void escape(char[], char[]);
void exchange(char[],char[]);
main()
{
	char t[] = "Hello\tWorld\r\n\v";
	printf("%s\n", t);
	char s[MAX_LEN];
	escape(s, t);
	printf("%s\n", s);
	//use function exchange...
	char b[]= "Great\nDeveloper";
	printf("%s\n",b);
	char a[MAX_LEN];
	exchange(a,b);
	printf("%s\n",a);
}

void escape(char s[], char t[])
{
	int i, j, n;
	for (i = 0, j = 0; t[j] != '\0'; i++, j++) {
		switch(t[j]) {
			case '\a':
				s[i++] = '\\';
				n = 'a';
				break;
			case '\b':
				s[i++] = '\\';
				n = 'b';
				break;
			case '\f':
				s[i++] = '\\';
				n = 'f';
				break;
			case '\n':
				s[i++] = '\\';
				n = 'n';
				break;
			case '\r':
				s[i++] = '\\';
				n = 'r';
				break; //escape \r
			case '\t':
				s[i++] = '\\';
				n = 't';
				break;//escape \t
			case '\v':
				s[i++] = '\\';
				n = 'v';
				break;
			default:
				n = t[j];
				break;
		}
		s[i] = n;
	}
	s[i] = '\0';
}

void exchange(char a[],char b[]){

	int i,j,temp;
	for(i=0,j=0;b[j]!='\0';i++,j++){
		switch(b[j]){
			case '\t':
				a[i++] = '\\';
				temp = 't';
				break;
			case '\n':
				a[i++] = '\\';
				temp = 'n';
				break;
			default:
				temp = b[j];
				break;
		}
		a[i]=temp;
	}
	a[i] = '\0';


}
