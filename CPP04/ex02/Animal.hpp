/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:14:26 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/18 01:19:59 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

# define RESET       "\033[0m"
# define BLACK       "\033[30m"             /* Black */
# define RED         "\033[31m"             /* Red */
# define GREEN       "\033[32m"             /* Green */
# define YELLOW      "\033[33m"             /* Yellow */
# define BLUE        "\033[34m"             /* Blue */
# define MAGENTA     "\033[35m"             /* Magenta */
# define CYAN        "\033[36m"             /* Cyan */
# define WHITE       "\033[37m"             /* White */
# define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
# define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
# define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
# define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
# define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
# define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal &copy);
		Animal &operator =(const Animal &assign);
		virtual ~Animal();
		std::string	getType() const;
		virtual void makeSound() const;
};

#endif