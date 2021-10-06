#include <stdio.h>
#include <stdlib.h>
#include <zconf.h>
#include <string.h>

int main()
{
    int i;
    int mb;
    int *ptr;

    i = 0;
    mb = 10485760;
    for (i = 0; i < 10; i++)
    {
        ptr = (int *)malloc(mb);
        memset(ptr, 0, mb);
        sleep(1);
    }
    return 0;
}
