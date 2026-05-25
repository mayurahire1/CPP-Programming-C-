#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd = 0;
    int ret = 0;
    char Arr[20];

    fd = open("Marvellous.txt", O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File gets opened with fd : %d \n", fd);

        ret = read(fd, Arr,6);

        printf("%d bytes gets read from the file\n",ret);

        printf("%s\n",Arr);
    }

    close(fd);

    return 0;
}