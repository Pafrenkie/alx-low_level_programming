#include <stdio.h>
/**
 * main - Program prints all combination of possible single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ones = '0';
int tens = '0';
int hundrends = '0';
for (hundrends = '0'; hundrends <= '9'; hundrends++)
{
for (tens = '0'; tens <= '9'; tens++)
{
for (ones = '0'; ones <= '9'; ones++)
{
if (!((ones == tens) || (tens == hundrends) ||
(tens > ones) || (hundrends > tens)))
{
putchar(hundrends);
putchar(tens);
putchar(ones);

if (!(ones == '9' && hundrends == '7' && tens  == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
