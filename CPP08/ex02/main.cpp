/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:54:15 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/04 18:53:33 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	{
		std::cout << std::endl << std::endl << BOLDGREEN << "----- MUTANT STACK TEST -----" << RESET << std::endl << std::endl;
		
		MutantStack<int> mstack;
		
		mstack.push(5);
		mstack.push(17);
		
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
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
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	{
		std::cout << std::endl << std::endl << BOLDGREEN << "----- LIST TEST -----" << RESET << std::endl << std::endl;

		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);
		
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;


		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		
		// ++it;
		// --it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	return 0;
}
