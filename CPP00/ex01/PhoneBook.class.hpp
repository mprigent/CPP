/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:32:16 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/04 23:45:23 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <iomanip>
# include "Contact.class.hpp"

int ft_check_nbr(std::string cmd);

class PhoneBook
{
	private:
		Contact info[8];
		
	public:
		int total;
		PhoneBook();
		int add();
		int search();
		int print_contact(int i);
};

# endif