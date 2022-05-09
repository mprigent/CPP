/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:01:57 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/10 00:18:33 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
		void _debug(void) const;
        void _info(void) const;
        void _warning(void) const;
        void _error(void) const;
		
	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);
};


#endif
