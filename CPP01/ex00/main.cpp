/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 02:01:24 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/08 17:26:36 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
    Zombie z1 = Zombie("Zombie 1"); // STACK : statique
    z1.announce();
	
    Zombie *z2 = newZombie("Zombie 2"); // HEAP : dynamique
    z2->announce();
    delete z2; // zombie 2 destroyed (delete = free + destructeur)
	
	randomChump("Zombie 3"); //no allocation: create and destroye instantly
	
    return (0); // zombie 1 destroyed (end of function)
}
