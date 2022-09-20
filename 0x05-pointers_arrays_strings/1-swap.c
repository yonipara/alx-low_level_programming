#include "main.h"

/**
 * swap_int -> is a function that takes two integers as input and swap them
 * @a:pointer variable
 * @b:pointer variable
 * Return:nothing
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
