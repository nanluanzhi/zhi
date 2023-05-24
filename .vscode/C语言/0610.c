#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
    char ch[3][80];
    int E,e,n,s,o;
    E=e=n=s=o=0;
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("请输入第%d行文字：\n", i + 1);
        gets(ch[i]);
        for(j=0;j<80&&ch[i][j]!='\0';j++)
        {
            if(ch[i][j]<='Z'&&ch[i][j]>='A')
            {
                E++;
            }
            else if(ch[i][j]<='z'&&ch[i][j]>='a')
            {
                e++;
            }
            else if(ch[i][j]<='9'&&ch[i][j]>='0')
            {
                n++;
            }
            else if(ch[i][j]==' ')
            {
                s++;
            }
            else
            {
                o++;
            }
        }
    }
    printf("大写字母：%d\n",E);
    printf("小写字母：%d\n",e);
    printf("数字：%d\n",n);
    printf("空格：%d\n",s);
    printf("其他：%d\n",o);
	return EXIT_SUCCESS;
}