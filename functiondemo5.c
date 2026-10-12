#include<stdio.h>

void addition(int no1,int no2)
{
    int result=0;
    result=no1+no2; //bussiness logic

    printf("addition is :%d\n",result);

}

int main()
{
    
    int value1=0,value2=0;

    printf("Enter first number :\n");
    scanf("%d",&value1);

    printf("Enter second number :\n");
    scanf("%d",&value2);

    addition(value1,value2);//function call

    return 0;
}