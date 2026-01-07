/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 21:06:15 by lomont            #+#    #+#             */
/*   Updated: 2026/01/07 22:32:51 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//Canonical form of the template

template< typename T, typename U >
Array<T, U>::Array( void ) : array(new T()), _size(0) {
	std::cout << "Default Array constructor called" << std::endl;
	return ;
};

template<typename T, typename U >
Array<T, U>::Array( unsigned int n ) : array(new T[n]), _size(n) {
	std::cout << "Specific Array constructor called" << std::endl;
}

template< typename T, typename U >
Array<T, U>::Array( Array & src ) {
	std::cout << "Array Copy constructor called" << std::endl;
	if (!src.array)
		this->array = NULL;
	else {
		U len = src.size();
		this->_size = len;
		this->array = new T[len];
		for (U i = 0; i < len; i++) {
			this->array[i] = src.array[i];
		}
	}
};

template< typename T, typename U >
Array<T, U> & Array<T, U>::operator=( Array & other ) {
	std::cout << "Array operator assignment called" << std::endl;
	if (this != &other) {
		U len = other.size();
		this->_size = len;
		delete[] array;
		array = new T[len];
		for (U i = 0; i < len; i++) {
			this->array[i] = other.array[i];
		}
	}
	return ( *this );
};


template< typename T, typename U >
Array<T, U>::~Array( void ) {
	std::cout << "Array destructor called" << std::endl;
	if ( this->array )
		delete[] this->array;
	return ;
};

// Member functions implementation

template< typename T, typename U >
T & Array<T, U>::operator[](U index) {
	if (index >= _size)
		throw std::exception();
	return ( array[index] );
};

template< typename T, typename U >
U Array<T, U>::size( void ) {
	return ( this->_size );
};
