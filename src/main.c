#include "headers.h"

int main()
{
    system("clear");
    char n = 0;
    int end = 1;
    while (end)
    {
        printf("****\033[31;33mMENU\033[0m****\n");
        printf("\033[31;37m1. \033[31;35mConvert input to ascii\n");
        printf("\033[31;37m2. \033[31;35mHack Spelling\n");
        printf("\033[31;37m3. \033[31;35mFind Cubic Yard/s\n");
        printf("\033[31;37m4. \033[31;35mWhat would Brian say\n");
        printf("\033[31;37m0. \033[31;35mEXIT\n\033[0m");
        if (scanf("%c", &n) == 0)
            exit(1);
        if (n == '1')
            print_ascii();
        else if (n == '2')
            print_hacker_name();
        else if (n == '3')
            find_cubic_yard();
        else if (n == '4')
            brian();
        else if (n == '0')
            end = 0;
        else
        {
            printf("INVALID SELECTION\nPress Enter\n");
            while((getchar()) != '\n');
            system("clear");
        }
    }

    return 0;
}
