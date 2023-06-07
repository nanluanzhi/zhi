#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int max1(int a,int b)
{
    int i;
    int min=a<b?a:b;
    for(i=min;min>=1;min--)
    {
        if(a%min==0&&b%min==0)
        {
            break;
        }
    }
    return min;
}
int min1(int a,int b)
{
    int i;
    int max=a>b?a:b;
    for(i=max;;max++)
    {
        if(max%a==0&&max%b==0)
        {
            break;
        }
    }
    return max;
}
int main()
{
    int a,b;
    int min,max;
    printf("请输入两个整数：");
    scanf("%d%d",&a,&b);
    min=max1(a,b);
    max=min1(a,b);
    printf("最大公约数为%d\n",min);
    printf("最小公倍数为%d\n",max);
	return EXIT_SUCCESS;
}