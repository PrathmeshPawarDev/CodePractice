#include<stdio.h>

struct Demo 
{
    int age ;
    float marks;
};

int main()
{
   struct Demo dobj1;
   struct Demo dobj2;
   struct Demo *ptr = NULL;

   ptr=&dobj2;

   printf("Enter Student1 age : \n");
   scanf("%d",&dobj1.age);

   printf("Enter Student1 Marks: \n");
   scanf("%f",&dobj1.marks);

   printf("Enter Student2 age : \n");
   scanf("%d",&ptr->age);

   printf("Enter Student2 Marks: \n");
   scanf("%f",&ptr->marks);

   printf("Student1 age :%d\n",dobj1.age);
   printf("Student1 Marks :%f\n",dobj1.marks);

   printf("Student2 age :%d\n",ptr->age);
   printf("Student1 Marks :%f\n",ptr->marks);


    return 0;
}