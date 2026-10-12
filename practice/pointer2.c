#include<stdio.h>
int main()
{

    int no=10;
    int *ptr1=&no;
    int **ptr2=&ptr1;
    int ***ptr3=&ptr2;
    int ****ptr4=&ptr3;
    int *****ptr5=&ptr4;

    printf("%d\n",**ptr3);
    printf("ptr :%d\n",ptr1);

    printf("no :%d\n",*****ptr5);

    return 0;
}