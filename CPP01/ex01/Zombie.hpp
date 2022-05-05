/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:40:56 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/06 01:51:46 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <sstream>

class Zombie {
	public:
		Zombie();
		~Zombie();
		Zombie(std::string name);
		void announce();
		
	private:
		std::string	_name;
};

#endif