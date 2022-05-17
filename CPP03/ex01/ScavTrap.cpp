/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 20:51:12 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/17 02:28:17 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << std::endl << BOLDWHITE;
	std::cout << "Default ScavTrap constructor called" << std::endl;
	std::cout << RESET;
	_hit_points = 100;
	_energy = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << BOLDWHITE;
	std::cout << "Name ScavTrap constructor called (" << name << ")" << std::endl;
	std::cout << RESET;
	_hit_points = 100;
	_energy = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << BOLDWHITE;
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	std::cout << RESET;
	_hit_points = 100;
	_energy = 50;
	_attack_damage = 20;
}

ScavTrap &ScavTrap::operator =(const ClapTrap &assign)
{
	std::cout << std::endl << BOLDWHITE;
	std::cout << "Assignation ClapTrap operator called" << std::endl;
	std::cout << RESET;
	_name = assign.getName();
	_hit_points = assign.getHitPoints();
	_energy = assign.getEnergyPoints();
	_attack_damage = assign.getEnergyPoints();
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << BOLDWHITE;
	std::cout << "ScavTrap destructor called"<< std::endl;
	std::cout << RESET;
}

