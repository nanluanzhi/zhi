#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
void fan(char ch[])
{
	char t;
	int i, j;
	for (i = 0, j = strlen(ch); i < (strlen(ch) / 2); i++, j--)
	{
		t = ch[i];
		ch[i] = ch[j - 1];
		ch[j - i] = t;
	}
}
int main()
{
	char ch[100];
	printf("请输入一个字符串：");
	scanf("%s",ch);
	fan(ch);
	printf("%s\n", ch);
	return 0;
}