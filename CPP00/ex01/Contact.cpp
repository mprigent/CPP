/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:35:52 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/05 00:06:27 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.class.hpp"

void Contact::init_first_name(std::string cmd){
    first_name = cmd;
}

void Contact::init_last_name(std::string cmd){
	last_name = cmd;
}

void Contact::init_nickname(std::string cmd){
	nickname = cmd;
}

void Contact::init_phone_number(std::string cmd){
	if (cmd.size() == 10)
		phone_number = cmd;
	else
	//{
		std::cout << "Error: please enter a valid phone number (10 digits)" << std::endl;
	//	return (0);
	// }
	// return (1);
}

void Contact::init_darkest_secret(std::string cmd){
	darkest_secret = cmd;	
}

void Contact::init_index(int nbr){
	index = nbr;
}

int Contact::get_index() const
{
    return index;
}

std::string Contact::get_first_name() const
{
    return first_name;
}

std::string Contact::get_last_name() const
{
    return last_name;
}

std::string Contact::get_nickname() const
{
    return nickname;
}

std::string Contact::get_phone_number() const
{
    return phone_number;
}

std::string Contact::get_darkest_secret() const
{
    return darkest_secret;
}
