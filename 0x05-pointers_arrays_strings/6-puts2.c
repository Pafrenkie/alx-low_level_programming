#include <stdio.h>

/**
 * puts2 - Prints every other character of a string,
 * starting from the first character.
 * @str: Pointer to the string.
 *
 * Return: None.
 */
void puts2(char *str)
{
int index = 0;

while (str[index] != '\0')
{
putchar(str[index]);
index += 2;
}

putchar('\n');
}
