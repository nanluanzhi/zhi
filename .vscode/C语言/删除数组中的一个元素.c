#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x,i, y = 0;
    flag:
    printf("请输入要删除的数：");
    scanf("%d", &x);
    for ( i = 0; i < 10; i++)
    {
        if (x == arr[i])
        {
            y = i;
            for (int i = y; i < 10; i++)
            {
                arr[i] = arr[i + 1];
            }
            for (int i = 0; i < 9; i++)
            {
                printf("%d ", arr[i]);
            }
            break;
        }
    }
    if (i>=10)
    {
        printf("未找到该数字，请重新输入\n");
        goto flag;
    }
    return 0;
}