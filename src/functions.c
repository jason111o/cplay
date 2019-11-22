#include "headers.h"

void print_ascii()
{
    system("clear");
    char *string = (char*)calloc(UCHAR_MAX, sizeof(char));
    printf("\nEnter a string to see the ascii values of each character\n>");
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
    printf("\n");
    free(string);
    printf("Press Enter\n");
    while ((getchar()) != '\n');
    fflush(stdin);
    system("clear");
}

void print_hacker_name()
{
    system("clear");
    char *string = (char*)calloc(UCHAR_MAX, sizeof(char));
    printf("\nEnter a name\n>");
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
        else if (string[i] == 'h')
            string[i] = '4';
        i++;
        c = getchar();
    }
    fflush(stdin);

    printf("\n\033[01;34mYour hacker name is...\n");
    for (i = 0; i < strlen(string); i++)
    {
        printf("\033[01;31m%c", string[i]);
    }
    printf("\033[0m\n\n");
    free(string);
    printf("Press Enter\n");
    while ((getchar()) != '\n')
    fflush(stdin);
    system("clear");
}

void find_cubic_yard()
{
    system("clear");
    printf("Enter decimal numbers i.e. 2.8, 6.79, 3, 3.0\n");
    printf("Height: ");
    double h;
    if (scanf("%lf", &h) == 0)
    {
        fprintf(stderr, "scanf failed to get int w\n");
        exit(1);
    }
    fflush(stdin);
    printf("Width: ");
    double w;
    if (scanf("%lf", &w) == 0)
    {
        fprintf(stderr, "scanf failed to get int w\n");
        exit(1);
    }
    fflush(stdin);
    printf("Length: ");
    double l;
    if (scanf("%lf", &l) == 0)
    {
        fprintf(stderr, "scanf failed to get int w\n");
        exit(1);
    }
    fflush(stdin);
    printf("\033[01;33m%.2lf \033[01;37mCY\n\n\033[0m", (double) ((l*w*h) / 27));
    printf("Press Enter\n");
    getchar();
    while ((getchar()) != '\n');
    fflush(stdin);
    system("clear");
}

void max_out_memory()
{
    system("clear");
    printf("Enter 'c' to continue or 'q' to quit\n>");
    char c;
    while ((c = getchar()) != '\n')
    {
        fflush(stdin);
        if (c == 'q' || c == 'Q')
            break;
        else if (c == 'c' || c == 'C')
        {
            size_t ohshit = 1;
            char *uhoh = malloc(sizeof(int) * ohshit);
            if (uhoh == NULL)
                exit(99);
            while (uhoh != NULL)
            {
                system("clear");
                printf("sizeof uhoh > %lu\nohshit > %lu\n", sizeof(uhoh), ohshit);
                ohshit *= 2;
                free(uhoh);
                uhoh = malloc(sizeof(int) * ohshit);
            }
            printf("Press Enter\n");
            getchar();
            while ((getchar()) != '\n');
            fflush(stdin);
            free(uhoh);
            system("clear");
        }
    }
}

void brian()
{
    system("clear");

    char *name = (char *) calloc(10, sizeof(char));

    printf("\033[31;36mWho will speak to Brian...\n\033[31;33m");

    if (scanf("%s", name) == 0)
        name = "nobody";

    for (unsigned int i = 0; i < strlen(name); i++)
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
    else if (strcmp(name, "bitch") == 0)
    {
        printf("I see how it is, faggot!\n");
        sleep(2);
        printf("Well, you might not be queer, but I bet you would let one go soft in your mouth.\n\n");
        sleep(5);
        system("clear");
        return; // End function
    }
    else
        printf("\nI hate fucking cops! Want some Yuengling?\n\n");

    printf("\033[0mPress Enter\n");
    getchar();
    while ((getchar()) != '\n');
    fflush(stdin);
    free(name);
    brian(); // Start function over
}
