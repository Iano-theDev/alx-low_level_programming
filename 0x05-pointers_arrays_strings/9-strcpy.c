#include "main.h"

int _strlen(char *s);

/**
 * _strcpy - cpoies a string to the buffer
 * @src: pointer to string to be copied
 * @dest: pointer to string to be returned
 * Return: dest, pointer to copy of str
 */

char *_strcpy(char *dest, char *str)
{
	int len = _strlen(str);
	int i;
	
	for (i = 0; i < len; i++)
	{
		*(dest + i) = *(str + i);
	}

	return (dest);
}

/**
 * _strlen - gets the length of a string
 * @s: string pointer
 * Return: int, length of s
 */

int _strlen(char *s)
{
        int len;

        while (*s != '\0')
        {
                len++;
                s++;
        }
         return (len);
}
