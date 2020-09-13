#include<stdio.h>
main()
{
	float celsius,fahr;
	float lower, upper,step;
	lower = 0;
	upper = 300;
	step = 20;
	
	celsius = lower;
	printf("The table of Celsius-Fahrenheit conversion:\n");
	printf("Celsius    Fahrenheit\n");
	while (celsius <= upper) {
		fahr = (9.0/5.0)*celsius + 32.0;
		printf("%3.0f %8.1f\n",celsius,fahr);
		celsius = celsius + step;
	}

}
