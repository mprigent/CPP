/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 02:54:14 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/18 19:08:51 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << std::endl << BOLDWHITE;
	std::cout << "Default FragTrap constructor called" << std::endl;
	std::cout << RESET;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << BOLDWHITE;
	std::cout << "Name FragTrap constructor called (" << name << ")" << std::endl;
	std::cout << RESET;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << BOLDWHITE;
	std::cout << "Copy FragTrap constructor called" << std::endl;
	std::cout << RESET;
}

FragTrap &FragTrap::operator =(const FragTrap &assign)
{
	std::cout << std::endl << BOLDWHITE;
	std::cout << "Assignation ClapTrap operator called" << std::endl;
	std::cout << RESET;
	_name = assign.getName();
	_hit_points = assign.getHitPoints();
	_energy_points = assign.getEnergyPoints();
	_attack_damage = assign.getEnergyPoints();
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << BOLDWHITE;
	std::cout << "FragTrap destructor called"<< std::endl;
	std::cout << RESET;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " \033[1m\033[35mwants to high five !\033[0m" << std::endl;
	std::cout << RESET;
}
