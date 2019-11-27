#include "headers.h"

void print_ascii()
{
    system("clear");
    size_t i = 0;
    char *string = (char*)calloc(UCHAR_MAX, sizeof(char));
    if (string == NULL)
    {
        fprintf(stderr, "Could not allocate memory for string\n");
        exit(1);
    }
    printf("\n Find ASCII values for: ");
    char c = getchar();
    while ((c = getchar()) != '\n')
    {
        string[i] = c;
        i++;
    }

    printf("\n \033[01;34mCHAR ASCII\n");
    for (i = 0; i < strlen(string); i++)
    {
        printf(" \033[01;33m %c \033[01;31m-\033[01;35m %d\033[0m\n", string[i], string[i]);
    }
    printf("\n");
    free(string);
    printf(" Press Enter\n");
    while ((getchar()) != '\n');
    system("clear");
}

void print_hacker_name()
{
    system("clear");
    char *string = (char*)calloc(CHAR_MAX, sizeof(char));
    if (string == NULL)
    {
        fprintf(stderr, "Could not allocate memory for string\n");
        exit(1);
    }
    printf("\n Name: ");
    size_t i = 0;
    char c = getchar();
    while ((c = getchar()) != '\n')
    {
        string[i] = tolower(c);
        i++;
    }

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'e')
            string[i] = '3';
        else if (string[i] == 's')
            string[i] = '5';
        else if (string[i] == 'o')
            string[i] = '0';
        else if (string[i] == ' ')
            string[i] = '~';
        else if (string[i] == 'l')
            string[i] = '1';
        else if (string[i] == 'i')
            string[i] = 'I';
        else if (string[i] == 'h')
            string[i] = '4';
        else if (string[i] == 't')
            string[i] = '7';
        else if (string[i] == 'p')
            string[i] = '9';
        else if (string[i] == 'n')
            string[i] = 'u';
    }

    printf("\n \033[01;31m%s\n", string);
    
    printf("\n \033[0mPress Enter\n");
    while ((getchar()) != '\n');
    if (string)
        free(string);
    system("clear");
}

void find_cubic_yard()
{
    system("clear");
    printf(" Enter numeric/decimal values\n");
    printf("\n Height: ");
    double h;
    if (scanf("%lf", &h) == 0)
    {
        fprintf(stderr, "scanf failed to get int w\n");
        exit(1);
    }
    printf(" Width: ");
    double w;
    if (scanf("%lf", &w) == 0)
    {
        fprintf(stderr, "scanf failed to get int w\n");
        exit(1);
    }
    printf(" Length: ");
    double l;
    if (scanf("%lf", &l) == 0)
    {
        fprintf(stderr, "scanf failed to get int w\n");
        exit(1);
    }
    printf("\n \033[01;33m%.2lf \033[01;37mCY\n\n\033[0m", (double) ((l*w*h) / 27));
    printf("Press Enter\n");
    getchar();
    while ((getchar()) != '\n');
    system("clear");
}

void brian()
{
    system("clear");

    char *name = (char *) calloc(10, sizeof(char));
    unsigned int i;
    int end = 1;

    while (end == 1)
    {
        printf("\033[31;36mWho wants to speak to Brian?\n\033[31;33m");
        if (scanf("%s", name) == 0)
            name = "anybody";
        while ((getchar()) != '\n');

        for (i = 0; i < strlen(name); i++)
            name[i] = (char) tolower(name[i]);
        if ((strcmp(name, "jason")) == 0)
            printf("\nStill got that bitch Noah workig with you!?\n\n");
        else if (strcmp(name, "jessie") == 0)
            printf("\nHow can you work with these punks?\n\n");
        else if (strcmp(name, "twin") == 0)
            printf("\nWhere's that albino Kevin Heart hiding?\n\n");
        else if (strcmp(name, "noah") == 0)
            printf("\nI need my underware back and your finger condom is stuck in my ass.\n\n");
        else if (strcmp(name, "rut") == 0)
            printf("\nGoddam Rut, my fucking mouth is already stretched out!\n\n");
        else if (strcmp(name, "keith") == 0)
            printf("\nYou big, but you still a bitch.\n\n");
        else if (strcmp(name, "charles") == 0)
            printf("\n... '\n\n");
        else if (strcmp(name, "tookie") == 0)
            printf("\nYou don't want to fuck with this big boy.\n\n");
        else if (strcmp(name, "trey") == 0)
            printf("\nWhen you done with me cupping your balls I'll get back to work.\n\n");
        else if ((strcmp(name, "police") == 0) || (strcmp(name, "cops") == 0))
            printf("\nFuck you bitch! My keys are in the console you dumb fuck!'\n\n");
        else if ((strcmp(name, "fuckoff")) == 0)
        {
            free(name);
            system("clear");
            printf("\033[0m");
            end = 0;
        }
        else
            printf("\nI hate fucking cops! Wanna drink some Yuengling?\n\n");
    }
}
