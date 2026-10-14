#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd =0 ;

    char arr[] = "Marvellous infosystem";

    fd = open("Hello.txt",O_RDWR | O_APPEND );



    if(fd == -1)
    {
        printf("Unable to open the file..");

        return -1;
    }
    else{
        printf("file is open with fd ;%d",fd);

        write(fd,arr,10);
        close(fd);
    }

    return 0;
}