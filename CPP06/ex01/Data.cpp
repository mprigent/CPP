/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:54:23 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/30 21:05:44 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(std::string str) : _data(str) {
}

Data::Data(Data const &copy) {
	*this = copy;
}

Data &Data::operator=(const Data &assign)
{
	_data = assign._data;
	return (*this);
}

Data::~Data(void) {
}

std::ostream &operator <<(std::ostream &ostream, const Data &data)
{
	(void)data;
	ostream << "Data";
	return (ostream);
}