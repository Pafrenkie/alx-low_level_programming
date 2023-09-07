#include <stdio.h>
#include <stdlib.h>

int _putchar(char c) {
return write(1, &c, 1);
}

unsigned int _strlen(char *s) {
unsigned int len = 0;
while (s[len] != '\0') {
len++;
}
return len;
}

char *string_nconcat(char *s1, char *s2, unsigned int n) {
char *concatenated;
unsigned int len1, len2, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = _strlen(s1);
len2 = _strlen(s2);

if (n >= len2)
n = len2;

concatenated = (char *)malloc((len1 + n + 1) * sizeof(char));

if (concatenated == NULL)
return (NULL);

for (i = 0; i < len1; i++) {
concatenated[i] = s1[i];
}

for (j = 0; j < n; j++, i++) {
concatenated[i] = s2[j];
}

concatenated[i] = '\0';

return (concatenated);
}
