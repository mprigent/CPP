/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:35:52 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/05 22:44:23 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.class.hpp"

void Contact::init_first_name(std::string cmd){
    _first_name = cmd;
}

void Contact::init_last_name(std::string cmd){
	_last_name = cmd;
}

void Contact::init_nickname(std::string cmd){
	_nickname = cmd;
}

void Contact::init_phone_number(std::string cmd)
{
	while (cmd.size() != 10)
	{
		std::cout << "Error: please enter a valid phone number (10 digits)" << std::endl;
		std::cout << "* PHONE NUMBER     ➔ "; std::cin >> cmd;
	}
	_phone_number = cmd;
}

void Contact::init_darkest_secret(std::string cmd){
	_darkest_secret = cmd;	
}

void Contact::init_index(int nbr){
	_index = nbr;
}

int Contact::get_index() const
{
    return _index;
}

std::string Contact::get_first_name() const
{
    return _first_name;
}

std::string Contact::get_last_name() const
{
    return _last_name;
}

std::string Contact::get_nickname() const
{
    return _nickname;
}

std::string Contact::get_phone_number() const
{
    return _phone_number;
}

std::string Contact::get_darkest_secret() const
{
    return _darkest_secret;
}
