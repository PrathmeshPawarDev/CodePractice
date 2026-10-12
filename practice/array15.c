#include <stdio.h>
int main()
{
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};
    int sumR1 = 0, sumR2 = 0, sumR3 = 0;
    int sumC1 = 0, sumC2 = 0, sumC3 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0)
            {
                sumR1 = sumR1 + arr[i][j];
            }
            if (i == 1)
            {
                sumR2 = sumR2 + arr[i][j];
            }
            if (i == 2)
            {
                sumR3 = sumR3 + arr[i][j];
            }
            if (j == 0)
            {
                sumC1 = sumC1 + arr[i][j];
            }
            if (j == 1)
            {
                sumC2 = sumC2 + arr[i][j];
            }
            if (j == 2)
            {
                sumC3 = sumC3 + arr[i][j];
            }
        }
    }
    printf("sum of first row :%d\n", sumR1);
    printf("sum of second row :%d\n", sumR2);
    printf("sum of third row :%d\n", sumR3);

    printf("sum of first column :%d\n", sumC1);
    printf("sum of second column :%d\n", sumC2);
    printf("sum of third column :%d\n", sumC3);
    return 0;
}