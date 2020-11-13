#include <stdio.h>

int bitcount(unsigned);//declare a bitcount function
int result(unsigned);
main()
{
	printf("count 1 bit count in the binary format of 255 is:%d\n", bitcount(255));
	printf("%d\n", bitcount(15));
	printf("%d\n", bitcount(1));
	printf("%d\n", bitcount(0));
	printf("%d\n",result(15));
	printf("%d\n", bitcount(~0U));
}

int bitcount(unsigned x)
{
	int b = 1;
	
	if (x == 0)
		b--;

	while (x &= (x-1))
		b++;


	return b;
}






int result(unsigned x){
	int temp = 1;
	if (x==0){
		temp--;
	}
	while(x&=(x-1)){
		temp ++;
	
	}
	return temp++;
}	
