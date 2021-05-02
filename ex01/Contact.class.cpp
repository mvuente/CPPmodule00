#include <iostream>
#include <string>
#include "Contact.class.hpp"

Contact::Contact(void) {}

void	Contact::add_prompt(void) {

		size_t		count = -1;
		std::string buf;

		this->_field[0] = "firstname";
		this->_field[1] = "last name";
		this->_field[2] = "nickname";
		this->_field[3] = "login";
		this->_field[4] = "postal address";
		this->_field[5] = "email";
		this->_field[6] = "phone number";
		this->_field[7] = "birthday";
		this->_field[8] = "favorite meal";
		this->_field[9] = "underwear colour";
		this->_field[10] = "darkest secret";

		while (++count < 11)
		{
			std::cout << "Please, give me new contact's " << this->_field[count] << ": ";
			if (!std::cin.eof())
			{
				std::getline (std::cin, buf);
				this->_book[count] = buf;
			}
			else
				return ;
		}
		std::cout << "New contact has been added, sir! Do you want something else?" << std::endl;
	}

void 	Contact::four_fields(size_t num)
{
	size_t			count = 0;

	std::cout << std::setw(10) << std::right << num << "|";
	while (count < 3)
	{
		std::cout << std::setw(10) << std::right <<
			((this->_book[count].length() < 11) ? this->_book[count] :
				this->_book[count].substr(0, 9) + ".") << "|";
		count++;
	}
	std::cout << std::endl;
	return ;
}

void 	Contact::full_info(void)
{
	size_t		count = -1;

	while (++count < 11)
	{
		std::cout << this->_field[count] << ": " << this->_book[count] << std::endl;
	}
	std::cout << "Hello, Monster! I'm your phonebook. What should I do for you?" << std::endl;
	return ;
}

	Contact::~Contact(void) {}

