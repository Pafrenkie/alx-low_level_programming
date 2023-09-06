#include <stdlib.h>

char *argstostr(int ac, char **av) {
if (ac == 0 || av == NULL) {
return NULL;
}

int total_length = 0;


for (int i = 0; i < ac; i++) {
if (av[i] != NULL) {
int j = 0;
while (av[i][j] != '\0') {
total_length++;
j++;
}
total_length++;
}
}


char *result = (char *)malloc((total_length + 1) * sizeof(char));

if (result == NULL) {
return NULL;  // Return NULL on failure
}

int index = 0;


for (int i = 0; i < ac; i++) {
if (av[i] != NULL) {
int j = 0;
while (av[i][j] != '\0') {
result[index++] = av[i][j++];
}
result[index++] = '\n';
}
}

result[index] = '\0';
return result;
}
