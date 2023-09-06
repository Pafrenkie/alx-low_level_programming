#include <stdio.h>
#include <stdlib.h
/**
 * create_array - Creates an array of characters and initializes it with a specific character.
 *  * @size: The size of the array
 * @c: The character to initialize the array with

* Return: A pointer to the allocated array, or NULL if size is 0 or memory allocation fails.
*/

char *create_array(unsigned int size, char c) {
if (size == 0) {
return NULL;
}
char *arr = (char *)malloc(sizeof(char) * size);

if (arr == NULL)
{
return NULL;
}


for (unsigned int i = 0; i < size; i++) {
arr[i] = c;
}

return arr;
}

int main() {
unsigned int size = 10;
char initialChar = 'A';

char *result = create_array(size, initialChar);

if (result == NULL) {
printf("Memory allocation failed or size is 0.\n");
} else {
printf("Array contents: ");
for (unsigned int i = 0; i < size; i++) {
printf("%c ", result[i]);
}
printf("\n");

free(result);
}

return 0;
}
