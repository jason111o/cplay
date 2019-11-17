#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

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
