/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:59:12 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/26 20:36:54 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern() {
	std::cout << BOLDGREEN << "Intern created" << RESET << std::endl;
}

Intern::Intern(Intern const &copy) 
{
	(void)copy;
	std::cout << "Intern has been copied." << std::endl;
}

Intern &Intern::operator =(Intern const &assign) 
{
	(void)assign;
	return (*this);
}

Intern::~Intern(void) {
	std::cout << BOLDRED << "Intern has been destroyed." << RESET << std::endl;
}

static Form	*newShrubberyForm(std::string target)
{
	Form	*shrubbery = new ShrubberyCreationForm(target);
	return (shrubbery);
}

static Form	*newRobotForm(std::string target)
{
	Form	*robot = new RobotomyRequestForm(target);
	return (robot);
}

static Form	*newPresidentForm(std::string target)
{
	Form	*pres = new PresidentialPardonForm(target);
	return (pres);
}

Form	*Intern::makeForm(std::string formType, std::string formTarget)
{
	Form	*(*newForm[3])(std::string target) = {newShrubberyForm, newRobotForm, newPresidentForm};
	std::string	msg[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (formType == msg[i])
			return newForm[i](formTarget);
	}
	std::cout << "Intern couldn't make form " << formType << " because this form type doesn't exist." << std::endl;
	return NULL;
}