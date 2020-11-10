#include <stdio.h>

int any(char[], char[]);
int clacit(char[],char[]);
main()
{
	int p;
	p = any("test", "test");
	printf("p: %d\n", p);//0

	p = any("test", "es");
	printf("p: %d\n", p);//1

	p = any("test", "s1");
	printf("p: %d\n", p);//2

	p = any("test", "123");
	printf("p: %d\n", p);//-1

	p = calcit("test","124");
	printf("p: %d\n",p);//-1
}

int any(char s1[], char s2[])
{
	int i, j;
	int result = -1;

	for(i = 0; s1[i] != '\0'; i++) 
	{
		for (j = 0; s2[j] != '\0'; j++) 
		{
			if (s1[i] == s2[j]) {
				result = i;
				break;
			}
		}

		if (result != -1)
			break;
	}

	return result;
}

int calcit(char t1[],char t2[])
{
	int ret = -1;
	int a,b;
	for(a=0; t1[a]!='\0';a++)
	{
		for (b=0;t2[b]!='\0';b++){
			if (t1[a]==t2[b]){
			    ret = a;
			    break;
			}

		}
		if (ret != -1){
			break;
		}
	}

	return ret;
}
