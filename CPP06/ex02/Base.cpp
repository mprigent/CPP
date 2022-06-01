/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:55:41 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/01 13:58:20 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
	Base *temp;
	int rnd;

	srand(time(NULL));
	rnd = 1 + (rand() % 3);
	std::cout << std::endl << BOLDMAGENTA << "Generate " << RESET;
	if (rnd == 1)
	{
		temp = new A;
		std::cout << BOLDGREEN << "A" << RESET << std::endl << std::endl;
	}
	if (rnd == 2)
	{
		temp = new B;
		std::cout << BOLDGREEN << "B" << RESET << std::endl << std::endl;
	}
	if (rnd == 3)
	{
		temp = new C;
		std::cout << BOLDGREEN << "C" << RESET << std::endl << std::endl;
	}
	return(temp);
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "This Base is a " << BOLDGREEN << "A !" << RESET << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "This Base is a " << BOLDGREEN << "B !" << RESET << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "This Base is a " << BOLDGREEN << "C !" << RESET << std::endl;
}

void identify(Base &p)
{
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "This Base is a " << BOLDGREEN << "A !" << RESET << std::endl << std::endl;
		return ;
	}
	catch (std::bad_cast &bc) {}
	try{
		(void)dynamic_cast<B &>(p);
		std::cout << "This Base is a " << BOLDGREEN << "B !" << RESET << std::endl << std::endl;
		return ;
	}
	catch (std::bad_cast &bc) {}
	try{
		(void)dynamic_cast<C &>(p);
		std::cout << "This Base is a " << BOLDGREEN << "C !" << RESET << std::endl << std::endl;
		return ;
	}
	catch (std::bad_cast &bc) {}
}
