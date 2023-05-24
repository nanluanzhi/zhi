#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    char a='*';
    char b=' ';
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf("%c",b);
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",b);
        }
        for(j=1;j<=7-2*i;j++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
	return EXIT_SUCCESS;
}