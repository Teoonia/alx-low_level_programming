#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array of chars and
 * initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 * Return: If size == 0 or the function fails - NULL.
 * Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *tarray;
	unsigned int count;
	if (size == 0)
	{
		return (NULL);
	}
	tarray = malloc(sizeof(char) * size);
	if (tarray == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
		tarray[count] = c;
	}
return (tarray);
}
