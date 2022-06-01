/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 21:08:21 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/01 14:00:06 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base *temp;
	temp = generate();

	Base &tempref = *temp;

	std::cout << "Trying to identify base with " << BOLDYELLOW << "* " << RESET << "..." << std::endl;
	identify(temp);

	std::cout << std::endl << "Trying to identify base with " << BOLDYELLOW << "& " << RESET << "..." << std::endl;
	identify(tempref);

	return(0);
}