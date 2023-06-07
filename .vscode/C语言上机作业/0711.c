#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
void Bubblesort(int arr[10])
{
    int i,j,t;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
int main()
{
    int arr[10]={1,4,8,3,5,2,9,6,7,10};
    Bubblesort(arr);
    int i;
    for(i=0;i<=9;i++)
    {
        printf("%d ",arr[i]);
    }
	return EXIT_SUCCESS;
}