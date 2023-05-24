#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    int arr[10][10];
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<=i;j++)
        {
            arr[i][0]=1;
            arr[i][i]=1;
        }
    }
    for(i=1;i<10;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
	return EXIT_SUCCESS;
}