/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:36:52 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/09 21:27:34 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
    std::cout << "HumanB is born by constructor" << std::endl;
}

void HumanB::attack() const {
    std::cout << _name << " attacks with their " << _weapon->get_Type() << std::endl;
}

void HumanB::set_Weapon(Weapon& weaponptr) {
    _weapon = &weaponptr;
}

HumanB::~HumanB(){
    std::cout << _name << " is dead by destructor" << std::endl;
}
