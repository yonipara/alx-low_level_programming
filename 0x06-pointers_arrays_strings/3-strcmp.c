#include "main.h"
/**
 * _strcmp -> compares two strings.
 * @s1: pointer argument
 * @s2: pointer argument
 * Return: an integer value.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] == s2[i])
{
i++;
continue;
}

else
{
return (s1[i] - s2[i]);
break;
}

}
return (0);
}
