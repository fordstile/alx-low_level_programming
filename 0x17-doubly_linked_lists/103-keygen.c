#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int findMaxCharValue(char *username, int length)
{
	int maxChar = *username;

	for (int i = 0; i < length; i++)
	{
		if (maxChar < username[i])
		{
			maxChar = username[i];
		}
	}

	srand(maxChar ^ 14);
	return (rand() & 63);
}

int sumOfSquares(char *username, int length)
{
	int sum = 0;

	for (int i = 0; i < length; i++)
	{
		sum += username[i] * username[i];
	}

	return ((sum ^ 239) & 63);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}

	char keygen[7];
	int len = strlen(argv[1]);
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850
	};

	keygen[0] = ((char *)alph)[(len ^ 59) & 63];

	int sum = 0;

	for (int i = 0; i < len; i++)
	{
		sum += argv[1][i];
	}
	keygen[1] = ((char *)alph)[(sum ^ 79) & 63];

	int product = 1;

	for (int i = 0; i < len; i++)
	{
		product *= argv[1][i];
	}
	keygen[2] = ((char *)alph)[(product ^ 85) & 63];

	keygen[3] = ((char *)alph)[findMaxCharValue(argv[1], len)];
	keygen[4] = ((char *)alph)[sumOfSquares(argv[1], len)];

	srand(time(NULL));
	keygen[5] = ((char *)alph)[(rand() ^ 229) & 63];
	keygen[6] = '\0';

	printf("%s\n", keygen);
	return (0);
}
