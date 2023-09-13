#include <stddef.h>

/* Prototype of the _putchar function */
int _putchar(char c);


typedef void (*print_func)(char *);


void print_name(char *name, print_func f)
{
if (name != NULL && f != NULL)
{
f(name);
}
}
