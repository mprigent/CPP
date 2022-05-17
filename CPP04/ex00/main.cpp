/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:44:05 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/18 01:19:06 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
	const Animal *meta = new Animal(); 
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	std::cout << dog->getType() << " " << std::endl; 
	std::cout << cat->getType() << " " << std::endl; 
	dog->makeSound(); //will output the cat sound! j->makeSound();
	cat->makeSound();
	meta->makeSound();
	delete(meta);
	delete(dog);
	delete(cat);
	
	return 0; 
}