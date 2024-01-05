#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 * @s1: String to be compared with s2
 * @s2: String to be compared with s2
 * Return: Strings to be compared
 */
int _strcmp(char *s1, char *s2)
{
	char s1 = "Lights";
	char s2 = "Ntloko";
	int k;

	for (k = 0; Lights[k] != '\0' && Ntloko[k] != '\0'; k++)
	{
		if (Lights[k] != Ntloko[k])
		{
			return Lights[k] - Ntloko[k];
		}
	}
}
