#include<stdio.h>
int main()
{
    int no=11;
    int *ptr=NULL;

    ptr=&no;

    printf("no :%d\n",no);//11
    printf("*ptr :%d\n",*ptr);//11

    printf("size of no :%d\n",sizeof(no));//4
    printf("size of *ptr :%d\n",sizeof(*ptr));//4
    printf("size of ptr :%d\n",sizeof(ptr));//8

     printf("ptr :%d\n",ptr);//100
     printf("&no :%d\n",&no);//100
     printf("ptr :%d\n",ptr+1);//108
    
    return 0;
}