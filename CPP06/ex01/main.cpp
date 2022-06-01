/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:54:12 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/01 13:30:55 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data data("This is a message!");

	uintptr_t temp = serialize(&data);

	std::cout << std::endl << BOLDMAGENTA << "Serialize       : " << RESET << temp << std::endl;
	std::cout << BOLDMAGENTA << "Deserialize     : " << RESET << deserialize(temp) << std::endl << std::endl;

	std::cout << BOLDMAGENTA << "Re Serialize    : " << RESET << serialize(deserialize(temp)) << std::endl;
	std::cout << BOLDMAGENTA << "Re DeSerialize  : " << RESET << deserialize(serialize(deserialize(temp))) << std::endl << std::endl;

	return (0);
}
