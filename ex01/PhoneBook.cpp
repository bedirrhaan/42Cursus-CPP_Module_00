#include "PhoneBook.hpp"

void	PhoneBook::setContact(const Contact& newContact, int index)
{
	_contact[index] = newContact;
}

const Contact&	PhoneBook::getContact(int index) const
{
	return (_contact[index]);
}

void	setIndex(int newIndex)
{
	this->index = newIndex;
}

bool	PhoneBook::PhoneBookAdd(int index)
{

}

bool	PhoneBook::PhoneBookSearch(void)
{

}
