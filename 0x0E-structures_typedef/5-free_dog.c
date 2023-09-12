#include <stdlib.h>

typedef struct
{
char *name;
int age;
}

dog_t;

void free_dog(dog_t *d)
{

if (d != NULL)
{

if (d->name != NULL)
{
free(d->name);
}


free(d);
}
}
