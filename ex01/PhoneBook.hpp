#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contact[7];
		int		index;
	public:
		void			setContact(const Contact& newContact, int index);
		const Contact&	getContact(int index) const;
		void			setIndex(int newIndex);
		int				getIndex(void);
		bool			PhoneBookAdd(void);
		bool			PhoneBookSearch(void);

};


#endif
