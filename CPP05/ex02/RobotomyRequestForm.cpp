/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:06:54 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/25 21:38:00 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std:: string target) : Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
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
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const{
	return _target;
}

void RobotomyRequestForm::execute(Bureaucrat const &copy) const
{
	if (copy.getGrade() > this->getGradeToExecute())
	{
		std::cout << copy.getName() + " are not high enough to execute this form" << std::endl;
		throw Form::GradeTooLowException();
	}

	std::cout << copy.getName() + " executes " + _name << std::endl;
	
	std::cout << "* BSSSSI.........BSIIII..........BSZII *" << std::endl;
	srand(time(NULL));
	if(rand() % 2 == 0)
		std::cout << _target << " was robotomized ! " << std::endl;
	else
		std::cout << "The robotization failed !" << std::endl;
}

std::ostream &operator <<(std::ostream &os, const RobotomyRequestForm &robot)
{
	os << "Form " << robot.getName() << " with grade " << robot.getGradeToSign() << " and " << robot.getGradeToExecute() << std::endl;
	return os;
}