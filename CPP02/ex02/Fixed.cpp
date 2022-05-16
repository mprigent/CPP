/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:08:13 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/16 15:40:51 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {								//constructeur par défault
}

Fixed::Fixed(Fixed const &f) {								//constructeur par copie
	*this = f;
}

Fixed::~Fixed() {											// destructeur
}

int Fixed::getRawBits(void) const {
	return this->_value;
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

Fixed &Fixed::operator =(Fixed const &f) {					//opérateur d'affectation
	this->_value = f.getRawBits();
	return(*this);
}

Fixed::Fixed(const int n) {
	this->_value = n << this->_bit;
}

Fixed::Fixed(const float n) {
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
bool	Fixed::operator >(const Fixed &cmp) const 			//opérateur de comparaison "strictement supérieur à"
{
	return (this->_value > cmp.getRawBits());
}

bool	Fixed::operator <(const Fixed &cmp) const			//opérateur de comparaison "strictement inférieur à"
{
	return (this->_value < cmp.getRawBits());
}

bool	Fixed::operator >=(const Fixed &cmp) const			//opérateur de comparaison "supérieur à"
{
	return (this->_value >= cmp.getRawBits());
}

bool	Fixed::operator <=(const Fixed &cmp) const			//opérateur de comparaison "inférieur à"
{
	return (this->_value <= cmp.getRawBits());
}

bool	Fixed::operator ==(const Fixed &cmp) const			//comparateur d'égalité
{
	return (this->_value == cmp.getRawBits());
}

bool	Fixed::operator !=(const Fixed &cmp) const			//opérateur de comparaison "différent de"
{
	return (this->_value != cmp.getRawBits());
}

Fixed	Fixed::operator +(const Fixed &cmp) const			//opérateur d'addition
{
	return (this->toFloat() + cmp.toFloat());
}

Fixed	Fixed::operator -(const Fixed &cmp) const			//opérateur de soustraction
{
	return (this->toFloat() - cmp.toFloat());
}

Fixed	Fixed::operator *(const Fixed &cmp) const			//opérateur de multiplication
{
	return (this->toFloat() * cmp.toFloat());
}

Fixed	Fixed::operator /(const Fixed &cmp) const			//opérateur de division
{
	return (this->toFloat() / cmp.toFloat());
}

Fixed	Fixed::operator ++(int)								//opérateur de pré-incrémentation
{
	Fixed	tmp(*this);

	++(*this);
	return (tmp);
}

Fixed	&Fixed::operator ++()								//opérateur de post-incrémentation
{
	this->_value++;
	return (*this);
}

Fixed	&Fixed::operator --()								//opérateur de pré-décrémentation
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator --(int)								//opérateur de post-décrémentation
{
	Fixed	tmp(*this);

	--(*this);
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)						//retourne le nbr à virgule fixe le plus petit entre a et b
{
	return (a < b ? a : b);
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)		//retourne le nbr à virgule fixe constant le plus petit entre a et b
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)						//retourne le nbr à virgule fixe le plus grand entre a et b
{
	return (a > b ? a : b);
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)		//retourne le nbr à virgule fixe constant le plus grand entre a et b
{
	return (a > b ? a : b);
}