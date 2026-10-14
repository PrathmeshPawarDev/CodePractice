#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int ret =0 ;

    ret = unlink ("demo.txt");

    if(ret == -1)
    {
        printf("unable to delete file \n");
        return -1;
    }else
    {
        printf("File get deleted successfully \n");
        
    }
    return 0;
}