#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

extern int errno;

int main()
{
    int fd;
    int sz;

    char *c = (char*)calloc(100, sizeof(char));

    fd = open("foo.txt", O_RDONLY);

    if(fd < 0)
    {
        perror("r1");
        exit(1);
    }

    sz = read(fd, c, 10);
    printf("called read (%d,c,10) returned that %d bytes were read\n", fd, sz);

    c[sz] = '\0';

    printf("I love bytes are %s\n", c);

    return 0;
}