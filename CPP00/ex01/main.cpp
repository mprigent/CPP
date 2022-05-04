/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:56:45 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/04 19:07:31 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.class.hpp"

int main()
{
	PhoneBook PhoneBook;
	std::string cmd;
	std::cout << "|--------------------------------------------------------------------------|" << std::endl;
	std::cout << "|                               PHONEBOOK                                  |" << std::endl;
	std::cout << "|                                                                          |" << std::endl;
	std::cout << "|                Available Options : ADD | SEARCH | EXIT                   |" << std::endl;
	std::cout << "|--------------------------------------------------------------------------|\n\n\n\n\n" << std::endl;
	while (1)
	{
		std::cout << "* Choose an option : ";
		std::cin >> cmd;
		if (cmd == "ADD")
			PhoneBook.add();
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "Unknown Option" << std::endl;
	}
	return (0);
}
