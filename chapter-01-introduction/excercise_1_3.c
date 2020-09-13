#include <stdio.h>
/* print Fahrenheit-Celsius table
 * for fahr = 0 , 20, ..., 300*/
main()
{
	float fahr, celsius;
	float lower, upper, step;
	lower = 0;    /* lower limit of temperature*/
	upper = 300;  /*  upper limit */
	step = 20;    /*  step size*/
	
	fahr = lower;
	printf("The table of Fahrenheit-Celsius conversion\n");
	printf("Fahrenheit    Celsius\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0)  * (fahr - 32.0);
		printf("%8.0f %8.1f\n",fahr,celsius);
		fahr = fahr + step;
	}

}
