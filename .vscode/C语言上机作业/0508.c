#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    //求水仙花数
    int i,a,b,c;
    for(i=100;i<=999;i++)
    {
        a=i/100;
        b=i/10%10;
        c=i%10;
        if(i==a*a*a+b*b*b+c*c*c)
        {
            printf("%d\n",i);
        }
    }
	return EXIT_SUCCESS;
}