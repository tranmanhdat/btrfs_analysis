#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>


int main()
{
    int fd;
    fd = open("/mnt/btrfs_mount/text_file.txt", O_RDONLY | O_CREAT);
    printf("fd = %d\n", fd);
    if( fd == -1 )
    {
        printf("Could not open file!");
        exit(1);
    }
    exit(0);
}
