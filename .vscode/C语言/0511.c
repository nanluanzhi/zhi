#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    double heigh=100.0;
    double sum=0;
    for(int i=1;i<=10;i++)
    {
        sum+=heigh;
        heigh=heigh/2;
        sum+=heigh;
    }
    sum-=heigh;
    printf("第十次落地时共经过%f米\n",sum);
    printf("第十次反弹%f米\n",heigh);
	return EXIT_SUCCESS;
}