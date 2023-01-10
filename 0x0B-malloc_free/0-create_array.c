#include "main.h"
/**
 * create_array -> prints a string of characters in a buffer.
 * @size: size of the buffer.
 * @c: character.
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;

if (size == 0)
{
return (NULL);
}
else
{
position = 0;
while (position < size)
{
*(buffer + position) = c;
position++;
}
return (buffer);
}
}
