#include <stdio.h>
#include <fcntl.h>

#include <stdlib.h>
#include <string.h>

#include <unistd.h>

int main(void)
{
    int sz;
    int fd = open("foo.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if(fd < 0)
    {
        perror("r1");
        exit(1);
    }

    sz = write(fd, "hello MSU Baku\n", strlen("hello MSU Baku\n"));


    printf("called write\n");
    close(fd);
    return 0;
}