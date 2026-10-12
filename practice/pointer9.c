#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr=NULL;

    ptr=&arr;

    for(int i=0;i<5;i++)
    {
         printf("%d\t",*(ptr+i));
    }
    return 0;
}