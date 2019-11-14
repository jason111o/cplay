#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

    /****STRUCTS****/
typedef struct node
{
    int num;
    char *string;
    struct node *next;
} node;

/****DEFINES****/

/****DECLARATIONS****/
void is_linux();
