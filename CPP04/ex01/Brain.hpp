/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:46:07 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/19 20:03:11 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP
#define BRAIN_CPP

# include <iostream>

class Brain {
	private:
		std::string _ideas[100];
	
	public:
		Brain();
		Brain(const Brain &copy);
		Brain &operator =(const Brain &assign);
		~Brain();
		
		std::string getIdeas(int i) const;
		void setIdeas(int i, std::string ideas);

};

#endif