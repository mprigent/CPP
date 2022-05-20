/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 00:45:57 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/20 20:55:30 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	_type = "\033[1m\033[33mDog\033[0m";
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	_type = copy.getType();
}

Dog &Dog::operator =(const Dog &assign)
{
	std::cout << "Assignation Dog operator called" << std::endl;
	this->_type = assign._type;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << BOLDYELLOW << "Woof !" << RESET << std::endl;
}
