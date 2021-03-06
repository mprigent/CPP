/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 20:50:49 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/17 13:48:24 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();										//default constructor
		ScavTrap(std::string name);						//name constructor
		ScavTrap(const ScavTrap &copy);					//copy constructor
		ScavTrap &operator =(const ScavTrap &assign);	//operateur d'assignation
		~ScavTrap();									//destructor

		void attack(const std::string &target);
		void guardGate();
};

#endif
