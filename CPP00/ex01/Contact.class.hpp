/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:32:29 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/05 22:44:23 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>

void ft_search_print(std::string cmd);

class Contact
{
	private:
		int _index;
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
		
	public:
		void init_index(int nbr);
		void init_first_name(std::string cmd);
		void init_last_name(std::string cmd);
		void init_nickname(std::string cmd);
		void init_phone_number(std::string cmd);
		void init_darkest_secret(std::string cmd);
		int get_index() const;
		std::string get_first_name() const;
		std::string get_last_name() const;
		std::string get_nickname() const;
		std::string get_phone_number() const;
		std::string get_darkest_secret() const;
};

#endif