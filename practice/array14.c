#include<stdio.h>
int main()
{
    int arr[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  int sum1=0,sum2=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                sum1=sum1+arr[i][j];
            }
            if(i+j==2)
            {
                sum2=sum2+arr[i][j];
            }

        }
    }
    printf("sum of 1st daigonL is :%d\n",sum1);
    printf("sum of 2nt daigonL is :%d\n",sum2);

    return 0;
}