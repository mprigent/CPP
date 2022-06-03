/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:15:55 by mprigent          #+#    #+#             */
/*   Updated: 2022/06/04 00:18:55 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>
# include <stdexcept>

# define RESET       "\033[0m"
# define BLACK       "\033[30m"             /* Black */
# define RED         "\033[31m"             /* Red */
# define GREEN       "\033[32m"             /* Green */
# define YELLOW      "\033[33m"             /* Yellow */
# define BLUE        "\033[34m"             /* Blue */
# define MAGENTA     "\033[35m"             /* Magenta */
# define CYAN        "\033[36m"             /* Cyan */
# define WHITE       "\033[37m"             /* White */
# define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
# define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
# define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
# define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
# define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
# define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

template <class T>
class Array
{
	private:
		T *_array;
		unsigned int _size;

	public:
		Array()
		{
			_array = NULL;
			_size = 0;
		};

		Array(unsigned int n)
		{
			_array = new T[n]();
			_size = n;
		};

		Array(const Array<T> &copy)
		{
			_array = new T[copy.size()];
			_size = copy.size();
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = copy._array[i];
		};

		Array<T> &operator =(const Array<T> &assign)
		{
			if (this != &assign)
			{
				delete[] _array;
				_array = new T[assign.size()];
				_size = assign.size();
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = assign._array[i];
			}
			return *this;
		};

		~Array()
		{
			delete[] _array;
		};

		T &operator[](unsigned int index)
		{
			if (index >= _size)
				throw std::overflow_error("index out of range");
			return _array[index];
		};

		unsigned int size() const
		{
			return _size;
		};
};

#endif