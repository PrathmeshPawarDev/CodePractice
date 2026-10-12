#include<stdio.h>

int main()
{
    int arr[5]={14,34,12,65,87};
    int large=0,small=0,pos=0;
    int *ptr=&arr;

    large=*ptr;
    for(int i=0;i<5;i++)
    {
        if(*ptr>large)
        {
            large=*ptr;
            pos=i;

        }
        ptr++;
    }
    printf("The largest number is :%d \nfound at %d position\n",large,pos);

    pos=0;
    
    small=*(ptr+0);
    for(int i=0;i<5;i++)
    {
        if(*(ptr+i)<small)
        {
            small=*(ptr+i);
            pos=i;
        }
    }
    printf("The samllest number is :%d \nfound at %d position\n",small,pos);


    return 0;
}