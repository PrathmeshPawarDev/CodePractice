#include<stdio.h>
int main()
{
    int no=10;
    float f=10.1;

    void *vp=NULL;
    vp=&no;

    printf("%d\n",*(int *)vp);
    return 0;
}