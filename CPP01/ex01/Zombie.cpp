/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:40:59 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/06 01:51:26 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
    _name = name;
}

void Zombie::announce(){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
