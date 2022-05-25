/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:06:42 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/25 22:00:12 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string _target;

	public:
		RobotomyRequestForm(std::string target);							// default constructor
		RobotomyRequestForm(const RobotomyRequestForm &copy);				// copy constructor
		RobotomyRequestForm &operator =(const RobotomyRequestForm &assign);	// operateur d'assignation
		~RobotomyRequestForm();												// destructeur

		/* Accesseurs */
		std::string getTarget() const;

		void execute(Bureaucrat const &copy) const;
};

std::ostream &operator <<(std::ostream &os, const RobotomyRequestForm &robot);

#endif