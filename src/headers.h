#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <unistd.h>

/*====STRUCTS====*/
typedef struct node
{
    int num;
    char *string;
    struct node *next;
} node;

/*====DEFINES====*/

/*====PROTOTYPES====*/
void print_ascii();
void print_hacker_name();
void find_cubic_yard();
void max_out_memory();
void brian();
