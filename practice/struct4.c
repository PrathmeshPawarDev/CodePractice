
#include<stdio.h>
#pragma pack(1)// 1 2 4 8 
struct Demo 
{
    int i;
    char ch;
    float f;
}dobj;

int main()
{
     printf("%d\n",sizeof(dobj));// without #pragma pack(1) ans is 12 byte,// with #pragma pack(1) ans is 9 byte
    return 0;
}