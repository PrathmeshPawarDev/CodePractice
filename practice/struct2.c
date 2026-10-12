#include<stdio.h>

struct Demo
{
    int age ;
    float marks;
};

int main()
{
    struct Demo dobj;

    struct Demo *ptr =NULL;

    ptr=&dobj;

    ptr->age = 20;
    ptr->marks =82.32f;

    printf("%d\n",ptr->age);
    printf("%f\n",dobj.marks);






    return 0;
}