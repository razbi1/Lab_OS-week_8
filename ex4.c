#include <stdio.h>
#include <stdlib.h>
#include <zconf.h>
#include <string.h>
#include <sys/resource.h>

int main()
{
    int i;
    int mb;
    int *ptr;
    struct rusage usage;

    i = 0;
    mb = 10485760;
    for (i = 0; i < 10; i++)
    {
        ptr = (int *)malloc(mb);
        memset(ptr, 0, mb);
        getrusage(RUSAGE_SELF, &usage);
        printf("%ld\n", usage.ru_maxrss);
        sleep(1);
    }
    return 0;
}
