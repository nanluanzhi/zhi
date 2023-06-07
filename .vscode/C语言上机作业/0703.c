#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
void su(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            printf("该数不是一个素数\n");
            break;
        }
    }
    if(i==x)
    {
        printf("该数是一个素数\n");
    }
}
int main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    su(n);
	return EXIT_SUCCESS;
}