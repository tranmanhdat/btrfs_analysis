#include <stdlib.h>	/* exit() */
#include <fcntl.h>	/* open() */

char *workfile = “junk”;

main()
{
    int fd;
    fd = open(file_path, O_RDWR);
    if( fd == -1 )
    {
        printf(“Couldn’t open %s\n”, workfile);
        exit(1);
    }

    exit(0);
}
