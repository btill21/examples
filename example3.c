#include <stdio.h>

int main(){

	int age;

	printf("\n Enter your age: ");
	scanf("%d", &age);

	if (age >= 30){
		printf("Congrats");
	}
	else {
		printf("Tragic");
	     }

	return 0;
}
