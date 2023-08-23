#include <stdio.h>
#include <ctype.h>

char *string_toupper(char *str) {
    if (str == NULL) {
        return NULL; // Return NULL if input string is NULL
    }

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper((unsigned char)str[i]);
    }

    return str;
}

int main() {
    char input[] = "Hello, World!";
    printf("Original: %s\n", input);

    char *result = string_toupper(input);
    if (result != NULL) {
        printf("Uppercase: %s\n", result);
    } else {
        printf("Error: Input string is NULL.\n");
    }

    return 0;
}
