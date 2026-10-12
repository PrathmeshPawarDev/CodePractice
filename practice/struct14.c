#include<stdio.h>

struct Demo
{
    int arr[3];
    float f;
};

int main()
{
    struct Demo arr[3] ;

    arr[0].arr[0]=11;
    arr[0].arr[1]=12;
    arr[0].arr[2]=13;

    arr[1].arr[0]=21;
    arr[1].arr[1]=22;
    arr[1].arr[2]=23;

    arr[2].arr[0]=31;
    arr[2].arr[1]=32;
    arr[2].arr[2]=33;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\n",arr[i].arr[j]);
        }
    }

    return 0;
}