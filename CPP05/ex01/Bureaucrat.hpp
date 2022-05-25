/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:21:12 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/25 01:22:29 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"

# define RESET       "\033[0m"
# define BLACK       "\033[30m"             /* Black */
# define RED         "\033[31m"             /* Red */
# define GREEN       "\033[32m"             /* Green */
# define YELLOW      "\033[33m"             /* Yellow */
# define BLUE        "\033[34m"             /* Blue */
# define MAGENTA     "\033[35m"             /* Magenta */
# define CYAN        "\033[36m"             /* Cyan */
# define WHITE       "\033[37m"             /* White */
# define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
# define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
# define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
# define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
# define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
# define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;		// entre 1 et 150
		
	public:
		Bureaucrat(const std::string name, int grade);			// default constructor
		Bureaucrat(const Bureaucrat &copy);						// copy constructor
		~Bureaucrat();											// Destructeur
		Bureaucrat & operator=(const Bureaucrat &assign);		// Opérateur d'affectation
		
		const std::string getName() const;						// Accesseurs
		int getGrade() const;

		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(Form &src);
		
		class GradeTooHighException: public std::exception		// Exceptions -> echelon trop haut
		{
			public :
				virtual const char *what() const throw()
				{
					return("Grade too high");
				}
		};

		class GradeTooLowException: public std::exception		// Exceptions -> echelon trop bas
		{
			public :
				virtual const char *what() const throw()
				{
					return("Grade too low");
				}
		};
};

std::ostream &operator <<(std::ostream &stream, Bureaucrat const &bureaucrat);

#endif
