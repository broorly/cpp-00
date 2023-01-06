/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:44:17 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/06 19:43:51 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "phonebook.hpp"

Phonebook::Phonebook(){
}

Phonebook::~Phonebook(){
}

std::string	Phonebook::add_contact_routine(std::string s)
{
	std::cin.clear();
	std::cout << std::endl << "Enter the " << s << " of your contact." << std::endl;
	std::getline(std::cin, s);
	if(std ::cin.eof())
		exit(0);
	while (s.empty())
	{
		std::cout << "You cannot let empty fields! Please reinsert this field." << std::endl;
		std::getline(std::cin, s);
		if(std ::cin.eof())
		exit(0);
	}
	return (s);
}

void	Phonebook::add_contact(int i)
{
	std::string s;

	s = add_contact_routine("first name");
	contacts[i].set_first_name(s);
	s = add_contact_routine("last name");
	contacts[i].set_last_name(s);
	s = add_contact_routine("nickname");
	contacts[i].set_nick_name(s);
	s = add_contact_routine("phone number");
	contacts[i].set_phone_number(s);
	s = add_contact_routine("darkest secret");
	contacts[i].set_darkest_secret(s);
}

void	Phonebook::printer(std::string s)
{
	int	len;
	int	spaces;
	int	i;
	
	i = 0;
	len = s.length();
	spaces = 0;
	if (len < 10)
		spaces = 10 - len;
	std::cout << s;
	while (spaces --)
	{
		std::cout << " ";
	}
}

void	Phonebook::display_contact(Contact contact, int i)
{	
	std::cout << "*" << "     " << i+1 << "      | ";
	printer(contact.get_first_name());
	std::cout << " | ";
	printer(contact.get_last_name());
	std::cout << " | ";
	printer(contact.get_nick_name());
	std::cout << "   " << "*" << std::endl;
}
void	Phonebook::display_phonebook(int x)
{
	int			i;
	std::string	s;

	i = 55;
	while (i--)
		std::cout << "*";
	std::cout << std::endl << "*" << "   INDEX    | FIRST NAME |  LAST NAME |  NICKNAME    *" << std::endl;
	i = 55;
	while (i--)
		std::cout << "*";
	std::cout << std::endl;
	i = 0;
	while (i < x)
	{
		display_contact(contacts[i], i);
		i++;
	}
	i = 55;
	while (i--)
		std::cout << "*";
	std::cout << std::endl;
}

void	Phonebook::display_full_phonebook()
{
	int			i;
	std::string	s;

	i = 55;
	while (i--)
		std::cout << "*";
	std::cout << std::endl << "*" << "   INDEX    | FIRST NAME |  LAST NAME |  NICKNAME    *" << std::endl;
	i = 55;
	while (i--)
		std::cout << "*";
	std::cout << std::endl;
	i = 0;
	while (i < 8)
	{
		display_contact(contacts[i], i);
		i++;
	}
	i = 55;
	while (i--)
		std::cout << "*";
	std::cout << std::endl;
}


void	Phonebook::search_contact_by_index()
{
	int			index;
	int 		i;
	std:: string s;
	int x;

	index = -1;
	i = 0;
	std::cout << "Enter the index of the contact you would like to be seen, between 1 and 8." << std::endl;
	std::getline(std::cin, s);
	std::cin.clear();
	x = 0;
	while(s[x])
	{
		if(isalpha(s[x]) || 3 < s.length())
		{
			std::cout << "Invalid index. Please be sure to insert an index between 1 and 8." << std::endl;
			return;
		}
		x++;
	}
	if(!s.empty())
	{
		index = std::stoi(s);
	}
	if (index > 9 || index <= 0)
	{
		std::cout << "Invalid index. Please be sure to insert an index between 1 and 8." << std::endl;
		return;
	}
	std::cout << index << std::endl;
	std::cout << "First Name : " << contacts[index-1].get_first_name() << std::endl;
	std::cout << "Last Name : " << contacts[index-1].get_last_name() << std::endl;
	std::cout << "Nickname : " << contacts[index-1].get_nick_name() << std::endl;
	std::cout << "Phone Number : " << contacts[index-1].get_phone_number() << std::endl;
	std::cout << "Darkest Secret : " << contacts[index-1].get_darkest_secret() << std::endl;
}