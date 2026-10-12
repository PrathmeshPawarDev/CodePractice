#include<stdio.h>

union demo
{
    int i;
    union hello
    {
        int i;
    }hobj;
};

int main()
{
    union demo dobj;

    
    return 0;
}