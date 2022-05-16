/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:24:16 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/16 23:58:45 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap def;
    ClapTrap name("Martine");
    ClapTrap copy(name);
	ClapTrap name2("Jacqueline");

    std::cout << std::endl;
    name.attack("Jeanine");
    copy.attack("Micheline");
    name2.takeDamage(8);
    std::cout << std::endl;
    for(int def = 0; def < 10; def++)
        name2.beRepaired(10);
    std::cout << std::endl;
    name2.beRepaired(1);
    std::cout << std::endl;
    return(0);
}