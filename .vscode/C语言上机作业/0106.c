
#include <stdio.h>
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    printf("请输入三个数据：");
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=max(max(a,b),c);
    printf("max is %d\n",d);
	return 0;
}