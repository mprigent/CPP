/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:25:27 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/26 20:43:57 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void) 
{
	std::cout << std::endl << std::endl << "----- INTERN ROBOTOMY REQUEST FORM -----" << std::endl << std::endl;
	
	try{
		Bureaucrat b("Bernard", 10);
		std::cout << std::endl;
		Intern someRandomIntern;
		Form *rrf;
		std::cout << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		
		std::cout << std::endl << BOLDMAGENTA << "Use of signForm : " << RESET;
		b.signForm(*rrf);
		
		std::cout << std::endl << BOLDMAGENTA << "Use of execute : " << RESET << std::endl;
		rrf->execute(b);
	}
	catch(const std::exception& e){
		std::cout  << e.what() << std::endl;
	}

	return (0);
}
