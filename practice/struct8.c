#include<stdio.h>

struct Hello
{
    int i;
};

struct Demo 
{
    int age ;
    float f;
    struct Hello hobj;
};

int main()
{
    struct Demo dobj;

    dobj.age=25;
    dobj.f= 10.11f;
    dobj.hobj.i=20;

    printf("size of dobj :%d\n",sizeof(dobj));//12 byte

    printf("age : %d\n",dobj.age);
    printf("F : %f\n",dobj.f);
    printf("i : %d\n",dobj.hobj.i);

    return 0;
}