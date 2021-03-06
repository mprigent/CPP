/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:06:54 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/26 20:34:01 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std:: string target) : Form("RobotomyRequestForm", 72, 45)
{
	std::cout << std::endl << BOLDGREEN << "RobotomyRequestForm constructor called" << RESET << std::endl;
	_target = target;
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	_target = copy.getTarget();
	srand(time(NULL));
}

RobotomyRequestForm &RobotomyRequestForm::operator =(const RobotomyRequestForm &assign)
{
	Form::operator =(assign);
	_target = assign.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << std::endl << BOLDRED << "RobotomyRequestForm destructor called" << RESET << std::endl;
}

std::string RobotomyRequestForm::getTarget() const{
	return _target;
}

void RobotomyRequestForm::executed() const
{
	std::cout << BOLDWHITE << "Execution : " RESET + _name << std::endl;
	
	std::cout << std::endl << BOLDYELLOW << "* BSSSSI.........BSIIII..........BSZII *" << RESET << std::endl;
	srand(time(NULL));
	if(rand() % 2 == 0)
		std::cout << BOLDYELLOW << _target << " has been robotomized ! " << RESET << std::endl;
	else
		std::cout << BOLDYELLOW << "The robotization failed !" << RESET << std::endl;
}
