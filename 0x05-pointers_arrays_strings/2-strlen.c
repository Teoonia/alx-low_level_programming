#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
char *s;
int i;
for (i = 0; *s != '\0'; ++s)
	i++;
return (i);
}
