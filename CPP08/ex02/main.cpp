/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:54:15 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/04 18:17:06 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void subjectTest()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

int main(void)
{
	std::cout << std::endl << std::endl << BOLDGREEN << "----- SUBJECT TEST -----" << RESET << std::endl << std::endl;
	subjectTest();

	std::cout << std::endl << std::endl << BOLDGREEN << "----- CUSTOM TEST -----" << RESET << std::endl << std::endl;
	MutantStack<int> mutant;

	mutant.push(10);
	mutant.push(20);

	std::cout << "Mutant : " << BOLDYELLOW << mutant.top() << RESET << std::endl;

	mutant.push(40);
	mutant.pop();
	mutant.push(75);
	std::cout << "Mutant : " << BOLDYELLOW << mutant.top() << RESET << std::endl << std::endl;

	MutantStack<int>::iterator it = mutant.begin();
	for (; it != mutant.end(); it++) {
		std::cout << "Mutant iteration : " << BOLDMAGENTA << *it << RESET << std::endl;
	}

	std::stack<int> legacy = std::stack<int>(mutant);
	std::cout << std::endl << "Stack size: " << BOLDCYAN << legacy.size() << RESET << std::endl;

	legacy.pop();
	std::cout << std::endl << "Stack size: " << BOLDCYAN << legacy.size() << RESET << std::endl;
	std::cout << "Mutant size: " << BOLDMAGENTA << mutant.size() << RESET << std::endl;

	mutant.pop();
	std::cout << std::endl << "Stack size: " << BOLDCYAN << legacy.top() << RESET << std::endl;
	std::cout << "Mutant size: " << BOLDMAGENTA << mutant.top() << RESET << std::endl;
	
	return (0);
}