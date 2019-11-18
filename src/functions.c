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

void print_hacker_name()
{
    char *string = (char*)calloc(UCHAR_MAX, sizeof(char));
    printf("\nEnter a name\n");
    char c;
    c = getchar();
    unsigned long i = 0;
    while (c != '\n')
    {
        string[i] = tolower((char)c);
        if (i == (UCHAR_MAX-2))
            break;
        else if (string[i] == 'e')
            string[i] = '3';
        else if (string[i] == 's')
            string[i] = '5';
        else if (string[i] == 'o')
            string[i] = '0';
        else if (string[i] == ' ')
            string[i] = '-';
        else if (string[i] == 'l')
            string[i] = '1';
        else if (string[i] == 'i')
            string[i] = 'I';
        i++;
        c = getchar();
    }
    fflush(stdin);

    printf("\n\033[01;34mYour hacker name is...\n");
    int color;
    for (i = 0, color = 1; i < strlen(string); i++, color++)
    {
        printf("\033[01;3%dm%c", color, string[i]);
        if (color == 7)
            color = 1;
    }
    printf("\033[0m\n");
    free(string);
}
