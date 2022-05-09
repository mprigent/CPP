/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:35:39 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/09 21:24:58 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon{
	private:
		std::string	_type;
	
	public:
		Weapon(std::string _type);
		~Weapon();
		std::string get_Type() const;
		void set_Type(std::string type);
};

#endif