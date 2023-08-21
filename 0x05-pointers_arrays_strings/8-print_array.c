#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 *
 * Return: None.
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < (n - 1); i++)
{
printf("%d", a[i]);
}

if (i == (n - 1))
{
printf("%d", a(n - 1));
}
printf("\n");
}
