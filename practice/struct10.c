#include<stdio.h>

struct Demo
{
    int age;
    struct Hello 
    {
        int i;
        float f;
    }hobj;
    struct Hello *ptr;
};

int main()
{
     struct Demo dobj;

     dobj.ptr=&dobj.hobj;

     dobj.age=25;

     dobj.ptr->i=10;
     dobj.ptr->f=10.11f;

     printf("size of dobj : %d\n",sizeof(dobj));//20 or 16

     printf("age :%d\n",dobj.age);//25

     printf("i :%d\n",dobj.ptr->i);//10
     printf("f : %f\n",dobj.ptr->f);//10.11

     printf("i :%d\n",dobj.hobj.i);//10
     printf("f :%f\n",dobj.hobj.f);//10.11
     
    return 0;
}