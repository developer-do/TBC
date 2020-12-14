#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <climits>
#include <stdlib.h>


int main() 
{
	unsigned int u_max = UINT_MAX + 2;
	unsigned int u_min = 0;
	signed int i_max = INT_MAX;
	signed int i_min = INT_MIN;

	// printf("%u\n", sizeof(unsigned int));
	printf("max of uint = %u\n", u_max);
	printf("min of uint = %u\n", u_min);
	printf("max of int = %d\n", i_max);
	printf("min of int = %d\n", i_min);

	// i to binary representation
	char buffer[33];
	_itoa(u_max, buffer, 2);

	// print decimal and binary
	printf("decimal: %u\n", u_max);
	printf("binary: %s\n", buffer);

	return 0;
}