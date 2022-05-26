/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:22:56 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/26 15:17:15 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, const int signGrade, const int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form " << BOLDGREEN << _name << " created" << RESET << " with grade " << BOLDGREEN << _signGrade << RESET << " and " << BOLDGREEN << _execGrade << RESET << std::endl;
}

Form::Form(const Form &copy): _name(copy.getName()), _signGrade(copy.getGradeToSign()), _execGrade(copy.getGradeToExecute())
{
	_signed = copy.getSigned();
	std::cout << "Form copy" << _name << " created with grade " << _signGrade << " and " << _execGrade << std::endl;
}

Form::~Form() {
	std::cout << BOLDRED << "Form " << _name << " has been destroyed" << RESET << std::endl;
}

Form &Form::operator =(const Form &assign)
{
	std::cout << *this << " has been assigned" << std::endl;
	_signed = assign.getSigned();
	return *this;
}

const std::string Form::getName() const {
	return _name;
}

int Form::getGradeToExecute() const {
	return _execGrade;
}

int Form::getGradeToSign() const {
	return _signGrade;
}

bool Form::getSigned() const {
	return _signed;
}

void Form::setSign() { 
	_signed = true;
}

void Form::beSigned(Bureaucrat bureaucrat)
{
	if (_signed)
	{
		std::cout << BOLDWHITE << "Output of Exception :  " << BOLDRED << bureaucrat.getName() << " couldn't sign " << RESET << std::endl;
		throw Form::AlreadySignedException();
	}
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	else
	{
		std::cout << BOLDWHITE << "Output of Exception :  " << BOLDRED << bureaucrat.getName() << " couldn't sign " << RESET << std::endl << std::endl;
		throw Form::GradeTooLowException();
	}
}

void Form::execute(Bureaucrat const &executor) const
{
	if(!_signed)
		throw Form::NotSignedException();
	if(executor.getGrade() <= _execGrade)
		executed();
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &stream, Form const &form)
{
	stream << "Form " << BOLDCYAN << form.getName() << RESET << " with grade " << BOLDCYAN << form.getGradeToSign() << RESET << " and " << BOLDCYAN << form.getGradeToExecute() << RESET << std::endl << std::endl;
	return stream;
}
