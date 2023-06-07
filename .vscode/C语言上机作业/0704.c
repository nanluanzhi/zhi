#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
void ex(int arr[3][3])
{
	int temp;
	for (int i = 0; i<3;i++)
	{
		for (int j = i+1; j < 3; j++)
		{
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
}
int main()
{
	int arr[3][3] = { { 1,2,3 },{ 4, 5, 6 },{7, 8, 9} };
	ex(arr);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}