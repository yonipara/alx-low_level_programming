#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -> allocates memory using malloc.
 * @b: an unsigned int argument.
 * Return: a pointer to an address that is allocated.
 */
void *malloc_checked(unsigned int b)
{
void *i = malloc(b);

if (i == NULL)
{
exit(98);
}
else
{
return (i);
}
}
