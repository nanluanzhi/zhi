#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    int i,sum,t;
    sum=0;
    t=1;
    for(i=1;i<=20;i++)
    {
        t=t*i;
        sum=sum+t;
    }
    printf("sum=%d\n",sum);
	return EXIT_SUCCESS;
}
