/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:15:20 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/18 01:19:53 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << BOLDWHITE;
	std::cout << "Default Cat constructor called" << std::endl;
	std::cout << RESET;
	_type = "Cat";
}

Cat::Cat(const Cat &copy)
{
	std::cout << BOLDWHITE;
	std::cout << "Copy Cat constructor called" << std::endl;
	std::cout << RESET;
	_type = copy.getType();
}

Cat::~Cat()
{
	std::cout << BOLDWHITE;
	std::cout << "Cat Destructor called" << std::endl;
	std::cout << RESET;
}

void Cat::makeSound() const
{
	std::cout << "Miaouuu !" << std::endl;
}
