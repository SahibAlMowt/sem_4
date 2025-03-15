#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <stdlib.h>

int main()
{
    char buffer[10];
    int BytesRead;
    
    BytesRead = syscall(SYS_read, 0, buffer, sizeof(buffer) - 1);

    if(BytesRead == -1)
    {
        perror("syscall failed");
        exit(1);
    }
    buffer[BytesRead] = '\0';

    printf("You taped %s\n", buffer);

    return 0;
}