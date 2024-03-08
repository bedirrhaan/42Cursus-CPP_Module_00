#include "PhoneBook.hpp"

int main(void)
{
	std::string	line;
	PhoneBook	_phonebook;

	while (true)
	{
		std::getline(std::cin, line);
		if (line == "EXIT")
			break;
		if (line == "ADD")
		{
			if (!_phonebook.PhoneBookAdd())
				return (std::cout << "Error!" << std::endl, -1);
		}
		if (line == "SEARCH")
		{
			if (!_phonebook.PhoneBookSearch())
				return (std::cout << "Error!" << std::endl, -1);
		}
	}
	return (0);
}
