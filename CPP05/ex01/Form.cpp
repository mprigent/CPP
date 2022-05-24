/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:22:56 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/24 17:35:11 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, const int signGrade, const int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form " << _name << " created with grade " << _signGrade << " and " << this->_execGrade << std::endl;
}

Form::Form(const Form &copy): _name(copy.getName()), _signGrade(copy.getGradeToSign()), _execGrade(copy.getGradeToExecute())
{
	_signed = copy.getSigned();
	std::cout << "Form copy" << _name << " created with grade " << _signGrade << " and " << _execGrade << std::endl;
}

Form::~Form() {
	std::cout << "Form " << _name << " has been destroyed" << std::endl;
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
		std::cout << bureaucrat.getName() << " couldn't sign " << std::endl;
		throw Form::AlreadySignedException();
	}
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	else
	{
		std::cout << bureaucrat.getName() << " couldn't sign " << std::endl;
		throw Form::GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &stream, Form const &form)
{
	stream << "Form " << form.getName() << " with grade " << form.getGradeToSign() << " and " << form.getGradeToExecute() << std::endl;
	return stream;
}
