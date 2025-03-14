#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

extern int errno;

int main(void)
{
    int fd1 = open("foo.txt", O_RDONLY);

    if(fd1 < 0)
    {
        perror("c1");
    }

    printf("Opened the fd = %d\n", fd1);

    if(close(fd1) < 0)
    {
        perror("c1");
        exit(1);
    }

    printf("closed the file\n");

    return 0;
}
