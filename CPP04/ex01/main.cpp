/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:44:05 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/20 21:17:08 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() 
{
	/* =============================== ANIMAL TEST =============================== */
	
	std::cout << std::endl << BOLDMAGENTA << "----- ANIMAL -----" << RESET << std::endl << std::endl;
	std::cout << BOLDGREEN << "Constructor : " << RESET << std::endl;
	const Animal *meta = new Animal();

	std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET << meta->getType() << std::endl;
	
    std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
    meta->makeSound();
    
    std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
    delete meta;

	/* =============================== DOG TEST =============================== */

	std::cout << std::endl << BOLDYELLOW << "----- DOG -----" << RESET << std::endl << std::endl;
	std::cout << GREEN << "Constructor : " << RESET << std::endl;
	const Animal *dog = new Dog();

	std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET << dog->getType() << std::endl;

	std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
	dog->makeSound();

	std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
	delete dog;

	/* =============================== CAT TEST =============================== */
	
    std::cout << std::endl << BOLDCYAN << "----- CAT -----" << std::endl << std::endl;
    std::cout << GREEN << "Constructor : " << RESET << std::endl;
    const Animal *cat = new Cat();
    
    std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET << cat->getType() << std::endl;
    
    std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
    cat->makeSound();
    
    std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
    delete cat;

	/* =============================== WRONG ANIMAL TEST =============================== */

    std::cout << std::endl << BOLDMAGENTA  "----- WRONG ANIMAL -----" << std::endl << std::endl;
    std::cout << GREEN << "Constructor : " << RESET << std::endl;
    const WrongAnimal *wani = new WrongAnimal();
    
    std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET << wani->getType() << std::endl;
    
    std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
    wani->makeSound();
    
    std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
    delete wani;

	/* =============================== WRONG CAT TEST =============================== */
	
    std::cout << std::endl << BOLDCYAN << "----- WRONG CAT -----" << std::endl << std::endl;
    std::cout << GREEN << "Constructor : " << RESET << std::endl;
    const WrongAnimal *w_cat = new WrongCat();
    
    std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET << w_cat->getType() << std::endl;
    
    std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
    w_cat->makeSound();
    
    std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
    delete w_cat;

	/* =============================== 5 DOG TEST =============================== */
	
	std::cout << std::endl << BOLDGREEN << "Construction of 5 dogs :" << std::endl;
    
	Animal *(tab[10]);
	for (int i = 0; i < 5; i++)
	{
		std::cout << BOLDWHITE << std::endl;
		tab[i] = new Dog();
	}
	std::cout << RESET;

	/* =============================== 5 CAT TEST =============================== */
	
	std::cout << std::endl << BOLDGREEN << "Construction of 5 cats :" << RESET << std::endl;
	for (int i = 5; i < 10; i++)
	{
		std::cout << BOLDWHITE << std::endl;
		tab[i] = new Cat();
	}

	/* =============================== GET TYPE TEST =============================== */
	
	std::cout << std::endl << BOLDGREEN << "Call of getType :" << RESET << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Array[" << i << "] : " << tab[i]->getType() << std::endl;
	}

	/* =============================== MAKE SOUND TEST =============================== */
	
	std::cout << std::endl << BOLDGREEN << "Call of makeSound :" << RESET << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Array[" << i << "] : ";
		tab[i]->makeSound();
	}

	/* =============================== DESTRUCTOR TEST =============================== */
	
	std::cout << std::endl << BOLDRED << "Destruction of Array :" << RESET << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << GREEN << "Array[" << i << "] : " << RESET << std::endl;
		delete tab[i];
		std::cout << std::endl;
	}

	/* =============================== DEEP COPY TEST =============================== */

	std::cout << std::endl << BOLDCYAN << "----- DEEP COPY -----" << RESET << std::endl << std::endl;
	
	Cat cat1 = Cat();
	Cat cat2 = Cat();
	std::cout << std::endl << BOLDWHITE << "Adress of cat2 : " << RESET << BOLDCYAN << &cat2 << RESET << std::endl << std::endl;
	cat1 = cat2;
	std::cout << std::endl << BOLDWHITE << "Adress of cat1 : " << RESET << BOLDGREEN << &cat1 << RESET << std::endl;
	std::cout << BOLDWHITE << "Adress of cat2 : " << RESET << BOLDCYAN << &cat2 << RESET << std::endl << std::endl;
	
	return 0;
}