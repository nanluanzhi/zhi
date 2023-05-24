#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
void fun(int arr[],int n)
{
    int i,j,k,t;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[k])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            t=arr[i];
            arr[i]=arr[k];
            arr[k]=t;
        }
    }
}
int main()
{
    int arr[10];
    printf("请输入十个整数:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(arr,10);
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
	return EXIT_SUCCESS;
}