#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define CHR_DEV_NAME "/dev/chr_demo"

int main()
{
    int ret;
    char buf[32];
    int fd  = open(CHR_DEV_NAME, O_RDONLY|O_NDELAY);
    if (fd < 0)
    {
        printf("error!\n");
        return -1;
    }
    read(fd, buf, 32);
    close(fd);
    return 0;
}