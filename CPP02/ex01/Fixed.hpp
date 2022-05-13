/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:35:30 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/13 16:47:13 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _bit = 8;
		
	public:
		Fixed();
		Fixed(const Fixed &f);
		~Fixed();
		void setRawBits( int const raw );
		int getRawBits( void ) const;
		Fixed& operator=(Fixed const& f);
		Fixed(const int n);
        Fixed(const float n);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, Fixed const& f);

#endif