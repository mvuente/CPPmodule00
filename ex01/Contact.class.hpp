
#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
private:
	std::string _book[11];
	std::string	_field[11];

public:
	Contact(void);
	~Contact(void);
	void 	add_prompt(void);
	void 	full_info(void);
	void 	four_fields(size_t count);

};

#endif
