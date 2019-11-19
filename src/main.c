#include "headers.h"

int main()
{
    system("clear");
    int n = 0;
    while (n != 99)
    {
        printf("****MENU****\n");
        printf("1. Convert input to ascii\n");
        printf("2. Convert yor name to a hack3r nam3\n");
        printf("99. EXIT\n>");
        if (scanf("%d", &n) == 0)
            exit(1);
        while ((getchar()) != '\n');
        if (n == 1)
            print_ascii();
        else if (n == 2)
            print_hacker_name();
    }

    return 0;
}
