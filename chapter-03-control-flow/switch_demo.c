#include <stdio.h>
int main(){
	int type;
	scanf("%d",&type);
	switch(type){
		case 1:
			printf("hello\n");
			break;
		case 2:
			printf("good\n");
			break;
		default:
			printf("bad input\n");
			break;
	}

	return 0;
}
