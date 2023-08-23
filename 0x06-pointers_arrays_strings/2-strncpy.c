#include <stdio.h>
#include "main.h"



int main(void)
{
    char dest[20] = "Hello";
    char src[] = "world!";
    int n = 3;

    printf("Before copying: %s\n", dest);
    _strncpy(dest, src, n);
    printf("After copying: %s\n", dest);

    return 0;
}

char *_strncpy(char *dest, char *src, int n)
{
    char *ptr = dest;
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        *ptr = src[i];
        ptr++;
    }

    for (; i < n; i++)
    {
        *ptr = '\0';
        ptr++;
    }

    return dest;
}

