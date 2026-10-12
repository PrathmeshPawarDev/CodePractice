#include<stdio.h>
#pragma pack(1)
struct demo
{
    int i;
    float f;
    struct hello
    {
        int no;
        float marks;
    };
};

int main()
{

    struct demo dobj;

    printf("%d\n",sizeof(dobj));//8 bytes

    return 0;
}