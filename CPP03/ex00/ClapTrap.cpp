/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:45:39 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/17 01:37:10 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hit_points(10), _energy(10), _attack_damage(0) 
{
	std::cout << std::endl;
	std::cout << BOLDWHITE;
	std::cout << "Default ClapTrap constructor called" << std::endl;
	std::cout << RESET;
}

ClapTrap::ClapTrap(std::string name) : _hit_points(10), _energy(10), _attack_damage(0) 
{
	std::cout << BOLDWHITE;
	std::cout << "Name ClapTrap constructor called (" << name << ")" << std::endl;
	std::cout << RESET;
	_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << BOLDWHITE;
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	std::cout << RESET;
	_name = copy.getName();
	_hit_points = copy.getHitPoints();
	_energy = copy.getEnergyPoints();
	_attack_damage = copy.getEnergyPoints();
}

ClapTrap::~ClapTrap()
{
	std::cout << BOLDWHITE;
	std::cout << "ClapTrap destructor called"<< std::endl;
	std::cout << RESET;
}

ClapTrap &ClapTrap::operator =(const ClapTrap &assign)
{
	std::cout << std::endl;
	std::cout << BOLDWHITE;
	std::cout << "Assignation ClapTrap operator called" << std::endl;
	std::cout << RESET;
	_name = assign.getName();
	_hit_points = assign.getHitPoints();
	_energy = assign.getEnergyPoints();
	_attack_damage = assign.getEnergyPoints();
	return *this;
}

std::string ClapTrap::getName() const {
	return _name;
}

unsigned int ClapTrap::getHitPoints() const {
	return _hit_points;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return _energy;
}

unsigned int ClapTrap::getAttackDamage() const {
	return _attack_damage;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hit_points == 0)
		std::cout << "ClapTrap " << _name << " \033[1m\033[31mcan't attack \033[0mbecause it has 0 hit points..." << std::endl;
	else if (_energy == 0)
		std::cout << "ClapTrap " << _name << " \033[1m\033[31mcan't attack \033[0mbecause it has 0 energy points..." << std::endl;
	else
	{
		_energy--;
		std::cout << "ClapTrap " << _name << " \033[1m\033[35mattacks \033[0m" << target << ", causing " << _attack_damage << " points of damage. It has lost 1 energy point." << std::endl;
		std::cout << BOLDCYAN;
		std::cout << "Total of energy points : " << _energy << std::endl;
		std::cout << RESET << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > _hit_points)
		_hit_points = 0;
	else
		_hit_points -= amount;
	std::cout << "ClapTrap " << _name << " \033[1m\033[33mtakes " << amount << " damages.\033[0m It has now " << _hit_points << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points == 0)
		std::cout << "ClapTrap " << _name << " \033[1m\033[31mcan't repair \033[0mbecause it has 0 hit points..." << std::endl;
	else if (_energy == 0)
		std::cout << "ClapTrap " << _name << " \033[1m\033[31mcan't repair \033[0mbecause it has 0 energy points..." << std::endl;
	else
	{
		_energy--;
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " \033[1m\033[32mrepair " << amount << " damages\033[0m and lost 1 energy point." << std::endl;
		std::cout << BOLDCYAN;
		std::cout << "Total of energy points : " << _energy << std::endl;
		std::cout << RESET << std::endl;
	}
}
