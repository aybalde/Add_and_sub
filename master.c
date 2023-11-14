#include "function.h" 
  

int main (void){
	

	int x = 0, y = 0;
	enter_number( &x, &y);
	int (*ptr)(const int , const int ) = sum;
	printf("first print pointer: %d\n", ptr(x,y));
	printf("hello sorry\n");
	print_func (x, y);
  	return 0;
 }
