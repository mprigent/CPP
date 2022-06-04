/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:49:57 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/04 18:45:41 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(50);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << std::endl << BOLDWHITE <<  "----- SPAN -----" << RESET << std::endl << std::endl;

		sp.putSpan();

		std::cout << std::endl << "shortest : " << BOLDYELLOW << sp.shortestSpan() << RESET << std::endl;
		std::cout << "longuest : " << BOLDYELLOW << sp.longestSpan() << RESET << std::endl;

		std::vector<int> tab;
		tab.push_back(1);
		tab.push_back(3);
		tab.push_back(5);
		tab.push_back(7);
		tab.push_back(9);

		sp.addRange(tab.begin(), tab.end());

		std::cout << std::endl << BOLDWHITE <<  "----- SPAN -----" << RESET << std::endl << std::endl;

		sp.putSpan();

		std::cout << std::endl << "shortest : " << BOLDYELLOW << sp.shortestSpan() << RESET << std::endl;
		std::cout << "longuest : " << BOLDYELLOW << sp.longestSpan() << RESET << std::endl;

		tab.push_back(13);
		tab.push_back(354);
		tab.push_back(35);
		tab.push_back(136);
		tab.push_back(185);

		sp.addRange(tab.begin() + 5, tab.end());


		std::cout << std::endl << BOLDWHITE <<  "----- SPAN -----" << RESET << std::endl << std::endl;

		sp.putSpan();
			
		std::cout << std::endl << "shortest : " << BOLDYELLOW << sp.shortestSpan() << RESET << std::endl;
		std::cout << "longuest : " << BOLDYELLOW << sp.longestSpan() << RESET << std::endl;
		
	} 
	catch (std::exception &e){
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}
	
	return (0);
}