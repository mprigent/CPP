/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:44:05 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/19 20:07:30 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain() {
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain &Brain::operator =(Brain const &assign)
{
	std::cout << "Assignation Brain operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = assign._ideas[i];
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain Destructor called" << std::endl;
}
