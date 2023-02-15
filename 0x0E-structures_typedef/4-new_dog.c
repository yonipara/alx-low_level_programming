#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *x = malloc(sizeof(dog_t));
if (x == NULL)
{
return (NULL);
}
x->name = name;
x->age = age;
x->owner = owner;

return (x);
}
