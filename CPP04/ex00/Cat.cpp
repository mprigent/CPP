/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:15:20 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/20 20:55:10 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	_type = "\033[1m\033[36mCat\033[0m";
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	_type = copy.getType();
}

Cat &Cat::operator =(const Cat &assign)
{
	std::cout << "Assignation Cat operator called" << std::endl;
	this->_type = assign._type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << BOLDCYAN << "Miaouuu" << RESET << std::endl;
}
