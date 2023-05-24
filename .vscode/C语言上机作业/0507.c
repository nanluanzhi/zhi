#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    int a,b,sum1=0,sum2=0;
    double c,sum3=0;
    double sum=0;
    for(int i=1;i<=100;i++)
    {
        a+=1;
        sum1=sum1+a;
    }
    for(int i=1;i<=50;i++)
    {
        b=pow(i,2);
        sum2=sum2+b;
    }
    for(int i=1;i<=10;i++)
    {
        c=1.0/i;
        sum3=sum3+c;
    }
    sum=sum1+sum2+sum3;
    printf("sum=%lf\n",sum);
	return EXIT_SUCCESS;
}