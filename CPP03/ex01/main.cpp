/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:24:16 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/17 13:37:26 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	std::cout << std::endl;
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

	scav_name.guardGate();
	
	return(0);
}