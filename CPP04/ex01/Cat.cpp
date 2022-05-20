/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:15:20 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/20 20:53:52 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain())
{
	std::cout << "Default Cat constructor called" << std::endl;
	_type = "\033[1m\033[36mCat\033[0m";
}

Cat::Cat(const Cat &copy) : _brain(new Brain(*copy._brain))		//copie profonde (cree une nouvelle adresse)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	_type = copy.getType();
}

Cat &Cat::operator =(const Cat &assign)							//copie profonde (cree une nouvelle adresse)
{
	std::cout << "Assignation Cat operator called" << std::endl;
	_type = assign.getType();
	delete _brain;
	this->_brain = new Brain (*assign._brain);
	return *this;
} 

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << BOLDCYAN << "Miaouuu" << RESET << std::endl;
}
