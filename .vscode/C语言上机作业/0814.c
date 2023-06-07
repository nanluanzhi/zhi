#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
 
void reverse(int *arr, int n)
{
    int *p1 = arr, *p2 = arr + n - 1;
    while(p1 < p2){
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }
}
int main(){
    int arr[5];
    int i;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, n);
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}