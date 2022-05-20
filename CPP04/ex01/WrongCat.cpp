/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 01:03:32 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/20 20:54:40 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	_type = "\033[1m\033[36mWrongCat\033[0m";
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	_type = copy.getType();
}

WrongCat &WrongCat::operator =(const WrongCat &assign)
{
	std::cout << "Assignation WrongCat operator called" << std::endl;
	this->_type = assign._type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << BOLDCYAN << "Miaouuu" << RESET << std::endl;
}
