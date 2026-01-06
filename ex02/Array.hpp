/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:22:17 by lomont            #+#    #+#             */
/*   Updated: 2026/01/07 00:06:40 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template< typename T, typename U>
class Array
{
	private:
		T * array;
	public:
		Array( void ) : array(new T[0]) {
			std::cout << "Default Array constructor called" << std::endl;
		};
		Array( unsigned int n ) {
			this->array = new T[n];
			for (size_t i = 0; i < n; i++) {
				array[i] = 1;
			}
		};
		Array( Array & src ) {
			if (!src.array)
				this->array = NULL;
			else {
				U len = src.size();
				this->array = new T[len];
				for (U i = 0; i < len; i++) {
					this->array[i] = src.array[i];
				}
			}
		}
		Array & operator=( Array & other ) {
			if (this != &other) {
				U len = other.size();
				delete[] array;
				array = new T[len];
				for (U i = 0; i < len; i++) {
					this->array[i] = other.array[i];
				}
			}
			return (*this);
		}
		~Array( void ) {
			if (this->array)
				delete [] array;
		};
		T & operator[](U index) {
			if (index >= size())
				throw std::exception();
			return ( array[index] );
		};
		U size( void ) {
			U	i;
			for (i = 0; this->array[i]; i++);
			return (i);
		}
};

#endif
