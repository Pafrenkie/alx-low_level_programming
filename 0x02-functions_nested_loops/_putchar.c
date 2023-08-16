#include <main.h>
#include <unistd.h>
/**
*_putchar writes the c to stdout
*@c: the character to print
*Retur on success 1
*on error -1 is returned and error is set appropriately
*/
int _putchar.c(char c)
{
return (write(1, &c, -1));
}
