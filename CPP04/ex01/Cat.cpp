/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:15:20 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/19 20:36:28 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain())
{
	std::cout << "Default Cat constructor called" << std::endl;
	_type = "\033[1m\033[36mCat\033[0m";
}

Cat::Cat(const Cat &copy) : _brain(new Brain(*copy._brain))
{
	std::cout << "Copy Cat constructor called" << std::endl;
	_type = copy.getType();
}

Cat::~Cat() {
	std::cout << BOLDWHITE << "Cat Destructor called" << RESET << std::endl;
}

void Cat::makeSound() const {
	std::cout << BOLDCYAN << "Miaouuu" << RESET << std::endl;
}
