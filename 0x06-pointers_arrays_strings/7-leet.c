#include "main.h"


/**
 * leet - Encodes a string into 1337 speak.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
    if (str == NULL)
        return NULL;

    char *leet_mapping = "aAeEoOtTlL";
    char *leet_replacements = "4433007711";

    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; leet_mapping[j] != '\0'; j++)
        {
            if (str[i] == leet_mapping[j])
            {
                str[i] = leet_replacements[j];
                break;
            }
        }
    }

    return (str);
}
