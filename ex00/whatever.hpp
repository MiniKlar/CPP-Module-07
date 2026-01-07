/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 22:16:28 by lomont            #+#    #+#             */
/*   Updated: 2026/01/07 22:52:10 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef	WHATEVER_HPP
#define	WHATEVER_HPP

#include <iostream>

template< typename T >
void	swap( T & a, T & b ) {
	T temp;

	temp = a;
	a = b;
	b = temp;
};

template < typename T>
T &		min( T & a, T & b ) {
	if ( a == b )
		return ( b );
	else if ( a > b )
		return ( b );
	else
		return ( a );
};

template < typename T>
T &		max( T & a, T & b ) {
	if ( a == b )
		return ( b );
	else if ( a > b )
		return ( a );
	else
		return ( b );
};

#endif
