/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:22:17 by lomont            #+#    #+#             */
/*   Updated: 2026/01/15 20:08:30 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef	ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template< typename T, typename U>
class Array
{
	private:
		T * 	array;
		U		_size;
	public:
		//canonical form

		Array( void );
		Array( unsigned int n );
		Array( Array & src );
		Array & operator=( Array & other );
		~Array( void );

		//member functions
		T & operator[]( U index );
		U size( void );
};

#include "Array.tpp"

#endif
