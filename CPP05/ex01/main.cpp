/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:25:27 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/25 14:57:24 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	/* =============================== EXCEPTIONS TEST =============================== */

	std::cout << std::endl << "----- EXCEPTIONS -----" << std::endl << std::endl;
	
	Bureaucrat c("Brice", 149);
	std::cout << std::endl << BOLDWHITE << "Form creation, lvl : " << BOLDCYAN << "151 sign | 130 exec" << BOLDYELLOW << " using a try and catch : "<< RESET << std::endl;
	try {
		Form("Brice", 151, 130);
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	/* =============================== OPERATOR OVERLOAD TEST =============================== */

	std::cout << std::endl << std::endl << "----- OPERATOR OVERLOAD -----" << std::endl << std::endl;

	std::cout << std::endl << BOLDWHITE << "Form creation, lvl : " << BOLDCYAN << "21 sign | 42 exec" << BOLDYELLOW << " using a try and catch : "<< RESET << std::endl;
	try {
		Form form1("Form 1", 21, 42);
		std::cout << std::endl << BOLDWHITE << "Overload : " << RESET << form1 << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	/* =============================== BE SIGNED TEST =============================== */

	std::cout << std::endl << std::endl << "----- BE SIGNED -----" << std::endl << std::endl << std::endl;

	Bureaucrat b("Bernard", 3);
	
	std::cout << std::endl << BOLDWHITE << "Form creation, lvl : " << BOLDCYAN << "3 sign | 12 exec" << BOLDYELLOW << " using a try and catch : "<< RESET << std::endl;
	Form form2("form 2", 3, 12);
	try {
		std::cout << std::endl << BOLDMAGENTA << "Use of beSigned with Bernard : " << RESET;
		form2.beSigned(b);
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}
	
	/* =============================== BE SIGNED TEST - LOW GRADE =============================== */
	
	std::cout << std::endl << std::endl << "----- BE SIGNED - LOW GRADE -----" << std::endl << std::endl;
	
	Bureaucrat j("Jeffrey", 2);
	
	std::cout << std::endl << BOLDWHITE << "Form creation, lvl : " << BOLDCYAN << "1 sign | 42 exec" << BOLDYELLOW << " using a try and catch : "<< RESET << std::endl;
	Form form5("form 5", 1, 42);
	try {
		std::cout << std::endl << BOLDMAGENTA << "Use of beSigned with Bernard : " << RESET;
		form5.beSigned(j);
	}
	catch (std::exception &e) {
	std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	/* =============================== SIGN FORM TEST =============================== */

	std::cout << std::endl << std::endl << "----- SIGN FORM -----" << std::endl << std::endl << std::endl;

	Bureaucrat d("Donatien", 2);
	
	std::cout << std::endl << BOLDWHITE << "Form creation, lvl : " << BOLDCYAN << "3 sign | 42 exec" << BOLDYELLOW << " using a try and catch : "<< RESET << std::endl;
	Form form3("form 3", 3, 42);
	try {
		std::cout << std::endl << BOLDMAGENTA << "Use of signForm with Donatien : " << RESET;
		d.signForm(form3);
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	/* =============================== SIGN FORM TEST - LOW GRADE =============================== */

	std::cout << std::endl << std::endl << "----- SIGN FORM - LOW GRADE -----" << std::endl << std::endl;
	
    Bureaucrat d2("Donatienne", 2);

	std::cout << std::endl << BOLDWHITE << "Form creation, lvl : " << BOLDCYAN << "1 sign | 42 exec" << BOLDYELLOW << " using a try and catch : "<< RESET << std::endl;
	Form form4("form 4", 1, 42);
	try {
		std::cout << std::endl << BOLDMAGENTA << "Use of signForm with Donatienne : " << RESET;
		d2.signForm(form4);
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}
	
	std::cout << std::endl << std::endl << "----- DESTRUCTORS -----" << std::endl << std::endl << std::endl;

	return (0);
}