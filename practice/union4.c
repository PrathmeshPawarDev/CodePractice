#include<stdio.h>

union Student
{
    int rollno;
    float marks;
    char grade;
};

int main()
{
    union Student std;

    std.rollno=101;
    printf("Roll number is :%d\n",std.rollno);

    std.marks=85.5;
    printf("marks is :%f\n",std.marks);

    std.grade='A';
    printf("Grade is :%c\n",std.grade);

    printf("size of student union :%d\n",sizeof(std));


    return 0;
}