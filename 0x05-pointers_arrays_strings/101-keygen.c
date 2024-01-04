#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate a random valid password for the 101-crackme program
 * Return: Always 0.
 */
int main(void)
{
	char password[21];
	int k = 0; sum = 0, first_half1, second_half2;

	srand(time(0));

	while (sum < 2772)
	{
		password[k] = 33 + rand() % 94;
		sum += password[k++];
	}
	password[k] = '\0';
	if (sum != 2772)
	{
		first_half1 = (sum - 2772) / 2;
		second_half = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			first_half1++;

		for (k = 0; password[k]; k++)
		{
			if (password[k] >= (33 + first_half1))
			{
				password[k] -= first_half1;
				break;
			}
		}
		for (k = 0; password[k]; k++)
		{
			if (password[k] >= (33 + second_half2))
			{
				password[k] -= second_half2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
