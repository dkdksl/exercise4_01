#include <stdio.h>

//��ó: https://www.techiedelight.com/implement-strcmp-function-c/
// Function to implement strcmp function
int strcmp(const char *X, const char *Y)
{
	while (*X)
	{
		// if characters differ, or end of the second string is reached
		if (*X != *Y) {
			break;
		}
		// move to the next pair of characters
		X++;
		Y++;
	}
	// return the ASCII difference after converting `char*` to `unsigned char*`
	return *(const unsigned char*)X - *(const unsigned char*)Y;
}