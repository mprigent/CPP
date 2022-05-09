/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:36:28 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/09 21:27:44 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon){
    _name = name;
}

HumanA::~HumanA(){
    std::cout << _name << " is dead by destructor" << std::endl;
}

void HumanA::attack(){
    std::cout << _name << " attacks with their " << _weapon.get_Type() << std::endl;
}
