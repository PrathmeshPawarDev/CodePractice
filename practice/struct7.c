#include <stdio.h>

struct Demo 
{
    int age ;
    float f;

    struct Hello//nested structure
    {
        int i;
    }hobj;
};//hello ka scope yaha khatam hota hai isliye is main me object Hello ka nahi bana sakte 

int main()
{
    struct Demo dobj;

    dobj.age=25;
    dobj.f=10.1f;
    dobj.hobj.i=10;

    printf("age : %d\n",dobj.age);
    printf("f :%f\n",dobj.f);
    printf("i :%d\n",dobj.hobj.i);

    return 0;
}