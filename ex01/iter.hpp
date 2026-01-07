/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 22:39:04 by lomont            #+#    #+#             */
/*   Updated: 2026/01/07 22:52:04 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef	ITER_HPP
#define	ITER_HPP

#include <iostream>

template< typename T >
void f( T & str ) {
	std::cout << str << std::endl;
}

template< typename T >
void f( const T & str ) {
	std::cout << "const " << str << std::endl;
}

template< typename T, typename L, typename F>
void iter( const T array[], const L & size, F f(const T &)) {
	std::cout << "const iter function called" << std::endl;
	for (L i = 0; i < size; i++) {
		f(array[i]);
	}
};

template< typename T, typename L, typename F>
void iter( T array[], const L & size, F f(T &)) {
	for (L i = 0; i < size; i++) {
		f(array[i]);
	}
};

#endif
