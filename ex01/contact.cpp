/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:44:07 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/06 14:44:08 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"contact.hpp"

Contact::Contact() {
	// std::cout << "Constructor of Contact called" << std::endl;
	// this->first_name = first_name;
	// this->last_name = last_name;
	// this->last_name = nick_name;
	// this->phone_number = phone_number;
	// this->darkest_secret = darkest_secret;
}

Contact::~Contact() {
}

void	Contact::set_first_name(std::string first_name){
	this->first_name = first_name;
	if (this->first_name.length() > 10)
	{
		this->first_name.resize(10);
		this->first_name[9] = '.';
	}
}

std::string		Contact::get_first_name() const{
	return (this->first_name);
}

void	Contact::set_last_name(std::string last_name) {
	this->last_name = last_name;
	if (this->last_name.length() > 10)
	{
		this->last_name.resize(10);
		this->last_name[9] = '.';
	}
}

std::string		Contact::get_last_name() const{
	return (this->last_name);
}

void	Contact::set_nick_name(std::string nick_name) {
	this->nick_name = nick_name;
	if (this->nick_name.length() > 10)
	{
		this->nick_name.resize(10);
		this->nick_name[9] = '.';
	}
}

std::string		Contact::get_nick_name() const{
	return (this->nick_name);
}

void	Contact::set_phone_number(std::string phone_number) {
	this->phone_number = phone_number;
	if (this->phone_number.length() > 10)
	{
		this->phone_number.resize(10);
		this->phone_number[9] = '.';
	}
}

std::string		Contact::get_phone_number() const{
	return (this->phone_number);
}

void	Contact::set_darkest_secret(std::string darkest_secret) {
	this->darkest_secret = darkest_secret;
	if (this->darkest_secret.length() > 10)
	{
		this->darkest_secret.resize(10);
		this->darkest_secret[9] = '.';
	}
}

std::string		Contact::get_darkest_secret() const{
	return (this->darkest_secret);
}