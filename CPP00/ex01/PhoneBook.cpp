/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:36:34 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/05 00:34:43 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(){
	total = 0;
}

int	PhoneBook::add()
{
	std::string cmd;

	if (PhoneBook::total == 8)
	{
		std::cout << "Too many contacts, the last one will be removed" << std::endl;
		total = 7;
	}
	std::cout << "\n\n------ NEW CONTACT ------\n" << std::endl;
	std::cout << "* FIRST NAME       ➔ "; std::cin >> cmd; 
	info[PhoneBook::total].init_first_name(cmd);
	std::cout << "* LAST NAME        ➔ "; std::cin >> cmd;
	info[PhoneBook::total].init_last_name(cmd);
	std::cout << "* NICKNAME         ➔ "; std::cin >> cmd;
	info[PhoneBook::total].init_nickname(cmd);
	std::cout << "* PHONE NUMBER     ➔ "; std::cin >> cmd;
	while (ft_check_nbr(cmd) == 1 || cmd.size() > 14)
	{
		std::cout << "Error: please enter a valid phone number (10 digits)" << std::endl;
		std::cout << "* PHONE NUMBER     ➔ "; std::cin >> cmd;
	}
	info[PhoneBook::total].init_phone_number(cmd);
	std::cout << "* DARKEST SECRET   ➔ "; std::cin >> cmd;
	info[PhoneBook::total].init_darkest_secret(cmd);
	info[PhoneBook::total].init_index(PhoneBook::total);
    if (!(info[total].get_first_name() == "" && info[total].get_last_name() == "" && info[total].get_nickname() == ""))
        PhoneBook::total++;
	std::cout << std::endl;
	return (1);
}

int PhoneBook::print_contact(int i)
{
	std::cout << "\nContact " << i + 1 << " :\n" << std::endl;
    std::cout << "* FIRST_NAME     : " << info[i].get_first_name() << std::endl;
    std::cout << "* LAST_NAME      : " << info[i].get_last_name() << std::endl;
    std::cout << "* NICKNAME       : " << info[i].get_nickname() << std::endl;
    std::cout << "* NUMBER         : " << info[i].get_phone_number() << std::endl;
    std::cout << "* DARKEST_SECRET : " << info[i].get_darkest_secret() << std::endl;
    std::cout << std::endl;
    return (0);
}

int PhoneBook::search()
{
	std::string cmd;

	std::cout << " \n\n___________________________________________ \n";
	std::cout << "|                                           |\n";
	std::cout << "|  Index   |First Name| Last Name| Nickname |\n";
	std::cout << "|                                           |\n";
	for (int i = 0; i < PhoneBook::total; i++)
	{
		std::cout << "\n|";
		std::cout << std::setw(10) << info[i].get_index() + 1;
		std::cout << "|";
        ft_search_print(info[i].get_first_name());
        std::cout << "|";
        ft_search_print(info[i].get_last_name());
        std::cout << "|";
        ft_search_print(info[i].get_nickname());
        std::cout << "|";
	}
	std::cout << "\n|___________________________________________|\n\n" << std::endl;
	std::cout << "Search contact (type index to display): "; std::cin >> cmd;
	while (ft_check_nbr(cmd) == 1 || std::stoi(cmd) < 1|| std::stoi(cmd) > PhoneBook::total)
    {
        if (ft_check_nbr(cmd) == 1)
		{
			std::cout << "\nError: please enter a valid index" << std::endl;
			std::cout << "Search contact (type index to display):  ";
		}
        else
		{
            std::cout << "\nError: index doesn't exist" << std::endl;
			std::cout << "Search contact (type index to display):  ";
		}
        std::cin >> cmd;
    }
    print_contact(std::stoi(cmd) - 1);
	return (0);
}
