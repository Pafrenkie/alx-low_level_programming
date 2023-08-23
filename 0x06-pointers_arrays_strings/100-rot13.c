#include "main.h"


/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
    if (str == NULL)
        return NULL;

    char *input_alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *rot13_alphabet = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; input_alphabet[j] != '\0'; j++)
        {
            if (str[i] == input_alphabet[j])
            {
                str[i] = rot13_alphabet[j];
                break;
            }
        }
    }

    return (str);
}
