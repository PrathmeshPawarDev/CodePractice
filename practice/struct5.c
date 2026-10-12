#include<stdio.h>

struct Demo
{
    int age;
    int *ptr;
};

int main()
{

    struct Demo dobj;

    int i =10;

    dobj.age=25;
    dobj.ptr=&i;

    printf("age : %d\n",dobj.age);
    printf(" i :%d\n",*(dobj.ptr));



    return 0;
}