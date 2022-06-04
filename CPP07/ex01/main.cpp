/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:55:59 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/04 15:19:11 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int tab[10];

	int len = 10;
	for(int i = 0; i < len; i++)
		tab[i] = 'A' + i;
		
	std::cout << BOLDMAGENTA << "Call of iter : " << RESET << std::endl;
	iter(tab, len, print_elem);
	
	std::cout << std::endl;
	for (int j = 0; j < len; j++)
		tab[j] = 'Z' - j;

	std::cout << BOLDMAGENTA << "Call of iter : " << RESET << std::endl;
	iter(tab, len, print_elem);

	return (0);
}
