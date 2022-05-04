/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:36:34 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/04 19:06:47 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(){
	count = 0;
}

int	PhoneBook::add()
{
	std::string cmd;
	
	// if (PhoneBook::count == 8)
	// {
	// 	std::cout << "Too many contacts, last contact '" << user[PhoneBook::count].init_first_name(cmd) << "' will be removed" << std::endl;
	// }
	std::cout << std::endl; std::cout << std::endl;
	std::cout << "------ NEW CONTACT ------" << std::endl;
	std::cout << std::endl;
	std::cout << "* FIRST NAME       ➔ "; std::cin >> cmd;
	std::cout << "* LAST NAME        ➔ "; std::cin >> cmd;
	std::cout << "* NICKNAME         ➔ "; std::cin >> cmd;
	std::cout << "* PHONE NUMBER     ➔ "; std::cin >> cmd;
	std::cout << "* DARKEST SECRET   ➔ "; std::cin >> cmd;
	std::cout << std::endl;
	return (1);
}