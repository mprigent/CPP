/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:24:33 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/04 22:26:41 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.class.hpp"
# include "PhoneBook.class.hpp"

int ft_check_nbr(std::string cmd)
{
	if (cmd.empty())
		return (1);
	for (int i = 0; cmd[i]; i++)
	{
		if (cmd[i] < '0' || cmd[i] > '9')
			return (1);
	}
	return (0);
}

void ft_search_print(std::string cmd)
{
    if (cmd.length() > 10)
    {
        cmd[9] = '.';
        for (int i = 0; cmd[i] && i < 10; i++)
            std::cout << cmd[i];
    }
    else
        std::cout << std::setw(10) << cmd;
}
