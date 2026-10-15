#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;


    printf("Enter Your Name \n ");
    scanf("%[^'\n']s",sName);  //Enter remains in input buffer

    printf("Enter your Age :\n");
    scanf(" %d",&iAge);//buffer  flush space added 

    printf("Enter Your Marks \n");
    scanf("%f",&fMarks);


    printf("Welcome %s \n",sName);
    printf("Your Age : %d \n",iAge);
    printf("Your Marks %f \n",fMarks);


    return EXIT_SUCCESS;
}