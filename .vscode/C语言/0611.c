#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    char arr[5] = { '*','*','*','*','*' };
	int i, j,k;
	char spa = ' ';
	for (i = 0; i < 5; i++)
	{
		for (j = 1; j <=i; j++)
		{
			printf("%c", spa);
		}
		for (k = 0; k < 5; k++)
		{
			printf("%c", arr[k]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}