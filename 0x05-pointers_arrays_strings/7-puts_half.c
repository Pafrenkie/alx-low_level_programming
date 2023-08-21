#include <stdio.h>

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: Pointer to the string.
 *
 * Return: None.
 */
void puts_half(char *str)
{
int length = 0;


while (str[length] != '\0')
{
length++;
}

int start_index = (length + 1) / 2;

for (int i = start_index; i < length; i++)
{
putchar(str[i]);
}

putchar('\n');
}
