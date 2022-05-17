/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:24:16 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/17 13:39:42 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	std::cout << std::endl;
	FragTrap frag_name("Frag");
	ScavTrap scav_name("Scav");
	ClapTrap clap_name("Clap");
	std::cout << std::endl;

	scav_name.attack("Donatien");
	scav_name.guardGate();
	scav_name.takeDamage(8);
	
	std::cout << std::endl;
	
	scav_name.attack("Jean-Eude");
	scav_name.beRepaired(10);
	clap_name.attack("Georges");
	clap_name.takeDamage(10);
	clap_name.beRepaired(10);

	std::cout << std::endl;
	frag_name.highFivesGuys();
	std::cout << std::endl;
	
	return (0);
}
