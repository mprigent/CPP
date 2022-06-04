/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:50:40 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/04 18:42:35 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <stdint.h>

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


class Span
{
	private:
		uint32_t 			_size;
		std::vector<int>	_vector;

	public:

		typedef std::vector<int>::iterator Iterator;

		Span (void);
		Span (const Span&);
		Span (uint32_t);
		~Span (void);

		Span& 	operator=(const Span&);

		void	addNumber (int);
		int		shortestSpan (void);
		int		longestSpan (void);
		void	addRange (Iterator start, Iterator end);

		void	putSpan (void)
		{
			std::vector<int>::iterator it = _vector.begin();
			std::vector<int>::iterator ite = _vector.end();

			while(it != ite)
				std::cout << *it++ << std::endl;
		}

		class SpanIsEmpty : public std::exception
		{
			public:
				virtual const char* what (void) const throw()
				{
					return "the current Span is empty";
				}
		};

		class CannotAddNumberInSpan : public std::exception
		{
			public:
				virtual const char* what (void) const throw()
				{
					return "cannot add number in Span";
				}
		};

		class CannotAddRange : public std::exception
		{
			public:
				virtual const char* what (void) const throw()
				{
					return "cannot add range in Span";
				}
		};
};

#endif