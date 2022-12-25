#ifndef PHONEBOOK__H
#define PHONEBOOK__H

#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <string>

#include"contact.hpp"


class Phonebook
{
private:
	
public:
	Contact contacts[8];
	
	Phonebook();
	~Phonebook();
	
	/*Add contact*/
	void		add_contact(int i);
	int			replace_contact();
	std::string	add_contact_routine(std::string s);

	/*Search for a contact*/
	void	display_full_phonebook();
	void	display_contact(Contact contact, int i);
	void	printer(std::string s);
	void	search_contact_by_index();
};

#endif