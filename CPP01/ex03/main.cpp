/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:35:01 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/10 16:26:08 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"

int main(void)
{
	{
		Weapon  club = Weapon("crude spiked club");
		
		HumanA bob("Bob", club);
		bob.attack();
		club.set_Type("some other type of club");
		bob.attack();
	}
	{
		Weapon  club = Weapon("crude spiked club");
		
		HumanB jim("Jim");
		jim.set_Weapon(club);
		jim.attack();
		club.set_Type("some other type of club");
		jim.attack();
	}
	return (0);
}
