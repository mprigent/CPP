/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 02:02:08 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/06 01:39:48 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name); //constructeur appelé quand la class est instanciée
		~Zombie(); //destructeur appelé quand l'instance est détruite
		void announce();
		
	private:
		std::string _name;
};

# endif