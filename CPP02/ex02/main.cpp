/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:07:31 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/16 15:09:54 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{ 
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	// std::cout << "a > b : " << (a > b) << std::endl;
	// std::cout << "a < b : " << (b < a) << std::endl;
	// std::cout << "a >= b : " << (a >= b) << std::endl;
	// std::cout << "a >= a : " << (a >= a) << std::endl;
	// std::cout << "a <= b : " << (a <= b) << std::endl;
	// std::cout << "a != b : " << (a != b) << std::endl;
	// std::cout << "a == b : " << (a == b) << std::endl;
	// std::cout << "a == a : " << (a == a) << std::endl;
	// std::cout << "a != a : " << (a != a) << std::endl;

	// std::cout << a << std::endl;
	// std::cout << --a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a-- << std::endl;
	// std::cout << a << std::endl;

	// std::cout << "10 / 3.333 : " << Fixed(10) / Fixed(3.333f) << std::endl;
	// std::cout << "10 * 3.333 : " << Fixed(10) * Fixed(3.333f) << std::endl;
	// std::cout << "10 + 3.333 : " << Fixed(10) + Fixed(3.333f) << std::endl;
	// std::cout << "10 - 3.333 : " << Fixed(10) - Fixed(3.333f) << std::endl;
	
	return 0;
}