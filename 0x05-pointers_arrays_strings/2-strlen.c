#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 * Description: it will return the lenght
 * of a string
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
