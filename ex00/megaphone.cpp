#include <iostream>
#include <string>
#include <locale>

int main(int argc, char **argv) {

	int	argnum = 1;
	size_t i;
	std::locale loc;
	std::string str;

	if (argc > 1)
	{
		while (argnum < argc)
		{
			str = argv[argnum];
			i = -1;
			while (++i < str.length())
				std::cout << toupper(str[i], loc);
			argnum++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}
