/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:14:16 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/19 20:37:22 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor called" << std::endl;
	_type = "\033[1m\033[35mA random animal\033[0m";
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	_type = copy.getType();
}

Animal &Animal::operator =(const Animal &assign)
{
	_type = assign.getType();
	return *this;
}

Animal::~Animal(){
	std::cout << BOLDWHITE << "Animal Destructor called" << RESET << std::endl;
}

std::string	Animal::getType() const  {
	return _type;
}

void Animal::makeSound() const {
	std::cout << BOLDMAGENTA << "* ANIMAL SOUND *" << RESET << std::endl;
}
