#include <stdio.h>

int main() {
	// print formatted - ������ ���ߴ�.
	printf("\"The truth is ... \nI am Ironman.\"\n");
	// escape sequence \n = new line

	int x, y, z;

	x = 2321;
	y = 3254;

	z = x + y;

	printf("\nThe anwser is %i.\n", z);

	printf("\n%i + %i = %i\n", x, y, z);
	printf("\a");

	return 0;
}