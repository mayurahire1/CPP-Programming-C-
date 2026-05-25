#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd = 0;
    int ret = 0;
    char Arr[] = "Marvellous Infosystems";

    fd = open("Marvellous.txt", O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File gets opened with fd : %d \n", fd);

        ret = write(fd, Arr, 10);

        printf("%d bytes gets written into file\n",ret);
    }

    close(fd);

    return 0;
}