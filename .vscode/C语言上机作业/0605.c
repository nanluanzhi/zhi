#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    int arr[5]={8,6,5,4,1};
    int i,j,t;
    for(int i=0;i<2;i++)
    {
        t=arr[i];
        arr[i]=arr[4-i];
        arr[4-i]=t;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
	return EXIT_SUCCESS;
}