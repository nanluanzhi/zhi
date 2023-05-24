#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    int a,b;
    flag:
    scanf("%d",&a);
    if(a<1000&&a>0)
    {
       b=sqrt(a);
    }
    else
    {
        printf("重新输入：");
        goto flag;
    }
    printf("%d\n",b);
	return EXIT_SUCCESS;
}