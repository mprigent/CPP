/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:07:51 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/15 21:28:16 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _bit = 8;
		
	public:
		Fixed();								//constructeur par défault
		Fixed(const Fixed &f);					//constructeur par copie
		~Fixed();								// destructeur
		void setRawBits(int const raw);
		int getRawBits(void) const;
		Fixed &operator =(Fixed const &f);		//opérateur d'affectation
		Fixed(const int n);
		Fixed(const float n);
		float toFloat(void) const;
		int toInt(void) const;

		/* Opérateurs de comparaison */
		bool operator >(Fixed const &a) const;	//strictement supérieur à
		bool operator <(Fixed const &a) const;	//strictement inférieur
		bool operator >=(Fixed const &a) const;	//supérieur à
		bool operator <=(Fixed const &a) const;	//inférieur à
		bool operator ==(Fixed const &a) const;	//comparateur d'égalité
		bool operator !=(Fixed const &a) const;	//différent de
		
		/* Opérateurs arithmétiques */
		Fixed operator +(Fixed const &a) const;	//opérateur d'addition
		Fixed operator -(Fixed const &a) const;	//opérateur de soustraction
		Fixed operator *(Fixed const &a) const;	//opérateur de multiplication
		Fixed operator /(Fixed const &a) const;	//opérateur de division

		/* Opérateurs d'incrémentation */
		Fixed &operator ++();					//opérateur de pré-incrémentation
		Fixed operator ++(int);					//opérateur de post-incrémentation

		/* Opérateurs de décrémentation */
		Fixed &operator --();					//opérateur de pré-décrémentation
		Fixed operator --(int);					//opérateur de post-décrémentation

		static Fixed &min(Fixed &a, Fixed &b);	//retourne le nbr à virgule fixe le plus petit entre a et b
		static Fixed const &min(Fixed const &a, Fixed const &b);  //retourne le nbr à virgule fixe constant le plus petit entre a et b
		static Fixed const &max(Fixed const &a, Fixed const &b);  //retourne le nbr à virgule fixe le plus grand entre a et b
		static Fixed &max(Fixed &a, Fixed &b);	//retourne le nbr à virgule fixe constant le plus grand entre a et b
};

std::ostream &operator <<(std::ostream &os, Fixed const &f);

#endif 
