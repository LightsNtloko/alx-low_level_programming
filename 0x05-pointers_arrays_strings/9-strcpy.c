#include "main.h"

/**
 * *_strcpy - A function that copies the string pointed
 * to by src.
 * @dest: The destination buffer
 * @src: The source string.
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;
	char do_copy;

	do{
		do_copy = *src;
		*dest = do_copy;
		dest++;
		src++;
	} while (do_copy != '\0');

	return (original_dest);
}
