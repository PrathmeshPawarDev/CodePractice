#include<stdio.h>
int main()

{
    int arr[5]={11,22,33,44,55};

    printf("%d\n",arr[0]);//11
     printf("%d\n",*(arr+0));//11
     printf("%d\n",*(0+arr));//11
      printf("%d\n",0[arr]);//11
    return 0;
}