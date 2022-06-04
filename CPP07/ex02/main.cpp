/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:15:41 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/04 15:19:30 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

#define SIZE 10

int main(int, char**)
{
	Array<int> empty(0);
	Array<int> nb(SIZE);
	int* tab = new int[SIZE];
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		const int value = rand();
		nb[i] = value;
		tab[i] = value;
	}

	std::cout << std::endl;

	for (int i = 0; i < SIZE; i++) {
		std::cout <<BOLDMAGENTA << "Array[" << i << "] " << RESET << "is " << nb[i] << "," <<BOLDMAGENTA <<  "Tab["<< i << "] " << RESET << "is " << tab[i] << std::endl;
	}

	try {
		nb[-23] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	try {
		nb[SIZE] = 0;
	}
	catch(const std::exception& e){
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	try {
		nb[100000] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	delete [] tab;
	std::cout << std::endl;

	return (0);
}
