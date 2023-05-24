
#include <stdio.h>
int max(int a,int b)
{
    return a>b?a:b;

}
int main()
{
    int a,b,c;
    printf("请输入两个数据：");
    scanf("%d%d",&a,&b);
    c=max(a,b);
    printf("max is %d\n",c);
	return 0;
}