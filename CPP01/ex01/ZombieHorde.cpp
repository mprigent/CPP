/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:41:23 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/08 20:55:35 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		  std::stringstream str_stream; //associates a string object with a stream allowing you to read from the string as if it were a stream (like cin)
		  str_stream << (i);
		  horde[i].set_Name(name + " " + str_stream.str()); // str() get and set string object whose content is present in the stream.
	}
	return (horde);
}