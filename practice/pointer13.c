#include<stdio.h>

int main()
{
    int arr[5]={14,34,12,65,87};
    int large=0,small=0,largepos=0,smallpos=0;
    int *ptr=&arr;

    large=*ptr;
    for(int i=0;i<5;i++)
    {
        if(*ptr>large)
        {
            large=*ptr;
            largepos=i;

        }
        ptr++;
    }
    printf("The largest number is :%d \nfound at %d position\n",large,largepos);

    ptr=arr;
    small=*ptr;
    for(int i=0;i<5;i++)
    {
        if(*ptr<small)
        {
            small=*ptr;
            smallpos=i;
        }
        ptr++;
    }
    printf("The samllest number is :%d \nfound at %d position\n",small,smallpos);


    return 0;
}