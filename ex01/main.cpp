/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 22:39:06 by lomont            #+#    #+#             */
/*   Updated: 2026/01/15 19:56:31 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void )
{
	std::string		array[5] = {"One", "Two", "Three", "Four", "Five"};
	::iter(array, 5, static_cast<void(*) (std::string &)> (f));

	const size_t	arrayS[5] = {1, 2, 3, 4, 5};
	::iter(arrayS, 5, static_cast<void(*) (const size_t &)> (f));

	return (0);
}

