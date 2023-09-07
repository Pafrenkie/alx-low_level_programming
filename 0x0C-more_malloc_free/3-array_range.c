#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max) {
if (min > max) {
        return NULL;
}

int *arr = (int *)malloc((max - min + 1) * sizeof(int));

if (arr == NULL) {
return NULL;
}

for (int i = min; i <= max; i++) {
arr[i - min] = i;
}

return arr;
}
