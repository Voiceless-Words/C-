#include <iostream>

char changeToUpper(char);

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			int j;

			j = 0;
			while (argv[i][j] != '\0')
			{
				std::cout << changeToUpper(argv[i][j]);
				j++;
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;

	return 0;
}

char changeToUpper(char character)
{
	if (character >= 'a' && character <= 'z')
		character -= 32;

	return (character);
}

