#include<stdio.h>

int addition(int num1,int num2)
{
    int result=0;
    result = num1+num2;

    return result;
}

int main()
{
     long int val1=0,val2=0,ans=0;

    printf("Enter 2 numbers :");
    scanf("%d%d",&val1,&val2);

    ans=addition(val1,val2);

    printf("Addition is :%d\n",ans);

    return 0;
}