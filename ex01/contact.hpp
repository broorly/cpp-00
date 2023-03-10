/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:44:11 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/06 14:44:12 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <iostream>
#include <stdlib.h>
#include <stdio.h>

class Contact{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	Contact();
	~Contact();

	void			set_first_name(std::string first_name) ;
	std::string		get_first_name() const;
	void			set_last_name(std::string last_name);
	std::string		get_last_name() const;
	void			set_nick_name(std::string nick_name);
	std::string		get_nick_name()const;
	void			set_phone_number(std::string phone_number);
	std::string		get_phone_number() const;
	void			set_darkest_secret(std::string darkest_secret);
	std::string		get_darkest_secret() const;

};

#endif