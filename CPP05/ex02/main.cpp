/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:25:27 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/25 21:54:29 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main(void) {
	
	/* =============================== SHRUBBERY CREATION FORM TEST =============================== */

	std::cout << std::endl << "----- SHRUBBERY CREATION FORM -----" << std::endl << std::endl;

	Bureaucrat b("Bernard", 3);
	std::cout << std::endl << BOLDWHITE << "Creation of ShrubberyCreationForm" << BOLDYELLOW << " using a try and catch : "<< RESET << std::endl;

    ShrubberyCreationForm form1("form1");
    std::cout << std::endl << BOLDWHITE << "getSignGrade : " << RESET << form1.getGradeToSign();
    std::cout << std::endl << BOLDWHITE << "getExecGrade : " << RESET << form1.getGradeToExecute() << std::endl;
    try {
		std::cout << std::endl << BOLDMAGENTA << "Use of beSigned with Bernard : " << RESET;
		form1.beSigned(b);
		std::cout << std::endl << BOLDWHITE << "Overload : " << RESET << form1 << std::endl;
		std::cout << std::endl << BOLDMAGENTA << "Use of beSigned with Bernard : " << RESET;
		form1.beSigned(b);
	}
	catch (std::exception &e) {
		std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
	}
	
    try {
		std::cout << std::endl << MAGENTA << "Use of execute with Bernard." << std::endl << RESET;
		b.executeForm(form1);
        std::cout << std::endl << BOLDWHITE << "Overload : " << RESET << form1 << std::endl;
        std::cout << std::endl << MAGENTA << "Use again of beSigned with Bernard." << std::endl << RESET;
        form1.beSigned(b);
    }
    catch (std::exception &e) {
        std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
    }
	
	/* =============================== SHRUBBERY CREATION FORM TEST =============================== */
	
    std::cout << std::endl << "--------------RobotomyRequestForm---------------"<< std::endl;
    std::cout << std::endl << BOLDWHITE << "Creation of RobotomyRequestForm" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    
    RobotomyRequestForm form2("form2");

    std::cout << std::endl << MAGENTA << "getSignGrade : " << RESET;
    std::cout << form2.getGradeToSign();
    std::cout << std::endl << MAGENTA << "getExecGrade : " << RESET;
    std::cout << form2.getGradeToExecute() << std::endl;
    try {
        std::cout << std::endl << MAGENTA << "Use of beSigned with Bernard." << RESET;
        form2.beSigned(b);
        std::cout << std::endl << std::endl << MAGENTA << "Use of overloader : " << std::endl << RESET;
        std::cout << form2;
        std::cout << std::endl << MAGENTA << "Use again of beSigned with john." << std::endl << RESET;
        form2.beSigned(b);
    }
    catch (std::exception &e) {
        std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
    }
    try {
        std::cout << std::endl << MAGENTA << "Use of execute with john." << std::endl << RESET;
        b.executeForm(form2);
        std::cout << std::endl << std::endl << MAGENTA << "Use of overloader : " << std::endl << RESET;
        std::cout << form2;
        std::cout << std::endl << MAGENTA << "Use again of beSigned with john." << std::endl << RESET;
        form2.beSigned(b);
    }
    catch (std::exception &e) {
        std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
    }
	
   /* =============================== SHRUBBERY CREATION FORM TEST =============================== */

    std::cout << std::endl << "--------------PresidentialPardonForm---------------"<< std::endl;
    std::cout << std::endl << MAGENTA << "Creation of PresidentialPardonForm" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    
    PresidentialPardonForm form3("form3");

    std::cout << std::endl << MAGENTA << "getSignGrade : " << RESET;
    std::cout << form3.getGradeToSign();
    std::cout << std::endl << MAGENTA << "getExecGrade : " << RESET;
    std::cout << form3.getGradeToExecute() << std::endl;
    try {
        std::cout << std::endl << std::endl << MAGENTA << "Use of overloader : " << std::endl << RESET;
        std::cout << form3;
        std::cout << std::endl << MAGENTA << "Use of beSigned with john." << std::endl << RESET;
        form3.beSigned(b);
    }
    catch (std::exception &e) {
        std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
    }
    try {
        std::cout << std::endl << MAGENTA << "Use of execute with john." << std::endl << RESET;
        b.executeForm(form3);
        std::cout << std::endl << std::endl << MAGENTA << "Use of overloader : " << std::endl << RESET;
        std::cout << form3;
        std::cout << std::endl << MAGENTA << "Use again of beSigned with john." << std::endl << RESET;
        form3.beSigned(b);
    }
    catch (std::exception &e) {
        std::cerr << BOLDWHITE << "Output of Exception :  " << BOLDRED << e.what() << RESET << std::endl;
    }

    return(0);
}
