/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:44:05 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/19 19:36:15 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
	/* =============================== ANIMAL TEST =============================== */
	
	std::cout << std::endl << BOLDWHITE << "----- ANIMAL -----" << RESET << std::endl << std::endl;
	std::cout << BOLDGREEN << "Constructor : " << RESET << std::endl;
	const Animal *meta = new Animal();

	std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET;
	std::cout << meta->getType() << std::endl;
	
    std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
    meta->makeSound();
    
    std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
    delete meta;

	/* =============================== DOG TEST =============================== */

	std::cout << std::endl << BOLDYELLOW << "----- DOG -----" << RESET << std::endl << std::endl;
	std::cout << GREEN << "Constructor : " << RESET << std::endl;
	const Animal *dog = new Dog();

	std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET;
	std::cout << dog->getType() << std::endl;

	std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
	dog->makeSound();

	std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
	delete dog;

	/* =============================== CAT TEST =============================== */
	
    std::cout << std::endl << BOLDCYAN << "----- CAT -----" << std::endl << std::endl;
    std::cout << GREEN << "Constructor : " << RESET << std::endl;
    const Animal *cat = new Cat();
    
    std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET;
    std::cout << cat->getType() << std::endl;
    
    std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
    cat->makeSound();
    
    std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
    delete cat;

	/* =============================== WRONG ANIMAL TEST =============================== */

    std::cout << std::endl << BOLDMAGENTA  "----- WRONG ANIMAL -----" << std::endl << std::endl;
    std::cout << GREEN << "Constructor : " << RESET << std::endl;
    const WrongAnimal *wani = new WrongAnimal();
    
    std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET;
    std::cout << wani->getType() << std::endl;
    
    std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
    wani->makeSound();
    
    std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
    delete wani;

	/* =============================== WRONG CAT TEST =============================== */
	
    std::cout << std::endl << BOLDCYAN << "----- WRONG CAT -----" << std::endl << std::endl;
    std::cout << GREEN << "Constructor : " << RESET << std::endl;
    const WrongAnimal *w_cat = new WrongCat();
    
    std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET;
    std::cout << w_cat->getType() << std::endl;
    
    std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
    w_cat->makeSound();
    
    std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
    delete w_cat;

	return 0; 
}