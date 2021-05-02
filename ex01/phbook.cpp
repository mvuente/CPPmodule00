#include <locale>
#include "Contact.class.hpp"

void	ft_sorter(Contact *contname)
{
	size_t					num = 0;

	while (num < 7)
	{
		contname[num] = contname[num + 1];
		num++;
	}
	return ;
}

int main() {
	char 					buf[7];
	std::string				str = buf;
	std::locale 			loc;
	int 					num = 0;
	int 					count;
	std::string::size_type	sz;
	Contact					contname[8];

	str.replace(0,7,1,'\0');

	std::cout << "Hello, Monster! I'm your phonebook. What should I do for you?" << std::endl;
	while (!std::cin.eof())
	{
		std::getline (std::cin, str);
		if (!str.compare("ADD"))
		{
			if (num < 8)
				contname[num++].add_prompt();
			else
			{
				ft_sorter(contname);
				contname[num - 1].add_prompt();
			}
		}
		else if (!str.compare("SEARCH"))
		{
			if (!num)
				std::cout << "Excuse me, but there is nothing here. "
				 "Please, start your phonebook now" << std::endl;
			else
			{
				count = -1;
				while (++count <= num - 1)
					contname[count].four_fields(count + 1);
				std::cout << "Which contact do you research deeper, your Majestic? "
							 "Please, type number" << std::endl;
				if (!std::cin.eof())
				{
					std::getline (std::cin, str);
					if (std::cin.eof())
						return 0;
					if (str.length() == 1 && isdigit(str[0], loc) &&
							(count = std::stoi (str, &sz)) > 0 && count <=num)
						contname[count - 1].full_info();
					else
						std::cout << "Sorry, there is no such contact here!" << std::endl;
				}
				else
					return 0;
			}
		}
		else if (!str.compare("EXIT"))
					return 0;
	}
}
