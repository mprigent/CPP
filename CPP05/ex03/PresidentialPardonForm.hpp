/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:07:12 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/26 15:18:26 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm(std::string target);									// default constructor
		PresidentialPardonForm(const PresidentialPardonForm &copy);					// copy constructor
		PresidentialPardonForm &operator =(const PresidentialPardonForm &assign);	// operateur d'assignation
		~PresidentialPardonForm();													// destructor

		/* Accesseurs */
		std::string getTarget() const;

		void executed() const;
};

#endif