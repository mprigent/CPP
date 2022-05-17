/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:24:16 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/17 15:38:43 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	std::cout << std::endl;
	DiamondTrap diamond_name("Diamond");
	FragTrap frag_name("Frag");
	ScavTrap scav_name("Scav");
	ClapTrap clap_name("Clap");
	std::cout << std::endl;
	
	scav_name.attack("Donatien");
	scav_name.guardGate();
	
	diamond_name.whoAmI();
	diamond_name.attack("Jean-Eude");
	diamond_name.takeDamage(20);
	diamond_name.beRepaired(10);
	
	scav_name.takeDamage(8);
	
	std::cout << std::endl;
	
	scav_name.beRepaired(10);
	clap_name.attack("Georges");
	clap_name.takeDamage(10);
	clap_name.beRepaired(10);

	std::cout << std::endl;
	frag_name.highFivesGuys();
	std::cout << std::endl;
	
	return (0);
}
