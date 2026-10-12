#include<stdio.h>

struct Demo
{
    struct I
    {
        struct J
        {
            struct K
            {
                    int i;
            }kobj;
        }jobj;
    }iobj;
};

int main()
{
    struct Demo dobj;

    dobj.iobj.jobj.kobj.i=10;

    printf("i:%d\n",dobj.iobj.jobj.kobj.i);//10

    return 0;
}