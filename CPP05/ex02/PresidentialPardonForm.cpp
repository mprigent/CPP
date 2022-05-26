/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:07:21 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/26 20:34:17 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std:: string target) : Form("PresidentialPardonForm", 25, 5)
{
	std::cout << std::endl << BOLDGREEN << "PresidentialPardonForm constructor called" << RESET << std::endl;
	_target = target;
	srand(time(NULL));
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	_target = copy.getTarget();
	srand(time(NULL));
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << std::endl << BOLDRED << "PresidentialPardonForm destructor called" << RESET << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	Form::operator=(assign);
	_target = assign.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget() const {
	return _target;
}

void PresidentialPardonForm::executed() const
{
	std::cout << BOLDWHITE << "Execution : " RESET + _name << std::endl;
	std::cout << BOLDYELLOW << _target << " has been pardoned by Zaphod Beeblebrox" << RESET << std::endl;
}
