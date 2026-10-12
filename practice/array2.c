#include<stdio.h>
int main()
{
    float arr[5]={11.1,22.2,33.3,44.4,55.5,};

    printf("%f\n",arr[2]);//33.3
    printf("%f\n",arr[4]);//55.5
    printf("%d\n",sizeof(arr));//20 byte
    printf("%d\n",sizeof(arr[0]));//4 bytes

    return 0;
}