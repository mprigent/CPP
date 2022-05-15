/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:35:27 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/15 20:50:18 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(Fixed const& f) {
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	return this->_value;
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

Fixed& Fixed::operator=(Fixed const& f) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = f.getRawBits();
	return(*this);
}

Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    this->_value = n << this->_bit;
}

Fixed::Fixed(const float n) {
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(n * (1 << this->_bit));
}

int	Fixed::toInt(void) const {
	return ((int)this->_value >> this->_bit);
}

float	Fixed::toFloat(void) const {
	return ((float)this->_value / (1 << this->_bit));
}

std::ostream &operator <<(std::ostream &os, Fixed const &f) {
	os << f.toFloat();
	return(os);
}
