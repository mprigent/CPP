/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:35:56 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/09 21:29:31 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    _type = name;
}

std::string Weapon::get_Type() const
{
    return _type;
}

void Weapon::set_Type(std::string type)
{
    _type = type;
}

Weapon::~Weapon()
{
}
