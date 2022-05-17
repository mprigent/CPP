/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:44:05 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/18 01:26:14 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
	std::cout << std::endl;
	const Animal *meta = new Animal(); 
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	std::cout << std::endl;
	
	std::cout << dog->getType() << " " << std::endl; 
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;
	
	dog->makeSound(); //will output the cat sound! j->makeSound();
	cat->makeSound();
	meta->makeSound();
	
	std::cout << std::endl;
	delete(meta);
	delete(dog);
	delete(cat);
	
	return 0; 
}