/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:45:58 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/17 02:26:06 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

# define RESET       "\033[0m"
# define BLACK       "\033[30m"             /* Black */
# define RED         "\033[31m"             /* Red */
# define GREEN       "\033[32m"             /* Green */
# define YELLOW      "\033[33m"             /* Yellow */
# define BLUE        "\033[34m"             /* Blue */
# define MAGENTA     "\033[35m"             /* Magenta */
# define CYAN        "\033[36m"             /* Cyan */
# define WHITE       "\033[37m"             /* White */
# define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
# define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
# define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
# define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
# define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
# define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

class ClapTrap
{
	private: 
		std::string		_name;						// passé en paramètre d’un constructeur
		unsigned int	_hit_points;				// points de vie
		unsigned int	_energy;					// points d’énergie
		unsigned int	_attack_damage;				// dommages infligés en attaquant

	public:
		ClapTrap();									// default constructor
		ClapTrap(std::string name);					// name constructor
		ClapTrap(const ClapTrap &copy);				// copy constructor
		ClapTrap &operator =(ClapTrap const &a);	// opêrateur d'affectation
		~ClapTrap();								// destructeur
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);		// attaque de ClapTrap: sa cible perd <attack damage> hit_points
		void beRepaired(unsigned int amount);		// réparation de ClapTrap: regagne <amount> hit_points
		
		// accès en lecture: récupère la valeur de l'attribut, ne modifie pas l'instance courante.
		std::string	getName() const;
		unsigned int getHitPoints() const;
		unsigned int getEnergyPoints() const;
		unsigned int getAttackDamage() const;
};

#endif