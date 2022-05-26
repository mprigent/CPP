/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:06:06 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/26 15:19:53 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFROM_HPP
# define SHRUBERRYCREATIONFROM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string _target;
		
	public:
		ShrubberyCreationForm(std::string target);								// default constructor
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);				// copy constructor
		ShrubberyCreationForm &operator =(const ShrubberyCreationForm &assign); // operateur d'assignation
		~ShrubberyCreationForm();												// destructor

		/* Accesseurs */
		std::string getTarget() const;

		void executed() const;

		/* Exception */
		class ErrorFileException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return("File error");
				}
		};
};

#endif