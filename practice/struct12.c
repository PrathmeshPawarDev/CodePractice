#include<stdio.h>

struct Demo 
{
    int age;
    float marks;
};

int main()
{
    struct Demo arr[3];//size of arr is 24 byte

    for(int i=0;i<3;i++)
    {
        printf("Enter student %d age :\n",i+1);
        scanf("%d",&arr[i].age);

        printf("Enter student %d Marks :\n",i+1);
        scanf("%f",&arr[i].marks);
    }

    for(int i=0;i<3;i++)
    {
        printf(" student %d age : %d\n",i+1,arr[i].age);
        printf(" student %d Marks : %f\n",i+1,arr[i].marks);
    }




    return 0;
}