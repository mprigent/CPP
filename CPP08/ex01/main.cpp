/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:49:57 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/04 17:55:20 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span s(11);
	s.addNumber(30);
	s.addNumber(10);
	s.addNumber(425);
	s.addNumber(1);
	std::cout << std::endl << "Tab : " << BOLDYELLOW << "{ 30, 10, 425, 1 }" << RESET << std::endl;

	std::cout << "Shortest Span: " << BOLDGREEN << s.shortestSpan() << RESET << std::endl;
	std::cout << "Longest Span: " << BOLDMAGENTA << s.longestSpan() << RESET << std::endl;

	Span a(5);
	a.addNumber(31);
	a.addNumber(5);
	a.addNumber(-10000);
	a.addNumber(1000);

	Span b(4);
	b.addNumber(31);
	b.addNumber(31);
	b.addNumber(31);
	b.addNumber(31);

	std::cout << std::endl << "Tab : " << BOLDYELLOW << "{ 1, 3, 5, 987 }" << RESET << std::endl;

	std::cout << "Shortest Span: " << BOLDGREEN << a.shortestSpan() << RESET << std::endl;

	std::cout << "Longest Span: " << BOLDMAGENTA << a.longestSpan() << RESET << std::endl;

	// call addNumber with a vector of int
	std::vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(987);

	try {
		std::cout << std::endl << "Tab : " << BOLDYELLOW << "{ 1, 3, 5, 987 }" << RESET << std::endl;
		s.addNumber(v.begin(), v.end());

	for (unsigned long int i = 0; i < s.getvec().size(); i++)
		std::cout << s.getvec()[i] << " ";
	}
	
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Error :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	try {
		std::cout << std::endl << std::endl << "Tab : " << BOLDYELLOW << "{ 30, 10, 425, 1, 1, 3, 5, 987 }" << RESET << std::endl;
		s.addNumber(v.begin(), v.end());

	for (unsigned long int i = 0; i < s.getvec().size(); i++)
		std::cout << s.getvec()[i] << " ";
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Error :  " << BOLDRED << e.what() << RESET << std::endl;
	}
	
	return (0);
}
