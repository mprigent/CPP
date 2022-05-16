/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:45:58 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/17 00:11:46 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	private: 
		std::string		_name;						//passé en paramètre d’un constructeur
		unsigned int	_hit_points;				//points de vie
		unsigned int	_energy;					//points d’énergie
		unsigned int	_attack_damage;				//dommages infligés en attaquant

	public:
		ClapTrap();									//default constructor
		ClapTrap(std::string name);					//name constructor
		ClapTrap(const ClapTrap &copy);				//copy constructor
		~ClapTrap();								//destructeur
		
		ClapTrap &operator =(ClapTrap const &a);	//opêrateur d'affectation
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);		//attaque de ClapTrap: sa cible perd <attack damage> hit_points
		void beRepaired(unsigned int amount);		//réparation de ClapTrap: regagne <amount> hit_points
		
		//accès en lecture: récupère la valeur de l'attribut, ne modifie pas l'instance courante.
		std::string	getName() const;
		unsigned int getHitPoints() const;
		unsigned int getEnergyPoints() const;
		unsigned int getAttackDamage() const;
};

#endif