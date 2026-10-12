/*Write a C program to:

Take 5 integers from the user and store them in a one-dimensional array.
Print all 5 elements.
Print the sum of all elements.*/

#include<stdio.h>
int main()
{
    
    int sum=0,arr[5];//array declare

    //take 5 element from user 
    for(int i=0;i<5;i++)
    {
        printf("Enter %d Element : \n",i+1);
        scanf("%d",&arr[i]);
    }

    //display element from array
    for(int i=0;i<5;i++)
    {
        printf("%d \t",arr[i]);
        sum=sum+arr[i];
    }
    //display sum
    printf("\n Sum of all array elements :%d",sum);
    

    return 0;
}