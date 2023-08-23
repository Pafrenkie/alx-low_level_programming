#include <stdio.h>
#include "main.h"
/**
 * _strncat - Concatenates two strings up to n bytes from src.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: A pointer to the resulting string @dest.
 */

int main(void)
{
char dest[50] = "Hello, ";
char src[] = "world!";
int n = 5;
printf("Before concatenation: %s\n", dest);
_strncat(dest, src, n);
printf("After concatenation: %s\n", dest);

return (0);
}

char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
int dest_len = 0;

while (*ptr != '\0')
{
ptr++;
dest_len++;
}
ptr = dest + dest_len;  /* Move ptr to the end of dest string */

while (*src != '\0' && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}

*ptr = '\0';
return (dest);
}
