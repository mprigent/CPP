/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:54:12 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/30 21:09:56 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data str("This is a message !");

	uintptr_t temp = serialize(&str);

	std::cout << "Serialize       : " << temp << std::endl;
	std::cout << "Deserialize     : " << deserialize(temp) << std::endl << std::endl;
	std::cout << "Re Serialize    : " << serialize(deserialize(temp)) << std::endl;

	std::cout << "Re DeSerialize  : " << deserialize(serialize(deserialize(temp))) << std::endl << std::endl;

	std::cout << "Serialize???    : " << deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(temp))))))))))))))))))))))))) << std::endl;
	return (0);
}