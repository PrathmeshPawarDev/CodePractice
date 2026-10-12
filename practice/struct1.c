#include<stdio.h>

struct demo
{
    int age;
    float marks;
};
int main()
{
        struct demo dobj;

        dobj.age=25;
        dobj.marks=72.92f;

        printf("age is %d\n",dobj.age);
        printf("marks are %f\n",dobj.marks);

        return 0;
}