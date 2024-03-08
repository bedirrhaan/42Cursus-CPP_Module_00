#include "PhoneBook.hpp"

void	PhoneBook::setContact(const Contact& newContact, int index)
{
	_contact[index] = newContact;
}

const Contact&	PhoneBook::getContact(int index) const
{
	return (_contact[index]);
}

bool	PhoneBook::PhoneBookAdd()
{
	static int index = 0;
	std::string	line;

	getline(std::cin, line);
	_contact[index % 8].setName(line);
	getline(std::cin, line);
	_contact[index % 8].setLastname(line);
	getline(std::cin, line);
	_contact[index % 8].setUsername(line);
	getline(std::cin, line);
	_contact[index % 8].setTelephoneNumber(line);
	getline(std::cin, line);
	_contact[index % 8].setDarkSecret(line);
	setContact(_contact[index], index);

	return (true);
}

bool	PhoneBook::PhoneBookSearch(void)
{

	return (true);
}
