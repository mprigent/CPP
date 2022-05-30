/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:54:36 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/30 21:04:55 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
	private :
		std::string _data;
		
	public:
		Data(std::string str);
		Data(Data const &copy);
		Data &operator =(Data const &assign);
		~Data(void);
};

std::ostream &operator <<(std::ostream &ostream, const Data &data);

#endif
