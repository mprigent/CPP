/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:14:16 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/18 01:20:04 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << BOLDWHITE;
	std::cout << "Default Animal constructor called" << std::endl;
	std::cout << RESET;
	_type = "A random animal";
}
Animal::Animal(const Animal &copy)
{
	std::cout << BOLDWHITE;
	std::cout << "Copy Animal constructor called" << std::endl;
	std::cout << RESET;
	_type = copy.getType();
}

Animal &Animal::operator =(const Animal &assign)
{
	_type = assign.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << BOLDWHITE;
	std::cout << "Animal Destructor called" << std::endl;
	std::cout << RESET;
}

std::string	Animal::getType() const{
	return _type;
}

void Animal::makeSound() const
{
	std::cout << "* ANIMAL SOUND *" << std::endl;
}