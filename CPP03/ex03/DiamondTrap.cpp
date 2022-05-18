/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:07:18 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/18 19:08:51 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << std::endl << BOLDWHITE;
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	std::cout << RESET;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << BOLDWHITE;
	std::cout << "Name DiamondTrap constructor called (" << name << ")" << std::endl;
	std::cout << RESET;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy.getName() + "_clap_name"), ScavTrap(copy.getName() + "_clap_name")
{
	std::cout << BOLDWHITE;
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	std::cout << RESET;
	_name = copy.getName();
	_hit_points = copy.getHitPoints();
	_energy_points = copy.getEnergyPoints();
	_attack_damage = copy.getEnergyPoints();
}

DiamondTrap &DiamondTrap::operator =(const DiamondTrap &assign)
{
	std::cout << std::endl << BOLDWHITE;
	std::cout << "Assignation DiamondTrap operator called" << std::endl;
	std::cout << RESET;
	_name = assign.getName();
	_hit_points = assign.getHitPoints();
	_energy_points = assign.getEnergyPoints();
	_attack_damage = assign.getEnergyPoints();
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << BOLDWHITE;
	std::cout << "DiamondTrap destructor called"<< std::endl;
	std::cout << RESET;
}

std::string DiamondTrap::getName() const{
	return _name;
}

void DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hi ! \033[1m\033[32mI am the DiamondTrap\033[0m " << _name << ", but my ClapTrap name is \033[1m\033[32m" << ClapTrap::_name << "\033[0m" << std::endl;
	std::cout << RESET << std::endl;
}
