/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:07:21 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/25 22:46:28 by mprigent         ###   ########.fr       */
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

void PresidentialPardonForm::execute(Bureaucrat const &copy) const
{
	if (copy.getGrade() > this->getGradeToExecute())
	{
		std::cout << copy.getName() + " are not high enough to execute this form" << std::endl;
		throw Form::GradeTooLowException();
	}

	std::cout << copy.getName() + " executes " + _name << std::endl;
	
	std::cout << BOLDYELLOW << _target << " has been pardoned by Zaphod Beeblebrox" << RESET << std::endl;
}
