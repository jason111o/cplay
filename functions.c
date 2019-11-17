#include "headers.h"

void print_ascii()
{
    char *string = (char*)calloc(UCHAR_MAX, sizeof(char));
    printf("\nEnter a string to see the ascii values of each character\n");
    char c;
    c = getchar();
    unsigned long i = 0;
    while (c != '\n')
    {
        string[i] = (char)c;
        if (i == (UCHAR_MAX-2))
            break;
        i++;
        c = getchar();
    }
    fflush(stdin);

    printf("\n\033[01;34mCHAR ASCII\n");
    for (i = 0; i < strlen(string); i++)
    {
        printf("\033[01;33m %c \033[01;31m-\033[01;35m %d\033[0m\n", string[i], string[i]);
    }
    free(string);
}
