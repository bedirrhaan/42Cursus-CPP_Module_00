#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contact[8];
	public:
		void			setContact(const Contact& newContact, int index);
		const Contact&	getContact(int index) const;
		bool			PhoneBookAdd(void);
		bool			PhoneBookSearch(void);
};

void	print_title(void);

#endif
