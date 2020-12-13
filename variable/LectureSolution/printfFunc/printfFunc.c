#include <stdio.h>

void say_hello(void);

int main() {


	say_hello();

	// print formatted - 형식을 맞추다.
	printf("\"The truth is ... \nI am Ironman.\"\n");
	// escape sequence \n = new line

	int x, y, sum;

	x = 2321;
	y = 3254;

	sum = x + y;

	printf("\nThe anwser is %i.\n", sum);

	printf("\n%i + %i = %i\n", x, y, sum);
	// printf("\a");

	/*
		
	*/

	return 0;
}

void say_hello(void) {
	printf("Hello, World\n");
	
	return;
}