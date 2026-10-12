#include<stdio.h>
int main()
{
    int iarr[5]={11,22,33};
    float farr[5]={11.1,22.2,33.3}; 

    printf("%d\n",iarr[0]);//11
    printf("%d\n",iarr[1]);//22
    printf("%d\n",iarr[2]);//33
    printf("%d\n",iarr[3]);//0
    printf("%d\n",iarr[4]);//0

    printf("%f\n",farr[0]);//11.1
    printf("%f\n",farr[1]);//22.2
    printf("%.1f\n",farr[2]);//33.3
    printf("%f\n",farr[3]);//0.0
    printf("%f\n",farr[4]);//0.0
    


    return 0;
}