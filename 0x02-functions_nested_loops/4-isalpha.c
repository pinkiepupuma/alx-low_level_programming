#include "main.h"

/**
 * int _isalpha - function that returns one if its lowercase
 *
 * Return - Always 0
 */

int _isalpha(int c)
{
	if(c => 'a' && c <= 'z' || c => 'A' && c <= 'Z')
	{
		return (1);
	}else {
		return (0);
	}
}
