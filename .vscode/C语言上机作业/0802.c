#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    char str[3][20];
    int i;
    for(i=0;i<=2;i++)
    {
        scanf("%s", str[i]);
    }
    char *p1, *p2, *p3;
    p1 = str[0];
    p2 = str[1];
    p3 = str[2];
    if(strcmp(p1,p2) > 0)
    {
        char t[20];
        strcpy(t,p1);
        strcpy(p1, p2);
        strcpy(p2, t);
    }
    if(strcmp(p1,p3) > 0)
    {
        char t[20];
        strcpy(t,p1);
        strcpy(p1,p3);
        strcpy(p3,t);
    }
    if(strcmp(p2,p3) > 0)
    {
        char t[20];
        strcpy(t,p2);
        strcpy(p2,p3);
        strcpy(p3,t);
    }
    printf("%s\n%s\n%s", p1, p2, p3);
    return EXIT_SUCCESS;
}