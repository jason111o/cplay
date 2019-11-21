#include "headers.h"

int main()
{
    system("clear");
    int n = 0;
    while (n != 9)
    {
        printf("****\033[31;33mMENU\033[0m****\n");
        printf("\033[31;37m1. \033[31;35mConvert input to ascii\n");
        printf("\033[31;37m2. \033[31;35mConvert yor name to a hack3r nam3\n");
        printf("\033[31;37m3. \033[31;35mFind CY from measurements\n");
        printf("\033[31;37m4. \033[31;35mFill memory til NULL then free it\n");
        printf("\033[31;37m5. \033[31;35mWhat would Brian say\n");
        printf("\033[31;37m9. \033[31;35mEXIT\n>\033[0m");
        if (scanf("%d", &n) == 0)
            exit(1);
        while ((getchar()) != '\n');
        if (n == 1)
            print_ascii();
        else if (n == 2)
            print_hacker_name();
        else if (n == 3)
            find_cubic_yard();
        else if (n == 4)
            max_out_memory();
        else if (n == 5)
            brian();
    }

    return 0;
}
