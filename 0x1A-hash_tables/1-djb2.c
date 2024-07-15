#include "hash_tables.h"

/**
 * hash_djb2 - The hash function implementing the djb2 algorithm
 * @str: The input string to hash
 *
 * Description: This function takes an input string and applies the djb2
 * hashing algorithm to generate a hash value. The djb2 algorithm was
 * created by Daniel J. Bernstein and is known for its simplicity and
 * good distribution of hash values.
 *
 * Return: The resulting hash value as an unsigned long int.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int k;

	hash = 5381;
	while ((k = *str++))
	{
		hash = ((hash << 5) + hash) + k; /* hash * 33 + k */
	}
	return (hash);
}
