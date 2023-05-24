#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    int i,j,k;
    for(i=1;i<=1000;i++)
    {
        k=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                k=k+j;
            }
        }
        if(k==i)
        {
            printf("%d\n",i);
        }
    }
	return EXIT_SUCCESS;
}