/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:37:05 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/09 21:25:47 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon* _weapon; //pointer -> B will not always have a weapon (a pointer can be NULL)
		std::string const _name;
		
	public:
		HumanB(std::string name);
		~HumanB();
		void set_Weapon(Weapon& weaponptr);
		void attack() const;
};


#endif