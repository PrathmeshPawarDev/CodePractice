#include<stdio.h>
int main()
{
    int arr[]={10,20,10,30,20,40,30};
    
    int count=0;
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(arr[i]==arr[j])
            {
                count=count+1;
            }
        }
        if(count!=0)
        arr[i]=0;
        count=0;
    }
    for(int i=0;i<7;i++)
    {
     if(arr[i]!=0)
        printf("%d\t",arr[i]);
    }
    return 0;
}