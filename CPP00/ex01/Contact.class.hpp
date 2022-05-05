/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:32:29 by mprigent          #+#    #+#             */
/*   Updated: 2022/05/05 23:22:07 by mprigent         ###   ########.fr       */
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
		//attributs
		int _index;
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
		
	public:
		//accesseurs
		
		//accès en lecture: récupère la valeur de l'attribut, ne modifie pas l'instance courante. 
		//Renvoie une copie de l'attribut (si valeur modifiée, l'état de la class ne change pas)
		int get_index() const;
		std::string get_first_name() const;
		std::string get_last_name() const;
		std::string get_nickname() const;
		std::string get_phone_number() const;
		std::string get_darkest_secret() const;
		//accès en écriture: set la valeur de l'attribut
		void set_index(int nbr);
		void set_first_name(std::string cmd);
		void set_last_name(std::string cmd);
		void set_nickname(std::string cmd);
		void set_phone_number(std::string cmd);
		void set_darkest_secret(std::string cmd);
};

#endif