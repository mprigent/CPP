/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:39:13 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/30 20:53:40 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(): _argv("0") {
}

Convert::Convert(std::string argv) {
	_argv = argv;
}

Convert::Convert(Convert const &copy) {
	(void)copy;
}

Convert &Convert::operator =(Convert const &assign) 
{
	(void)assign;
	return (*this);
}

Convert::~Convert(void) {
}

Convert::operator char() const
{
	char i = 0;
	
	std::cout << BOLDMAGENTA << "char   : " << RESET;
	try {
		i = std::stoi(_argv);
		
		if (i < CHAR_MIN || i > CHAR_MAX)
		{
			std::cout << BOLDRED << "impossible" << RESET << std::endl;
			return (i);
		}
		if (i < 32 || i > 126)
		{
			std::cout << BOLDRED << "Non displayable" << RESET << std::endl;
			return (i);
		}
		std::cout << "'" << i << "'" << std::endl;
	}
	catch (std::invalid_argument &e) {
		std::cout << BOLDRED << "impossible" << RESET << std::endl;
	}
	catch (std::out_of_range &e) {
		std::cout << BOLDRED << "impossible" << RESET << std::endl;
	}
	return (i);
}

Convert::operator int() const
{
	int i = 0;

	std::cout << BOLDMAGENTA << "int    : " << RESET;
	try {
		i = std::stoi(_argv);
		std::cout << i << std::endl;
	}
	catch (std::invalid_argument &e) {
		std::cout << BOLDRED << "impossible" << RESET << std::endl;
	}
	catch (std::out_of_range &e) {
		std::cout << BOLDRED << "impossible" << RESET << std::endl;
	}
	return (i);
}

Convert::operator double() const
{
	double i = 0;

	std::cout << BOLDMAGENTA << "double : " << RESET;
	try {
		i = std::stod(_argv);
		std::cout << std::fixed << std::setprecision(1) << i << std::endl;
	}
	catch (std::invalid_argument &e) {
		std::cout << BOLDRED << "impossible" << RESET << std::endl;
	}
	catch (std::out_of_range &e) {
		std::cout << BOLDRED << "impossible" << RESET << std::endl;
	}
	return (i);
}

Convert::operator float() const
{
	float i = 0;

	std::cout << BOLDMAGENTA << "float  : " << RESET;
	try {
		i = std::stof(_argv);
		std::cout << std::fixed << std::setprecision(1) << i << "f" << std::endl;
	} 
	catch (std::invalid_argument &e) {
		std::cout << BOLDRED << "impossible" << RESET << std::endl;
	}
	catch (std::out_of_range &e) {
		std::cout << BOLDRED << "impossible" << RESET << std::endl;
	}
	return (i);
}

std::ostream &operator <<(std::ostream &ostream, const Convert &conv)
{
	ostream << "Convert";
	(void)conv;
	return (ostream);
}