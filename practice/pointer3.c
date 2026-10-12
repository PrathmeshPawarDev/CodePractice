#include<stdio.h>
int main()
{
    int arr[5]={11,22,33,44,55};
    int *ptr1=&arr;
    int *ptr2=arr;

    printf("%d\n",ptr1);//100
    printf("%d\n",ptr2);//100


    printf("%d\n",sizeof(arr));//20 byte
    printf("%d\n",*(ptr1+2));//33

    

    return 0;
}