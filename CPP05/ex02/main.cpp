/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:25:27 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/26 20:31:22 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main(void) {
	
	/* =============================== SHRUBBERY CREATION FORM TEST - ALREADY SIGNED =============================== */

	std::cout << std::endl << "----- SHRUBBERY CREATION FORM - ALREADY SIGNED -----" << std::endl << std::endl;

	Bureaucrat b("Bernard", 3);
	
	std::cout << std::endl << BOLDWHITE << "Creation of ShrubberyCreationForm" << BOLDYELLOW << " using a try and catch : "<< RESET << std::endl;

	ShrubberyCreationForm form1("form1");
	std::cout << std::endl << BOLDWHITE << "getSignGrade : " << BOLDCYAN << form1.getGradeToSign();
	std::cout << std::endl << BOLDWHITE << "getExecGrade : " << BOLDCYAN << form1.getGradeToExecute() << std::endl;
	try {
		std::cout << std::endl << BOLDMAGENTA << "Use of beSigned with Bernard : " << RESET;
		form1.beSigned(b);
		std::cout << std::endl << BOLDWHITE << "Overload : " << RESET << form1 << std::endl;
		std::cout << BOLDMAGENTA << "Use of beSigned with Bernard : " << RESET;
		form1.beSigned(b);
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}
	
	/* =============================== EXECUTE SHRUBBERY CREATION FORM TEST =============================== */

	std::cout << std::endl << std::endl << "----- EXECUTE SHRUBBERY CREATION FORM -----" << std::endl << std::endl;
	
	try {
		std::cout << std::endl << BOLDMAGENTA << "Use of execute with Bernard : " << RESET << std::endl;
		b.executeForm(form1);
		std::cout << std::endl << BOLDWHITE << "Overload : " << RESET << form1;
		std::cout << BOLDMAGENTA << "Use of beSigned with Bernard : " << RESET;
		form1.beSigned(b);
    }
    catch (std::exception &e) {
        std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
    }
	
	/* =============================== ROBOTOMY REQUEST FORM TEST - ALREADY SIGNED =============================== */
	
	std::cout << std::endl << std::endl << "----- ROBOTOMY REQUEST FORM - ALREADY SIGNED -----" << std::endl << std::endl;
	
	std::cout << std::endl << BOLDWHITE << "Creation of RobotomyRequestForm" << BOLDYELLOW << " using a try and catch : "<< RESET << std::endl;
	
	RobotomyRequestForm form2("form2");
	
	std::cout << std::endl << BOLDWHITE << "getSignGrade : " << BOLDCYAN << form2.getGradeToSign();
	std::cout << std::endl << BOLDWHITE << "getExecGrade : " << BOLDCYAN << form2.getGradeToExecute() << RESET << std::endl;
	try {
		std::cout << std::endl << BOLDMAGENTA << "Use of beSigned with Bernard : " << RESET;
		form2.beSigned(b);
		std::cout << std::endl << BOLDWHITE << "Overload : " << RESET << form2;
		std::cout << std::endl << BOLDMAGENTA << "Use of beSigned with Bernard : " << RESET;
		form2.beSigned(b);
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	/* =============================== EXECUTE ROBOTOMY REQUEST FORM TEST =============================== */
	
	std::cout << std::endl << std::endl << "----- EXECUTE ROBOTOMY REQUEST FORM -----" << std::endl << std::endl;
	
    try {
		std::cout << std::endl << BOLDMAGENTA << "Use of execute with Bernard : " << RESET << std::endl;
		b.executeForm(form2);
		std::cout << std::endl << BOLDWHITE << "Overload : " << RESET << form2;
		std::cout << BOLDMAGENTA << "Use of beSigned with Bernard : " << RESET;
		form2.beSigned(b);
    }
    catch (std::exception &e) {
	std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	/* =============================== PRESIDENTIAL PARDON FORM TEST =============================== */

	std::cout << std::endl << std::endl << "----- PRESIDENTIAL PARDON FORM -----" << std::endl << std::endl;
	
	std::cout << std::endl << BOLDWHITE << "Creation of PresidentialPardonForm" << BOLDYELLOW << " using a try and catch : "<< RESET << std::endl;

	PresidentialPardonForm form3("form3");

	std::cout << std::endl << BOLDWHITE << "getSignGrade : " << BOLDCYAN << form3.getGradeToSign();
	std::cout << std::endl << BOLDWHITE << "getExecGrade : " << BOLDCYAN << form3.getGradeToExecute() << std::endl;
	try {
		std::cout << std::endl << BOLDWHITE << "Overload : " << RESET << form3;
		std::cout << BOLDMAGENTA << "Use of beSigned with Bernard : " << RESET;
		form3.beSigned(b);
	}
	catch (std::exception &e) {
	std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	/* =============================== EXECUTE PRESIDENTIAL PARDON FORM TEST =============================== */

	std::cout << std::endl << std::endl << "----- EXECUTE PRESIDENTIAL PARDON FORM -----" << std::endl << std::endl;
	
	try {
		std::cout << std::endl << BOLDMAGENTA << "Use of execute with Bernard : " << RESET << std::endl;
		b.executeForm(form3);
		std::cout << std::endl << BOLDWHITE << "Overload : " << RESET << form3;
		std::cout << BOLDMAGENTA << "Use of beSigned with Bernard : " << RESET;
		form3.beSigned(b);
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}

	std::cout << std::endl << std::endl << "----- DESTRUCTORS -----" << std::endl << std::endl;

	return(0);
}
