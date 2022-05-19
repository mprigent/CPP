/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 00:59:10 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/19 13:36:00 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	_type = "\033[1m\033[35mA random WrongAnimal\033[0m";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	_type = copy.getType();
}

WrongAnimal &WrongAnimal::operator =(const WrongAnimal &assign)
{
	_type = assign.getType();
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const{
	return _type;
}

void WrongAnimal::makeSound() const {
	std::cout << BOLDMAGENTA << "* ANIMAL SOUND *" << RESET << std::endl;
}
