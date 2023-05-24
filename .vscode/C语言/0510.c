#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    double i,j=2.0,k=1.0,n,t,sum=0;
    for(i=1;i<=20;i++)
    {
        n=j/k;
        sum=sum+n;
        t=k;
        k=j;
        j=t+j;
    }
    printf("sum=%lf\n",sum);
	return EXIT_SUCCESS;
}