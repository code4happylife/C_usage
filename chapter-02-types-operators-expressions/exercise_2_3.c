#include <stdio.h>

int htoi(char[]);

main()
{
	int n = htoi("0x123abc");
	printf("0x123abc is  %d\n", n);
	n = htoi("0X123abc");
	printf("0X123abc is %d\n", n);
	n = htoi("123abc");
	printf("123abc is %d\n", n);
	n = htoi("FF");
	printf("FF is %d\n", n);
	n = htoi("1F");
	printf("1F is %d\n", n);
	n = htoi("D");
	printf("D is %d\n", n);
	n = htoi("3");
	printf("3 is %d\n", n);
	n = htoi("3FQWE");
	printf("3FQWE is %d\n", n);
	n = htoi("FQ");
	printf("FQ is %d\n",n);
	n = htoi("0x1fff");
	printf("0x1fff is %d\n", n);
}

int htoi(char s[])
{
	int i, n;
	n = 0;
	for (i = 0; ; ++i) {
		if (s[i] == '0' && (s[i+1] == 'x' || s[i+1] == 'X')) {
			i++;
			continue;
		}
		
		if (s[i] >= '0' && s[i] <= '9') {
			n = 16 * n + (s[i] - '0');
		} else if (s[i] >= 'a' && s[i] <= 'f') {//a-f
			n = 16 * n + (s[i] - 'a' + 10);
		} else if (s[i] >= 'A' && s[i] <= 'F') {//A-F
			n = 16 * n + (s[i] - 'A' + 10);
		} else {
			break;
		}
	}
	return n;
}
