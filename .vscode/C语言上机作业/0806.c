#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    char ch[100];
    char *p;
    int i;
    printf("请输入一个字符串：");
    scanf("%s", ch);
    p = ch;
    for (i = 0; *p != '\0'; i++)
    {
        p++;
    }
    printf("该字符串的长度为%d\n", i);
    return EXIT_SUCCESS;
}
