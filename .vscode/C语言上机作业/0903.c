#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
struct student
{
    char num;
    char name[20];
    int score[3];
}stu[5];
void print(struct student stu[5])
{
    int i,j;
    printf("请输入编号，姓名和成绩：");
    for(i=0;i<5;i++)
    {
        printf("%5s%10s",stu[i].num,stu[i].name);
        for(j=0;j<3;j++)
            printf("%9d",stu[i].score[j]);
        printf("\n");
    }
}
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("输入学生的成绩%d:\n",i+1);
        printf("编号为:");
        scanf("%s",stu[i].num);
        printf("姓名为:");
        scanf("%s",stu[i].name);
        for(j=0;j<3;j++)
        {
            printf("分数为%d:",j+1);
            scanf("%d",&stu[i].score[j]);
        }
        printf("\n");
    }
    print(stu);
	return EXIT_SUCCESS;
}