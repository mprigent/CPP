/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:45:39 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/17 00:03:58 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hit_points(10), _energy(10), _attack_damage(0) {
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hit_points(10), _energy(10), _attack_damage(0) {
	std::cout << "Name ClapTrap constructor called (" << name << ")" << std::endl;
	_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	_name = copy.getName();
	_hit_points = copy.getHitPoints();
	_energy = copy.getEnergyPoints();
	_attack_damage = copy.getEnergyPoints();
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called for " << _name << "" << std::endl;
}

ClapTrap &ClapTrap::operator =(const ClapTrap &assign)
{
	std::cout << "Assignation ClapTrap operator called" << std::endl;
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
	if(_hit_points == 0)
		std::cout << "ClapTrap " << _name << " can't attack because it has 0 hit points..." << std::endl;
	else if(_energy == 0)
		std::cout << "ClapTrap " << _name << " can't attack because it has 0 energy points..." << std::endl;
	else
	{
		_energy--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > _hit_points)
		_hit_points = 0;
	else
		_hit_points -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " damages. It has now " << _hit_points << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(_hit_points == 0)
		std::cout << "ClapTrap " << _name << " can't repair because it has 0 hit points.." << std::endl;
	else if (_energy == 0)
		std::cout << "ClapTrap " << _name << " can't repair because it has 0 energy points..." << std::endl;
	else
	{
		_energy--;
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " repaire itself for " << amount << " points. It has now " << _hit_points << " hit points." << std::endl;
	}
}
