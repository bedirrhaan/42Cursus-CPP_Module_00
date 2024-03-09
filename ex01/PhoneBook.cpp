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
	if (_contact[index % 8].getName().empty())
		return (false);
	std::cout << "Lastname : ";
	getline(std::cin, line);
	_contact[index % 8].setLastname(line);
	if (_contact[index % 8].getLastname().empty())
		return (false);
	std::cout << "Username : ";
	getline(std::cin, line);
	_contact[index % 8].setUsername(line);
	if (_contact[index % 8].getUsername().empty())
		return (false);
	std::cout << "Telephone Number : ";
	getline(std::cin, line);
	_contact[index % 8].setTelephoneNumber(line);
	if (_contact[index % 8].getTelephoneNumber().empty())
		return (false);
	std::cout << "Dark Secret : ";
	getline(std::cin, line);
	_contact[index % 8].setDarkSecret(line);
	if (_contact[index % 8].getDarkSecret().empty())
		return (false);
	setContact(_contact[index], index);
	index++;

	return (true);
}

std::string	length_control(std::string string)
{
	if (string.length() > 10)
		string = string.substr(0, 9) + '.';
	return (string);
}

bool	PhoneBook::searchPrint(void)
{
	std::string name;
	std::string lname;
	std::string username;

	std::cout << std::setw(10) << std::right << "Dizin" << "|" << std::setw(10) << std::right << "Ad" << '|' << std::setw(10) << std::right << "Soyad" << "|" << std::setw(10) << std::right << "Takma Ad" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (!_contact[i].getName().empty())
		{
			name = _contact[i].getName();
			lname = _contact[i].getLastname();
			username = _contact[i].getUsername();

			name = length_control(name);
			lname = length_control(lname);
			username = length_control(username);

			std::cout << std::setw(10) << std::right << i << '|'
				<< std::setw(10) << std::right << name << '|'
					<< std::setw(10) << std::right << lname << '|'
						<< std::setw(10) << std::right <<  username << std::endl;
		}
	}
	return (true);
}

bool	isDigit(std::string line)
{
	if (line.empty())
		return (false);
	if (line.length() > 1)
		return (false);
	if (line[0] <= '0' and line[0] >= '9')
		return (false);
	return (true);
}

bool	PhoneBook::PhoneBookSearch(void)
{
	std::string line;
	int			index;

	if (!searchPrint())
		return (false);

	std::cout << "Enter Number > ";
	std::getline(std::cin, line);

	if (line == "EXIT" or line == "exit")
		return (false);

	if (!isDigit(line))
		return (false);

	index = (int)line[0] - 48;

	std::cout << "Name > " << _contact[index].getName() << std::endl;
	std::cout << "Lastname > " << _contact[index].getLastname() << std::endl;
	std::cout << "Username > " << _contact[index].getUsername() << std::endl;
	std::cout << "Telephone Number > " << _contact[index].getTelephoneNumber() << std::endl;
	std::cout << "Dark Secret > " << _contact[index].getDarkSecret() << std::endl;

	return (true);
}
