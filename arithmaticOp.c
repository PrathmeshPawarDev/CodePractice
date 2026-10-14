#include<stdio.h>
#include<stdlib.h>

int Addition(int No1,int No2)
{
    int iAns = 0;
    iAns = No1 + No2;
    return iAns;
}
int Subtraction(int No1,int No2)
{
    int iAns = 0;
    iAns = No1 - No2;
    return iAns;
}
int Multiplication(int No1,int No2)
{
    int iAns = 0;
    iAns = No1 * No2;
    return iAns;
}
int Division(int No1,int No2)
{
    int iAns = 0;
    iAns = No1 / No2;
    return iAns;
}
int Reminder(int No1,int No2)
{
    int iAns = 0;
    iAns = No1 % No2;
    return iAns;
}

int main()
{

    int iValue1 = 0,iValue2 = 0,iResult = 0 , iChoice = 0;

    printf("Enter First Number : \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"Enter only Integer : \n ");
    }
    printf("Enter Second Number : \n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"Enter only Integer : \n ");
    }

    

    
  

                
            printf("\n\n1. Addition \n");
            printf("2. Subtraction \n");
            printf("3. Multiplication \n");
            printf("4. Division \n");
            printf("5. Reminder \n");
            printf("6. Exit \n");

            printf("Enter Your Choice  : \n");
                if(scanf("%d",&iChoice) != 1)
                 {
                   fprintf(stderr,"Enter only Integer : \n ");
                 }

            switch(iChoice)
            {
                case 1:
                        iResult = Addition(iValue1,iValue2);
                        printf("The Addition is :%d\n",iResult);
                        break;
                case 2:
                        iResult = Subtraction(iValue1,iValue2);
                        printf("The Subtraction is :%d\n",iResult);
                        break;
                case 3:
                        iResult = Multiplication(iValue1,iValue2);
                        printf("The Multiplication is :%d\n",iResult);
                        break;    
                case 4:
                        iResult = Division(iValue1,iValue2);
                        printf("The Division is :%d\n",iResult);
                        break;      
                case 5:
                        iResult = Reminder(iValue1,iValue2);
                        printf("The Reminder is :%d\n",iResult);
                        break;                         
                case 6:
                        exit(0);
                default :
                        printf("Enter Valid Choice :\n");      
            
            }
    

    


    return EXIT_SUCCESS;
}