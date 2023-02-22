#include "main.h"

/**
 * _isalpha - function that returns one if its lowercase
 * @c: c used as a char argument
 * Return: Return one if letter else zero
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
