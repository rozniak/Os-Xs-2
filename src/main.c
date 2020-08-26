/**
 @file main.c
*/
#include <stdio.h>
#include <enet/enet.h>

int main(void)
{
    if (enet_initialize() != 0)
    {
        fprintf(stderr, "Initializing\n");
        exit(EXIT_FAILURE);
    }
    atexit(enet_deinitialize);

    printf("Hello world!\n");
    return 0;
}