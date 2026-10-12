#include<stdio.h>
int main()
{
    int largest,secondlargest=0;
    int arr[5]={21,12,90,34,54};

    largest =arr[0];

    for(int i=0;i<5;i++)
    {
             if(arr[i]>largest)
            {
                secondlargest=largest;
                largest=arr[i];
            }
    }
    
    for (int i=0;i<5;i++)
    {
        if(arr[i]<largest && arr[i]>secondlargest)
        {
            secondlargest=arr[i];
        }
    }
    printf("Largest number :%d\n",largest);
    printf("Second Largest number :%d\n",secondlargest);

    return 0;
}