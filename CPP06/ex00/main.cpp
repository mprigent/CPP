/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:09:05 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/30 20:49:08 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{	
	if (argc < 2)
	{
		std::cout << BOLDRED << "Error : " << RESET << "please enter a number" << std::endl;
		return (1);
	}
	if (argc > 2)
	{
		std::cout << BOLDRED << "Error : " << RESET << "too many arguments" << std::endl;
		return (1);
	}

	Convert conv(argv[1]);

	(void)static_cast<char>(conv);
	(void)static_cast<int>(conv);
	(void)static_cast<float>(conv);
	(void)static_cast<double>(conv);

	return (0);
}
