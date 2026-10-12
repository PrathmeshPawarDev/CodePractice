#include<stdio.h>

union demo
{
    int i;
    char ch;
};

int main()
{
    union demo dobj;

    dobj.i=20;
    dobj.ch='a';

    printf("%d\n",dobj.i);
    printf("%c\n",dobj.ch);

    return 0;
}