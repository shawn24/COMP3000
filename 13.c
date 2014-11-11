#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])

{
	struct stat buf;
	if(argc < 2)
    {
        printf("please input filepath!\n");
        return;
    }

    if(stat(argv[1],&buf)<0)
    {
        printf("file not exiting.!\n");
        return;
    }
    printf("%s \n", argv[1]);
    printf("file size                  = %d \n", buf.st_size); 
    printf("blocksize                  = %d \n", buf.st_blksize);
    printf("number of blocks allocated = %d \n", buf.st_blocks);
    printf("number of hard link        = %d \n", buf.st_nlink);
}

