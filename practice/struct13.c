#include<stdio.h>
struct Employee
{
    int id;
    char name[10];
    float salary;
};

int main()
{
    struct Employee arr[3];
    int flg=0;

    for(int i=0;i<3;i++)
    {
        printf("Enter employee %d id : ",i+1);
        scanf("%d",&arr[i].id);

        printf("Enter employee %d name :",i+1);
        scanf("%s",&arr[i].name);

        printf("Enter employee %d salary : ",i+1);
        scanf("%f",&arr[i].salary);
    }

    if(arr[0].salary>arr[1].salary && arr[0].salary>arr[2].salary)
    {
        flg=0;
    }
    else if(arr[1].salary>arr[0].salary && arr[1].salary>arr[2].salary)
    {
        flg=1;
    }
    else if(arr[2].salary>arr[0].salary && arr[2].salary>arr[1].salary)
    {
        flg=2;
    }
    
  

     printf("\n\nHighest salary  employee Details :\n");
     printf("ID : %d\n",arr[flg].id);
     printf("NAME : %s\n",arr[flg].name);
     printf("SALARY : %f\n",arr[flg].salary);

    return 0;
}