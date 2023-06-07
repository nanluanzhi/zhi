#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
 int total(char ch[])
{
	int i = 0, j = 0, k = 0, l = 0,m;
	
	for(m=0;ch[m]!='\0';m++)
	{
		if (ch[m] >= 'a' && ch[m] <= 'z' || ch[m] >= 'A' && ch[m] <= 'Z')
			i++;
		else if (ch[m] == ' ')
			j++;
		else if (ch[m] >= '0' && ch[m] <= '9')
			k++;
		else
			l++;
	}
	printf("英文字母的个数为%d\n", i);
	printf("空格的个数为%d\n", j);
	printf("数字的个数为%d\n", k);
	printf("其他字符的个数为%d\n", l);
}
int main()
{
	char ch[] = { 'a','b','c',' ','1','\0'};
	total(ch);
	return EXIT_SUCCESS;
}