/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:36:02 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/11 18:32:21 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

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
};

#endif