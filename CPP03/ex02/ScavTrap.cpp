/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 20:51:12 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/17 03:03:17 by mprigent         ###   ########.fr       */
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

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << BOLDWHITE;
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	std::cout << RESET;
}

ScavTrap &ScavTrap::operator =(const ScavTrap &assign)
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

void ScavTrap::attack(const std::string &target)
{
	if(_hit_points == 0)
		std::cout << "ScavTrap " << _name << " \033[1m\033[31mcan't attack \033[0mbecause it has 0 hit points..." << std::endl;
	else if(_energy == 0)
		std::cout << "ScavTrap " << _name << " \033[1m\033[31mcan't attack \033[0mbecause it has 0 energy points..." << std::endl;
	else
	{
		_energy--;
		std::cout << "ScavTrap " << _name << " \033[1m\033[35mattacks \033[0m" << target << ", causing " << _attack_damage << " points of damage. It has lost 1 energy point." << std::endl;
		std::cout << BOLDCYAN;
		std::cout << "Total of energy points : " << _energy << std::endl;
		std::cout << RESET << std::endl;
	}
}
void ScavTrap::guardGate()
{
	std::cout << BOLDYELLOW;
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper Mode" << std::endl;
	std::cout << RESET << std::endl;
}
