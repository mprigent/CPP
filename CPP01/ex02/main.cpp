/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:58:28 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/08 21:23:55 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str; //pointer
	std::string	&stringREF = str; //reference
	
	std::cout << "Address of str            : " << &str << std::endl;
	std::cout << "Address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "Address held by stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of str              : " << str << std::endl;
	std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF: " << stringREF << std::endl;
	return (0);
}