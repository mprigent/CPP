/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:50:33 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/04 17:47:12 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0), _tab() {
	std::cout << BOLDWHITE << "Default constructor called" << RESET << std::endl;
}

Span::Span(Span const &copy) {
	*this = copy;
}

Span::Span(unsigned int size)
{
	if (size <= 0)
		throw std::exception();
	_size = size;
}

Span &Span::operator=(Span const &assign)
{
	_size = assign._size;
	_tab = assign._tab;
	return (*this);
}

Span::~Span(void){
}

void Span::addNumber(int n)
{
	if (_tab.size() >= _size)
		throw std::exception();
	_tab.push_back(n);
}

std::vector<int> Span::getvec(void) const {
	return (_tab);
}

unsigned int Span::shortestSpan(void)
{
	unsigned int shortest = _tab[1] - _tab[0];
	unsigned int distance = 0;

	std::vector<int> temp = _tab;
	if (_size < 2)
		throw std::exception();
	std::sort(temp.begin(), temp.end());
	for (unsigned int i = 1; i < temp.size(); i++)
	{
		distance = temp[i] - temp[i - 1];
		if (distance < shortest)
			shortest = distance;
	}
	return (shortest);
}

unsigned int Span::longestSpan(void) const
{
	if (_tab.size() <= 1)
		throw(std::out_of_range("Not enough elements for a span"));
	return (*std::max_element(_tab.begin(), _tab.end()) - *std::min_element(_tab.begin(), _tab.end()));
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_size - _tab.size() < (unsigned long int)std::distance(begin, end))
		throw std::exception();
	_tab.insert(_tab.end(), begin, end);
}
