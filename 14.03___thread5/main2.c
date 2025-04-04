#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

extern int errno;

int main(void)
{
    int fd = open("foo.txt", O_RDONLY | O_CREAT);
    printf("fd = %d\n", fd);

    if(fd == -1)
    {
        printf("Error Number %d\n", errno);
        perror("program");
    }

    return 0;
}
