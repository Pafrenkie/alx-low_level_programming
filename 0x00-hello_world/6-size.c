#include <stdio.h>

/**
 * main - Prints the size of various types
 *
 * Return: Always(0)(Success)
 */
int main(void)
{
#ifdef __x86_64__
printf("Running on a 64-bit machine\n");
#else
printf("Running on a 32-bit machine\n");
#endif
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of short int: %zu byte(s)\n", sizeof(short int));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long int: %zu byte(s)\n", sizeof(long int));
printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of float: %zu byte(s)\n", sizeof(float));
printf("Size of double: %zu byte(s)\n", sizeof(double));
printf("Size of long double: %zu byte(s)\n", sizeof(long double));
return (0);
}
