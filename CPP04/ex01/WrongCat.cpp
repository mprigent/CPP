/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 01:03:32 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/18 01:19:28 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << BOLDWHITE;
	std::cout << "Default WrongCat constructor called" << std::endl;
	std::cout << RESET;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << BOLDWHITE;
	std::cout << "Copy WrongCat constructor called" << std::endl;
	std::cout << RESET;
	_type = copy.getType();
}

WrongCat::~WrongCat()
{
	std::cout << BOLDWHITE;
	std::cout << "WrongCat Destructor called" << std::endl;
	std::cout << RESET;
}

void WrongCat::makeSound() const
{
	std::cout << "Miaouuu !" << std::endl;
}
