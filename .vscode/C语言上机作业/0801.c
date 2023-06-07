#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    int a, b, c;
    int *p1, *p2, *p3;
    printf("请输入三个整数：");
    scanf("%d%d%d", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    if (*p1 > *p2)
    {
        int t = *p1;
        *p1 = *p2;
        *p2 = t;
    }
    if (*p1 > *p3)
    {
        int t = *p1;
        *p1 = *p3;
        *p3 = t;
    }
    if (*p2 > *p3)
    {
        int t = *p2;
        *p2 = *p3;
        *p3 = t;
    }
    printf("排序后的结果为：%d %d %d\n", *p1, *p2, *p3);
	return EXIT_SUCCESS;
}