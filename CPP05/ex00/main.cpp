/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:25:27 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/24 15:20:55 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	/* =============================== CLASSIC BUREAUCRAT TEST =============================== */
	
    std::cout << std::endl << BOLDWHITE << "----- BUREAUCRAT -----" << RESET << std::endl << std::endl;
    std::cout << BOLDGREEN << "Constructor : " << RESET << std::endl << std::endl;
    Bureaucrat b("Bernard", 149);
    
    std::cout << std::endl << BOLDWHITE << "Call of getGrade   : " << RESET << b.getGrade() << std::endl;
    
    std::cout << BOLDWHITE << "Call of incrementGrade." << RESET << std::endl;
    b.incrementGrade();
	
    std::cout << std::endl << BOLDWHITE << "Call of getGrade   : " << RESET << b.getGrade() << std::endl;
    
    std::cout << BOLDWHITE << "Call of incrementGrade." << RESET << std::endl;
    b.incrementGrade();


    std::cout << std::endl << BOLDWHITE << "Call of getGrade   : " << RESET;
    std::cout << b.getGrade() << std::endl;
    
    std::cout << BOLDWHITE << "Call of decrementGrade." << RESET << std::endl;
    b.decrementGrade();
    std::cout << std::endl << BOLDWHITE << "Call of getGrade   : " << RESET;
    std::cout << b.getGrade() << std::endl;
    
    std::cout << BOLDWHITE << "Call of decrementGrade." << RESET << std::endl;
    b.decrementGrade();
    
    std::cout << std::endl << BOLDWHITE << "Call of getGrade   : " << RESET;
    std::cout << b.getGrade() << std::endl;
    std::cout << BOLDWHITE << "Call of decrementGrade." << RESET << std::endl;
    b.decrementGrade();


    std::cout << std::endl << BOLDWHITE << "Use of overloader : " << RESET;
    std::cout << b << std::endl;

    std::cout << std::endl << BOLDWHITE << "Call of decrementGrade" << YELLOW << " using a try and catch : "<< RESET << std::endl;

    try {
        b.decrementGrade();
    }
    catch (std::exception &e) {
        std::cerr << "Output of Exception:  " << e.what() << std::endl;
    }

    std::cout << std::endl << BOLDWHITE << "Creation of 151-lvl bureaucrat" << YELLOW << " using a try and catch : "<< RESET << std::endl;

    try {
        Bureaucrat("Donatien", 151);
    }
    catch (std::exception &e) {
        std::cerr << "Output of Exception:  " << e.what() << std::endl;
    }
    std::cout << std::endl << BOLDWHITE << "Creation of 0-lvl bureaucrat" << YELLOW << " using a try and catch : "<< RESET << std::endl;

    try {
        Bureaucrat("Donatien", 0);
    }
    catch (std::exception &e) {
        std::cerr << "Output of Exception:  " << e.what() << std::endl;
    }

    return(0);
}
