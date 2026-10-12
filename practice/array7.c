#include<stdio.h>
int main()
{
    int arr[5];

    printf("%d\n",arr);//100
    printf("%d\n",&arr);//100
    printf("%d\n",arr+1);//104
    printf("%d\n",&arr[1]);//104
    printf("%d\n",&arr+1);//120

    return 0;
}