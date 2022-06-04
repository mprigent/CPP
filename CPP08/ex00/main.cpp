/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 00:33:37 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/04 15:48:15 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << std::endl << "Creating a " << BOLDGREEN<< "vector of 10 elements" << RESET << std::endl << std::endl;
	std::vector<int> tab;

	std::cout << "Fill the vector with :" << BOLDYELLOW << " { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }" << RESET << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
		tab.push_back(i);
	
	std::cout << "Try to find " << BOLDMAGENTA << "8 :" << RESET << std::endl;
	try {
		easyfind(tab, 8);
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Try to find " << BOLDMAGENTA << "10 :" << RESET << std::endl;
	try {
		easyfind(tab, 10);
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	std::cout << std::endl;
	return 0;
}