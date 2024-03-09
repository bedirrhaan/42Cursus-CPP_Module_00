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

	std::cout << "Name : ";
	getline(std::cin, line);
	_contact[index % 8].setName(line);
	std::cout << "Lastname : ";
	getline(std::cin, line);
	_contact[index % 8].setLastname(line);
	std::cout << "Username : ";
	getline(std::cin, line);
	_contact[index % 8].setUsername(line);
	std::cout << "Telephone Number : ";
	getline(std::cin, line);
	_contact[index % 8].setTelephoneNumber(line);
	std::cout << "Dark Secret : ";
	getline(std::cin, line);
	_contact[index % 8].setDarkSecret(line);
	setContact(_contact[index], index);

	return (true);
}

bool	PhoneBook::PhoneBookSearch(void)
{
	
	return (true);
}
