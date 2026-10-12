#include<stdio.h>
int main()
{
    int largest ,arr[5]={10, 25, 7, 40, 18};
    int *ptr=NULL;

    ptr=&arr;
    largest=*ptr;

    for(int i=0;i<5;i++)
    {
        if(*(ptr+i)>largest)
        {
            largest=*(ptr+i);
        }
    }

    printf("largest number is :%d\n",largest);

    return 0;
}