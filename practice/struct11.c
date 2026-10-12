#include<stdio.h>

struct Hello
{
    int no;
    struct Hello *ptr;
};

int main()
{
    struct Hello *head=NULL;

    struct Hello hobj1,hobj2,hobj3;

    head=&hobj1;
    hobj1.ptr=&hobj2;
    hobj2.ptr=&hobj3;
    hobj3.ptr=NULL;

    head->no=11;
    head->ptr->no=21;
    head->ptr->ptr->no=51;

    printf("size of hobj1 :%d\n",sizeof(hobj1));//8

    printf("no of hobj1 :%d\n",hobj1.no);
    printf("no of hobj2 :%d\n",hobj2.no);
    printf("no of hobj3 :%d\n",hobj3.no);



    return 0;
}