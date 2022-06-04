/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:55:59 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/04 17:20:05 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// class Awesome
// {
// public:
// Awesome( void ) : _n( 42 ) { return; }
// int get( void ) const { return this->_n; }
// private:
// int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }
// int main() {
// int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// Awesome tab2[5];

// iter( tab, 5, print );
// iter( tab2, 5, print );

// return 0;
// }

int main(void)
{
	int tab[10];

	int len = 10;
	for(int i = 0; i < len; i++)
		tab[i] = 'A' + i;
		
	std::cout << BOLDMAGENTA << "Call of iter : " << RESET << std::endl;
	iter(tab, len, print_elem);
	
	std::cout << std::endl;
	for (int j = 0; j < len; j++)
		tab[j] = 'Z' - j;

	std::cout << BOLDMAGENTA << "Call of iter : " << RESET << std::endl;
	iter(tab, len, print_elem);

	return (0);
}
