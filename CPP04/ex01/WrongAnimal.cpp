/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 00:59:10 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/18 01:19:37 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << BOLDWHITE;
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	std::cout << RESET;
	_type = "A random WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << BOLDWHITE;
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	std::cout << RESET;
	_type = copy.getType();
}

WrongAnimal &WrongAnimal::operator =(const WrongAnimal &assign)
{
	_type = assign.getType();
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << BOLDWHITE;
	std::cout << "WrongAnimal Destructor called" << std::endl;
	std::cout << RESET;
}

std::string	WrongAnimal::getType() const{
	return _type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "* ANIMAL SOUND *" << std::endl;
}
