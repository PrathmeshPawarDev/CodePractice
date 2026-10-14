#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd =0 ;

    fd = creat("Demo.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create the file..");

        return -1;
    }
    else{
        printf("file is created with fd ;%d",fd);
    }

    return 0;
}