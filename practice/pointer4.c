#include<stdio.h>
int main()
{
    int arr[3]={11,22,33};
    int *ptr=&arr[2];

    printf("%d\n",&arr[1]);//104
    printf("%d\n",&arr[2]);//108
    printf("%d\n",ptr);//108


    return 0;
}