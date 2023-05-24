#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    double x,y;
    printf("请输入一个坐标：");
    scanf("%lf%lf",&x,&y);
    if (sqrt(pow(x+2,2)+pow(y-2,2))<=1)
    {
        printf("该点的建筑高度为10\n");
    }
    else  if (sqrt(pow(x-2,2)+pow(y-2,2))<=1)
    {
        printf("该点的建筑高度为10\n");
    }
    else  if (sqrt(pow(x+2,2)+pow(y+2,2))<=1)
    {
        printf("该点的建筑高度为10\n");
    }
    else  if (sqrt(pow(x-2,2)+pow(y+2,2))<=1)
    {
        printf("该点的建筑高度为10\n");
    }
    else
    printf("该点的建筑高度为0\n");
	return EXIT_SUCCESS;
}