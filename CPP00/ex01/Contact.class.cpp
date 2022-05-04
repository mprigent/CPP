/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:35:52 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/04 17:49:05 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.class.hpp"

void Contact::init_first_name(std::string str){
    first_name = str;
}

void Contact::init_last_name(std::string str){
	last_name = str;
}

void Contact::init_nickname(std::string str){
	nickname = str;
}

void Contact::init_phone_number(std::string str){
	if (str.size() == 10)
		phone_number = str;
	else
		std::cout << "Error: Phone number must be 10 digits long" << std::endl;
}

void Contact::init_darkest_secret(std::string str){
	darkest_secret = str;	
}