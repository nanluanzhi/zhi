#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    int x,y;
    printf("请输入一个数据：");
    scanf("%d",&x);
    if(x<1)
    y=x;
    else if(x>=1&&x<10)
    y=2*x-1;
    else
    y=3*x-11;
    printf("y=%d\n",y);
	return EXIT_SUCCESS;
}