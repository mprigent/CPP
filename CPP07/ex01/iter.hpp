/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:56:19 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/04 15:19:06 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <cstddef>

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

template <typename T>
void print_elem(T const &elem)
{
	std::cout << elem << std::endl;
}

template<typename T>
void iter(T *tab, std::size_t len, void fct(T const &elem))
{
	for (std::size_t i = 0; i < len; i++)
		fct(tab[i]);
}

#endif
