/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:59:25 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/25 23:21:06 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();									// default constructor
		Intern(const Intern &copy);					// copy constructor
		Intern &operator =(const Intern &assign);	// operatweur d'assignation
		~Intern();									// destructor
		
		Form *makeForm(std::string formName, std::string targetName);
};

#endif