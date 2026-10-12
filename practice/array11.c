#include<stdio.h>
int main()
{
    int arr[3][3],cnt=1;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter %d element :",cnt);
            scanf("%d",&arr[i][j]);
            cnt++;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d \t",arr[i][j]);
            
        } printf("\n");
    }

    return 0;
}