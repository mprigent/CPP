/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:36:12 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/15 21:49:00 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {								//constructeur par défault
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &f) {								//constructeur par copie
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed() {											// destructeur
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed &Fixed::operator =(Fixed const &f) {					//opérateur d'affectation
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = f.getRawBits();
	return(*this);
}
