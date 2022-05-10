/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:01:48 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/10 21:41:04 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl(void) {
	std::cout << std::endl;
	std::cout << BOLDMAGENTA;
	std::cout << "Harl is born by constructor" << std::endl;
	std::cout << RESET << std::endl;
	this->levels[DEBUG].label = "DEBUG";
    this->levels[DEBUG].f = &Harl::_debug;
    this->levels[INFO].label = "INFO";
    this->levels[INFO].f = &Harl::_info;
    this->levels[WARNING].label = "WARNING";
    this->levels[WARNING].f = &Harl::_warning;
    this->levels[ERROR].label = "ERROR";
    this->levels[ERROR].f = &Harl::_error;
}

void Harl::_debug(void){
	std::cout << BOLDGREEN;
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << RESET;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::_info(void){
	std::cout << BOLDCYAN;
	std::cout << "[ INFO ]" << std::endl;
	std::cout << RESET;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::_warning(void){
	std::cout << BOLDYELLOW;
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << RESET;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::_error(void){
	std::cout << BOLDRED;
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << RESET;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

Harl::~Harl(void) {
	std::cout << BOLDMAGENTA;
    std::cout << "Harl is dead by destructor" << std::endl;
	std::cout << RESET << std::endl;
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->levels[i].label == level)
			return (this->*levels[i].f)();
	}
}