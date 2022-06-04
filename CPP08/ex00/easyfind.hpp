/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 00:38:54 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/04 18:42:28 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iostream>
# include <exception>
#include <vector>

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

class NotFound : public std::exception
{
	public:
		const char *what() const throw(){
			return ("int not found");
		}
};

template<typename T>
int easyfind(T &elem, int i)
{
	typename T::iterator it = std::find(elem.begin(), elem.end(), i);
	if (it == elem.end())
		throw NotFound();	
	else
		std::cout << "Element found at position " << BOLDGREEN << std::distance(elem.begin(), it) << RESET << std::endl;
	return *it;
}

#endif