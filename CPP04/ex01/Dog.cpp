/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 00:45:57 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/18 01:19:48 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << BOLDWHITE;
	std::cout << "Default Dog constructor called" << std::endl;
	std::cout << RESET;
	_type = "Dog";
}
Dog::Dog(const Dog &copy)
{
	std::cout << BOLDWHITE;
	std::cout << "Copy Dog constructor called" << std::endl;
	std::cout << RESET;
	_type = copy.getType();
}

Dog::~Dog()
{
	std::cout << BOLDWHITE;
	std::cout << "Dog Destructor called" << std::endl;
	std::cout << RESET;
}

void Dog::makeSound() const
{
	std::cout << "Wouaf !" << std::endl;
}
