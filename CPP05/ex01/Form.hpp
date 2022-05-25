/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:23:07 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/25 01:21:54 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include <string>
# include "Bureaucrat.hpp"

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

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _execGrade;
	
	public :
		Form();
		Form(std::string name, const int signGrade, const int execGrade);
		Form(const Form &copy);
		~Form();
		Form &operator =(const Form &assign);
		
		const std::string getName() const;
		bool getSigned() const;
		void setSign();
		int getGradeToSign() const;
		int getGradeToExecute() const;

		void beSigned(Bureaucrat bureaucrat);	//change le status du formulaire en signé si l’échelon du Bureaucrat est suffisant (supérieur ou égal à l’échelon requis)

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

		class AlreadySignedException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return("Form already signed");
				}
		};
};

std::ostream &operator <<(std::ostream &stream, Form const &Form);

#endif