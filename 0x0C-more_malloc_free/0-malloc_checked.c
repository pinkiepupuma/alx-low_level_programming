#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - functions 
 * @b: arg
 * Return: return 0
 */
void *malloc_checked(unsigned int b)
{

char *p;

p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
