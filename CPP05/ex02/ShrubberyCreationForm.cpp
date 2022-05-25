/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:06:15 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/25 21:38:00 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137) 
{
	_target = target;
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy)
{
	_target = copy.getTarget();
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator =(const ShrubberyCreationForm &assign)
{
	Form::operator =(assign);
	_target = assign.getTarget();
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const {
	return _target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &copy) const 
{
	std::fstream file;
	
	if (copy.getGrade() > this->getGradeToExecute())
	{
		std::cout << copy.getName() + " are not high enough to execute this form" << std::endl;
		throw Form::GradeTooLowException();
	}
	
	std::cout << copy.getName() + " executes " + _name + " and create " + _target + "_shrubbery file" << std::endl;
	
	file.open(_target + "_shrubbery", std::fstream::out);
	if (!file)
	{
		std::cout << "Error while creating " + _target + "_shrubbery file" << std::endl;
		throw ShrubberyCreationForm::ErrorFileException();
	}

	if (file.is_open())
	{
		file << "     *         ,@@@@@@@,     " << std::endl;
		file << "       ,,,.   ,@@@@@@/@@,  .oo8888o.    *" << std::endl;
		file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		file << "       |o|        | |    *    | |" << std::endl;
		file << " *     |.|        | |         | |" << std::endl;
		file << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
		file << std::endl;
	
	std::cout << "Check the file !" << std::endl;

	file.close();
	}
}
