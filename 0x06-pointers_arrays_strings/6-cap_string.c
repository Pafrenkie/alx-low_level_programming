#include "main.h"


/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    if (str == NULL)
        return NULL;

    int should_capitalize = 1; // Indicates whether the next letter should be capitalized

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (should_capitalize && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 'a' + 'A';
            should_capitalize = 0;
        }

        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
        {
            should_capitalize = 1;
        }
    }

    return str;
}
