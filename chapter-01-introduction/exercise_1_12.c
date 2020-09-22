#include <stdio.h>
#define IN 1
#define OUT 0
main()
{
	int input_char, state;
	state = OUT;
	while((input_char=getchar())!=EOF)
	{
		if(input_char == ' ' || input_char == '\t' || input_char == '\n'){
			state = OUT;
			printf("\n");			
		}
		else{
			state = IN;
			putchar(input_char);
		}
		
	}

}
