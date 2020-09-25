#include <stdio.h>

int fahr_to_celsius(int fahr){
	int  celsius;
	celsius = 5 * (fahr - 32) / 9;
	return celsius;
	

}

main(){
	int fahr = 200;
	int cel = fahr_to_celsius(fahr);
	printf("The fahr  is %d , its value in celsius is : %d",fahr,cel);
}
