/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:22:17 by lomont            #+#    #+#             */
/*   Updated: 2026/01/07 21:52:42 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template< typename T, typename U>
class Array
{
	private:
		T * 	array;
		U	size;
	public:
		Array( void );
		Array( unsigned int n );
		Array( Array & src );
		Array & operator=( Array & other );
		~Array( void );
		T & operator[]( U index );
		U getSize( void );
};

#include "Array.tpp"

#endif
