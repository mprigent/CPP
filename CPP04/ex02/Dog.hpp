/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 00:46:01 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/19 20:21:24 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *_brain;
		
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator =(const Dog &assign);
		~Dog();
		void makeSound() const;
};

#endif