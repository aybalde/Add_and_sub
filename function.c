#include "function.h"
#include <stdio.h>

int sum(int a, int b){

	return a + b;
}

int sub (int a, int b){
	if (a < b) return -1;
	else return a - b;
}
void print_func (const int a, const int b){
	
	printf("The result of the sum is : %d\n", sum(a,b));
	printf("The result of the sum is : %d\n", sub(a,b));
}

void enter_number(int *a, int *b){
	while (scanf("%d %d", a, b) !=2){
		printf("Invalid input. Please enter two integers: ");
		while (getchar() != '\n')
		printf("Input buffer has been cleared.\n");
	}
}
