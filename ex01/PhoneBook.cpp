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

//void displayPeople(const std::vector<Person>& people) {
//    std::cout << std::setw(10) << "Dizin" << '|' << std::setw(10) << "Ad" << '|' << std::setw(10) << "Soyad" << '|' << std::setw(10) << "Takma Ad" << std::endl;
//    for (const Person& person : people) {
//        std::string name = person.name.length() > 10 ? person.name.substr(0, 9) + '.' : person.name;
//        std::string surname = person.surname.length() > 10 ? person.surname.substr(0, 9) + '.' : person.surname;
//        std::string nickname = person.nickname.length() > 10 ? person.nickname.substr(0, 9) + '.' : person.nickname;
//        std::cout << std::setw(10) << person.index << '|' << std::setw(10) << std::right << name << '|' << std::setw(10) << std::right << surname << '|' << std::setw(10) << std::right << nickname << std::endl;
//    }
//}

bool	PhoneBook::PhoneBookSearch(void)
{
	std::cout << std::setw(10) << std::right << "Dizin" << "|" << std::setw(10) << std::right << "Ad" << '|' << std::setw(10) << std::right << "Soyad" << "|" << std::setw(10) << std::right << "Takma Ad" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (!_contact[i].getName().empty())
		{
			std::cout << std::setw(10) << std::right << i << '|'
				<< std::setw(10) << std::right << _contact[i].getName() << '|'
					<< std::setw(10) << std::right << _contact[i].getLastname() << '|'
						<< std::setw(10) << std::right <<  _contact[i].getUsername() << std::endl;
		}
	}
	return (true);
}
