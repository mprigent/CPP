/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:24:16 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/17 13:04:36 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap def;
	ClapTrap name("Martine");
	ClapTrap copy(name);
	ClapTrap name2("Jeanine");
	
	std::cout << std::endl;
	copy.attack("Donatien");
	std::cout << "\033[31mDonatien just died.\033[0m" << std::endl;

	std::cout << std::endl;
	
	name2.beRepaired(1);
	name.attack("Jean-Eude");
	name2.attack("Georges");

	name2.takeDamage(10);
	name.takeDamage(10);
	name2.beRepaired(10);
	
	std::cout << std::endl;
	
	name.attack("Jeanine");
	name.beRepaired(1);

	std::cout << std::endl;
	
	return(0);
}