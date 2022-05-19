/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:15:30 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/19 19:50:02 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *_brain;
		
	public:
		Cat();
		Cat(const Cat &copy);
		Cat &operator =(const Cat &assign);
		~Cat();
		void makeSound() const;
};

#endif