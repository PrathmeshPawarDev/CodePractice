#include<stdio.h>
int main()
{
    int i=10;
    int j=20;
    int k=30;

    int *arr[3]={&i,&j,&k};

    printf("%d\n",j);//20
    printf("%d\n",*(arr[1]));//20

    printf("%d\n",&i);//100
    printf("%d\n",arr[0]);//100

    printf("%d\n",arr[1]);//104
    printf("%d\n",arr[2]);


    return 0;
}