#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>     // If unlink gets error

int main()
{
    unlink("Marvellous.txt");

    return 0;
}