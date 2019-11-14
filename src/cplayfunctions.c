#include "cplay.h"

// Check if /proc/version exist and verify Linux
void is_linux()
{
    FILE *ptr = fopen("/proc/version", "r");
    if (ptr == NULL)
    {
        printf("\n /proc/version NOT FOUND!\n This program should be run on a Linux based system.\n\n");
        exit(99);
    }

    char linux[] = "linux";
    char *version = calloc(6, sizeof(char));
    int i = 0;
    while (i < 5)
    {
        version[i] = (char)tolower(getc(ptr));
        i++;
    }
    if (strcmp(linux, version) != 0)
    {
        printf(" Expected: %s\n Found: %s\n", linux, version);
        fclose(ptr);
        free(version);
        exit(99);
    }

    fclose(ptr);
    free(version);
}
