/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:56:45 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/09 14:49:08 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int main()
{
	PhoneBook PhoneBook;
	std::string cmd;
	std::cout << " __________________________________________________________________________ " << std::endl;
	std::cout << "|                                                                          |" << std::endl;
	std::cout << "|                               PHONEBOOK                                  |" << std::endl;
	std::cout << "|                                                                          |" << std::endl;
	std::cout << "|                Available Options : ADD | SEARCH | EXIT                   |" << std::endl;
	std::cout << "|__________________________________________________________________________|\n\n\n\n" << std::endl;
	while (1)
	{
		if (std::cin.eof())
			break ;
		std::cout << "* Choose an option : ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			break ;
		if (cmd == "ADD")
			PhoneBook.add();
		else if (cmd == "SEARCH")
		{
			if (PhoneBook.total >= 1)
				PhoneBook.search();	
			else
				std::cout << "\nError: no contact to display\n" << std::endl;
			continue ;
		}
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "Unknown Option" << std::endl;
	}
	return (0);
}
