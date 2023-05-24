#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    char ch1[100];
    char ch2[100];
    gets(ch1);
    int i;
    for(i=0;i<strlen(ch1);i++)
    {
        if(ch1[i]>='A'&&ch1[i]<='Z')
        {
            ch2[i]=90-ch1[i]+65;
        }
        else if(ch1[i]>='a'&&ch1[i]<='z')
        {
            ch2[i]=122-ch1[i]+97;
        }
        else
        {
            ch2[i]=ch1[i];
        }
    }
    printf("原文为%s\n",ch1);
    printf("密码为%s\n",ch2);
	return EXIT_SUCCESS;
}