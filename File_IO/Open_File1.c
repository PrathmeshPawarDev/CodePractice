#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd =0 ;

    fd = open("Hello.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file..");

        return -1;
    }
    else{
        printf("file is open with fd ;%d",fd);

        close(fd);
    }

    return 0;
}