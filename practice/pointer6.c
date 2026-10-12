#include<stdio.h>
int main()

{
    int arr[5]={11,22,33,44,55};

    printf("%d\n",arr[2]);//33
    printf("%d\n",*(arr+2));//33
    printf("%d\n",*(2+arr));//33
    printf("%d\n",2[arr]);//33

    return 0;
}