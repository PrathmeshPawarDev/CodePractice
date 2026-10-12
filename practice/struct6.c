#include<stdio.h>

struct Demo
{
    int age;
    float arr[3];
};

int main()
{
    struct Demo dobj;

    dobj.age=25;
    dobj.arr[0]=10.1f;
    dobj.arr[1]=20.1f;
    dobj.arr[2]=30.1f;

    printf("age :%d\n",dobj.age);

    /*
    printf("%f\n",dobj.arr[0]);
    printf("%f\n",dobj.arr[1]);
    printf("%f\n",dobj.arr[2]);
    */

    for(int i=0;   i<sizeof(dobj.arr)/sizeof(dobj.arr[0])  ;i++)              /*sizeof(dobj.arr)    = 12 bytes
                                                                         sizeof(dobj.arr[0]) = 4 bytes
                                                                        12 / 4 = 3 elements*/
    {
            printf("%f\n",dobj.arr[i]);
    }
    

    return 0;
}