#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
void sort(int arr[])
{
    int i,j,k,t;
    for(i=0;i<4;i++)
    {
        k=i;
        for(j=i+1;j<5;j++)
        {
            if(arr[j]>arr[k])
            k=j;
        }
        if(k!=i)
        {
            t=arr[i];
            arr[i]=arr[k];
            arr[k]=t;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void sort2(int arr[])
{
    int i,j,t;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[]={12,35,32,67,45};
    sort(arr);
    sort2(arr);
	return EXIT_SUCCESS;
}