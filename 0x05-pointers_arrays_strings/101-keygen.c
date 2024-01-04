#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate a random valid password for the 101-crackme program
 * Return: 0 on success
 */
int main(void)
{
	char password[21];
	int k, length;

	srand(time(NULL));

	length = rand() % 15 + 6;

	for (k = 0; k < length; ++k)
	{
		password[k] = rand() % ('~' - ' ' + 1) + ' ';
	}

	password[length] = '\0';

	printf("Generated Password: %s\n", password);

	return (0);
}
