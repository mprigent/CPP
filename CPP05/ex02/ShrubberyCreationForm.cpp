/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:06:15 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/26 20:34:43 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137) 
{
	_target = target;
	std::cout << std::endl << BOLDGREEN << "ShrubberyCreationForm constructor called" << RESET << std::endl;
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
	std::cout << std::endl << BOLDRED << "ShrubberyCreationForm destructor called" << RESET << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const {
	return _target;
}

void ShrubberyCreationForm::executed() const 
{
	std::fstream file;
	
	std::cout << BOLDWHITE << " Execution : " RESET + _name << std::endl << " Creation : " BOLDYELLOW + _target + "_shrubbery " RESET "file" << std::endl;
	
	file.open(std::string(_target + "_shrubbery").c_str(), std::ios::out | std::ios::app);
	if (!file)
	{
		std::cout << "Error while creating " + _target + "_shrubbery file" << std::endl;
		throw ShrubberyCreationForm::ErrorFileException();
	}

	if (file.is_open())
	{
		file << std::endl;
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
	
	std::cout << BOLDYELLOW << "Check the file !" << RESET << std::endl;

	file.close();
	}
}
