/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:20:51 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/25 21:41:54 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)	// default constructor
{
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
	std::cout << BOLDGREEN << "Bureaucrat " << _name << " created with grade " << _grade << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade())	// copy constructor
{
	_grade = copy.getGrade();
	std::cout << "Bureaucrat copy " << _name << " created with grade " << _grade << std::endl << std::endl;
}

Bureaucrat::~Bureaucrat(){												// destructor
	std::cout << BOLDRED << "Bureaucrat " << _name << " has been destroyed" << RESET << std::endl;
}

Bureaucrat & Bureaucrat::operator =(const Bureaucrat &assign)			// operateur d'affectation
{
	_grade = assign.getGrade();
	return *this;
}

const std::string Bureaucrat::getName() const {							// accesseur
	return _name;
}

int Bureaucrat::getGrade() const {										// accesseur
	return _grade;
}

void Bureaucrat::incrementGrade()
{
    if (_grade != 1)
        _grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	if (_grade != 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout  << BOLDWHITE << _name << " signed " << form.getName() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << BOLDWHITE << _name << " couldn't sign " << form.getName() << " because : " << BOLDRED << e.what() << RESET << std::endl;
	}
}

void 	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " couldn't execute " << form.getName() << " because: " << e.what() << std::endl;
	}
}

std::ostream &operator <<(std::ostream &stream, Bureaucrat const &bureaucrat)
{
	stream << BOLDGREEN << bureaucrat.getName() << RESET << " , bureaucrat grade " << BOLDGREEN << bureaucrat.getGrade();
	return stream;
}