/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:25:27 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/24 22:28:41 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	/* =============================== INCREMENT GRADE TEST =============================== */

	std::cout << std::endl << BOLDWHITE << "----- BUREAUCRAT -----" << RESET << std::endl << std::endl;
	
	std::cout << BOLDGREEN << "Constructor : " << RESET << std::endl;
	Bureaucrat b("Bernard", 149);

	std::cout << std::endl << std::endl << "----- INCREMENT GRADE -----" << std::endl << std::endl;
	
	std::cout << BOLDMAGENTA << "Call of incrementGrade." << RESET;
	b.incrementGrade();
	std::cout << std::endl << BOLDWHITE << "Call of getGrade : " << BOLDMAGENTA << b.getGrade() << std::endl << std::endl;

	std::cout << BOLDMAGENTA << "Call of incrementGrade." << RESET;
	b.incrementGrade();
	std::cout << std::endl << BOLDWHITE << "Call of getGrade : " << BOLDMAGENTA << b.getGrade() << RESET << std::endl;

	/* =============================== DECREMENT GRADE TEST =============================== */

	std::cout << std::endl << std::endl << "----- DECREMENT GRADE -----" << std::endl << std::endl;

	std::cout << BOLDCYAN << "Call of decrementGrade." << RESET;
	b.decrementGrade();
	std::cout << std::endl << BOLDWHITE << "Call of getGrade : " << BOLDCYAN << b.getGrade() << RESET << std::endl << std::endl;

	std::cout << BOLDCYAN << "Call of decrementGrade." << RESET;
	b.decrementGrade();
	std::cout << std::endl << BOLDWHITE << "Call of getGrade : " << BOLDCYAN << b.getGrade() << RESET << std::endl;

	/* =============================== OPERATOR OVERLOAD TEST =============================== */

	std::cout << std::endl << std::endl << "----- OPERATOR OVERLOAD -----" << std::endl << std::endl;

	std::cout << BOLDCYAN << "Call of decrementGrade." << RESET;
	b.decrementGrade();
	std::cout << std::endl << BOLDWHITE << "Overload : " << RESET << b << std::endl;
	
	std::cout << std::endl << BOLDCYAN << "Call of decrementGrade" << BOLDYELLOW << " using a try and catch : "<< RESET << std::endl;
	try {
		b.decrementGrade();
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	/* =============================== LOW GRADE TEST =============================== */

	std::cout << std::endl << std::endl << "----- LOW GRADE -----" << std::endl;

	std::cout << std::endl << BOLDWHITE << "Creation of " << BOLDCYAN << "lvl 151" << BOLDWHITE << " bureaucrat"<< BOLDYELLOW << " using a try and catch : "<< RESET << std::endl;
	try {
		Bureaucrat("Donatien", 151);
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	/* =============================== HIGH GRADE TEST =============================== */

	std::cout << std::endl << std::endl << "----- HIGH GRADE -----" << std::endl;

	std::cout << std::endl << BOLDWHITE << "Creation of " << BOLDMAGENTA << "lvl 0" << BOLDWHITE << " bureaucrat" << BOLDYELLOW << " using a try and catch : "<< RESET << std::endl;
	try {
		Bureaucrat("Donatien", 0);
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}
	
	std::cout << std::endl;

	return(0);
}
